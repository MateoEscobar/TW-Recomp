#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0044A738
// Address: 0x44a738 - 0x44a9a8
void sub_0044A738_0x44a738(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0044A738_0x44a738");
#endif

    switch (ctx->pc) {
        case 0x44a7ccu: goto label_44a7cc;
        case 0x44a7f8u: goto label_44a7f8;
        case 0x44a808u: goto label_44a808;
        case 0x44a8e8u: goto label_44a8e8;
        case 0x44a8f8u: goto label_44a8f8;
        default: break;
    }

    ctx->pc = 0x44a738u;

    // 0x44a738: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x44a738u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x44a73c: 0x24030140  addiu       $v1, $zero, 0x140
    ctx->pc = 0x44a73cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    // 0x44a740: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x44a740u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x44a744: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x44a744u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x44a748: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x44a748u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x44a74c: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x44a74cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44a750: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x44a750u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x44a754: 0x8c820820  lw          $v0, 0x820($a0)
    ctx->pc = 0x44a754u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2080)));
    // 0x44a758: 0x435018  mult        $t2, $v0, $v1
    ctx->pc = 0x44a758u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 10, (int32_t)result); }
    // 0x44a75c: 0x1441021  addu        $v0, $t2, $a0
    ctx->pc = 0x44a75cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 4)));
    // 0x44a760: 0xac4906dc  sw          $t1, 0x6DC($v0)
    ctx->pc = 0x44a760u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1756), GPR_U32(ctx, 9));
    // 0x44a764: 0xac8901c0  sw          $t1, 0x1C0($a0)
    ctx->pc = 0x44a764u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 448), GPR_U32(ctx, 9));
    // 0x44a768: 0x8c820160  lw          $v0, 0x160($a0)
    ctx->pc = 0x44a768u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 352)));
    // 0x44a76c: 0x54480006  bnel        $v0, $t0, . + 4 + (0x6 << 2)
    ctx->pc = 0x44A76Cu;
    {
        const bool branch_taken_0x44a76c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 8));
        if (branch_taken_0x44a76c) {
            ctx->pc = 0x44A770u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x44A76Cu;
            // 0x44a770: 0x8c830184  lw          $v1, 0x184($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 388)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x44A788u;
            goto label_44a788;
        }
    }
    ctx->pc = 0x44A774u;
    // 0x44a774: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x44a774u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x44a778: 0xaca00014  sw          $zero, 0x14($a1)
    ctx->pc = 0x44a778u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 0));
    // 0x44a77c: 0xaca00010  sw          $zero, 0x10($a1)
    ctx->pc = 0x44a77cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 0));
    // 0x44a780: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x44a780u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
    // 0x44a784: 0x8c830184  lw          $v1, 0x184($a0)
    ctx->pc = 0x44a784u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 388)));
label_44a788:
    // 0x44a788: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x44a788u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x44a78c: 0x54620003  bnel        $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x44A78Cu;
    {
        const bool branch_taken_0x44a78c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x44a78c) {
            ctx->pc = 0x44A790u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x44A78Cu;
            // 0x44a790: 0xacc90000  sw          $t1, 0x0($a2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 9));
            ctx->in_delay_slot = false;
            ctx->pc = 0x44A79Cu;
            goto label_44a79c;
        }
    }
    ctx->pc = 0x44A794u;
    // 0x44a794: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x44A794u;
    {
        const bool branch_taken_0x44a794 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x44A798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44A794u;
        // 0x44a798: 0xacc80000  sw          $t0, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44a794) {
            ctx->pc = 0x44A7B0u;
            goto label_44a7b0;
        }
    }
    ctx->pc = 0x44A79Cu;
label_44a79c:
    // 0x44a79c: 0x8c820184  lw          $v0, 0x184($a0)
    ctx->pc = 0x44a79cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 388)));
    // 0x44a7a0: 0x38420002  xori        $v0, $v0, 0x2
    ctx->pc = 0x44a7a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)2);
    // 0x44a7a4: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x44a7a4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x44a7a8: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x44a7a8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    // 0x44a7ac: 0xace20004  sw          $v0, 0x4($a3)
    ctx->pc = 0x44a7acu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 2));
label_44a7b0:
    // 0x44a7b0: 0x8c830160  lw          $v1, 0x160($a0)
    ctx->pc = 0x44a7b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 352)));
    // 0x44a7b4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x44a7b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x44a7b8: 0x54620006  bnel        $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x44A7B8u;
    {
        const bool branch_taken_0x44a7b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x44a7b8) {
            ctx->pc = 0x44A7BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x44A7B8u;
            // 0x44a7bc: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x44A7D4u;
            goto label_44a7d4;
        }
    }
    ctx->pc = 0x44A7C0u;
    // 0x44a7c0: 0x3c050059  lui         $a1, 0x59
    ctx->pc = 0x44a7c0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)89 << 16));
    // 0x44a7c4: 0xc111f76  jal         func_447DD8
    ctx->pc = 0x44A7C4u;
    SET_GPR_U32(ctx, 31, 0x44A7CCu);
    ctx->pc = 0x44A7C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x44A7C4u;
    // 0x44a7c8: 0x24a5e290  addiu       $a1, $a1, -0x1D70 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959760));
    ctx->in_delay_slot = false;
    ctx->pc = 0x447DD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x447DD8u, 0x44A7C4u, 0x44A7CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44A7CCu;
label_44a7cc:
    // 0x44a7cc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x44a7ccu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44a7d0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x44a7d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_44a7d4:
    // 0x44a7d4: 0x2404fffe  addiu       $a0, $zero, -0x2
    ctx->pc = 0x44a7d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x44a7d8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x44a7d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x44a7dc: 0x120102d  daddu       $v0, $t1, $zero
    ctx->pc = 0x44a7dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44a7e0: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x44a7e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x44a7e4: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x44a7e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x44a7e8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x44a7e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x44a7ec: 0x3e00008  jr          $ra
    ctx->pc = 0x44A7ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x44A7F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44A7ECu;
        // 0x44a7f0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x44A7ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x44A7F4u;
    // 0x44a7f4: 0x0  nop
    ctx->pc = 0x44a7f4u;
    // NOP
label_44a7f8:
    // 0x44a7f8: 0x24020018  addiu       $v0, $zero, 0x18
    ctx->pc = 0x44a7f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x44a7fc: 0x3c0a0045  lui         $t2, 0x45
    ctx->pc = 0x44a7fcu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)69 << 16));
    // 0x44a800: 0x254aa990  addiu       $t2, $t2, -0x5670
    ctx->pc = 0x44a800u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294945168));
    // 0x44a804: 0x79430000  lq          $v1, 0x0($t2)
    ctx->pc = 0x44a804u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x44A990u));
label_44a808:
    // 0x44a808: 0x78c80000  lq          $t0, 0x0($a2)
    ctx->pc = 0x44a808u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x44a80c: 0x2042fffc  addi        $v0, $v0, -0x4
    ctx->pc = 0x44a80cu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 2), (int32_t)4294967292, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 2, (int32_t)tmp); }
    // 0x44a810: 0x78c90010  lq          $t1, 0x10($a2)
    ctx->pc = 0x44a810u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x44a814: 0x78ca0020  lq          $t2, 0x20($a2)
    ctx->pc = 0x44a814u;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x44a818: 0x78cb0030  lq          $t3, 0x30($a2)
    ctx->pc = 0x44a818u;
    SET_GPR_VEC(ctx, 11, READ128(ADD32(GPR_U32(ctx, 6), 48)));
    // 0x44a81c: 0x78cc0040  lq          $t4, 0x40($a2)
    ctx->pc = 0x44a81cu;
    SET_GPR_VEC(ctx, 12, READ128(ADD32(GPR_U32(ctx, 6), 64)));
    // 0x44a820: 0x78cd0050  lq          $t5, 0x50($a2)
    ctx->pc = 0x44a820u;
    SET_GPR_VEC(ctx, 13, READ128(ADD32(GPR_U32(ctx, 6), 80)));
    // 0x44a824: 0x78ce0060  lq          $t6, 0x60($a2)
    ctx->pc = 0x44a824u;
    SET_GPR_VEC(ctx, 14, READ128(ADD32(GPR_U32(ctx, 6), 96)));
    // 0x44a828: 0x78cf0070  lq          $t7, 0x70($a2)
    ctx->pc = 0x44a828u;
    SET_GPR_VEC(ctx, 15, READ128(ADD32(GPR_U32(ctx, 6), 112)));
    // 0x44a82c: 0x78b90000  lq          $t9, 0x0($a1)
    ctx->pc = 0x44a82cu;
    SET_GPR_VEC(ctx, 25, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x44a830: 0x71194108  paddh       $t0, $t0, $t9
    ctx->pc = 0x44a830u;
    SET_GPR_VEC(ctx, 8, PS2_PADDH(GPR_VEC(ctx, 8), GPR_VEC(ctx, 25)));
    // 0x44a834: 0x78b90010  lq          $t9, 0x10($a1)
    ctx->pc = 0x44a834u;
    SET_GPR_VEC(ctx, 25, READ128(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x44a838: 0x710341e8  pminh       $t0, $t0, $v1
    ctx->pc = 0x44a838u;
    SET_GPR_VEC(ctx, 8, PS2_PMINH(GPR_VEC(ctx, 8), GPR_VEC(ctx, 3)));
    // 0x44a83c: 0x710041c8  pmaxh       $t0, $t0, $zero
    ctx->pc = 0x44a83cu;
    SET_GPR_VEC(ctx, 8, PS2_PMAXH(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x44a840: 0x71394908  paddh       $t1, $t1, $t9
    ctx->pc = 0x44a840u;
    SET_GPR_VEC(ctx, 9, PS2_PADDH(GPR_VEC(ctx, 9), GPR_VEC(ctx, 25)));
    // 0x44a844: 0x78b90020  lq          $t9, 0x20($a1)
    ctx->pc = 0x44a844u;
    SET_GPR_VEC(ctx, 25, READ128(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x44a848: 0x712349e8  pminh       $t1, $t1, $v1
    ctx->pc = 0x44a848u;
    SET_GPR_VEC(ctx, 9, PS2_PMINH(GPR_VEC(ctx, 9), GPR_VEC(ctx, 3)));
    // 0x44a84c: 0x712049c8  pmaxh       $t1, $t1, $zero
    ctx->pc = 0x44a84cu;
    SET_GPR_VEC(ctx, 9, PS2_PMAXH(GPR_VEC(ctx, 9), GPR_VEC(ctx, 0)));
    // 0x44a850: 0x71284ec8  ppacb       $t1, $t1, $t0
    ctx->pc = 0x44a850u;
    SET_GPR_VEC(ctx, 9, PS2_PPACB(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x44a854: 0x71595108  paddh       $t2, $t2, $t9
    ctx->pc = 0x44a854u;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 25)));
    // 0x44a858: 0x714351e8  pminh       $t2, $t2, $v1
    ctx->pc = 0x44a858u;
    SET_GPR_VEC(ctx, 10, PS2_PMINH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 3)));
    // 0x44a85c: 0x78b90030  lq          $t9, 0x30($a1)
    ctx->pc = 0x44a85cu;
    SET_GPR_VEC(ctx, 25, READ128(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x44a860: 0x714051c8  pmaxh       $t2, $t2, $zero
    ctx->pc = 0x44a860u;
    SET_GPR_VEC(ctx, 10, PS2_PMAXH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
    // 0x44a864: 0x71795908  paddh       $t3, $t3, $t9
    ctx->pc = 0x44a864u;
    SET_GPR_VEC(ctx, 11, PS2_PADDH(GPR_VEC(ctx, 11), GPR_VEC(ctx, 25)));
    // 0x44a868: 0x78b90040  lq          $t9, 0x40($a1)
    ctx->pc = 0x44a868u;
    SET_GPR_VEC(ctx, 25, READ128(ADD32(GPR_U32(ctx, 5), 64)));
    // 0x44a86c: 0x716359e8  pminh       $t3, $t3, $v1
    ctx->pc = 0x44a86cu;
    SET_GPR_VEC(ctx, 11, PS2_PMINH(GPR_VEC(ctx, 11), GPR_VEC(ctx, 3)));
    // 0x44a870: 0x716059c8  pmaxh       $t3, $t3, $zero
    ctx->pc = 0x44a870u;
    SET_GPR_VEC(ctx, 11, PS2_PMAXH(GPR_VEC(ctx, 11), GPR_VEC(ctx, 0)));
    // 0x44a874: 0x716a5ec8  ppacb       $t3, $t3, $t2
    ctx->pc = 0x44a874u;
    SET_GPR_VEC(ctx, 11, PS2_PPACB(GPR_VEC(ctx, 11), GPR_VEC(ctx, 10)));
    // 0x44a878: 0x71996108  paddh       $t4, $t4, $t9
    ctx->pc = 0x44a878u;
    SET_GPR_VEC(ctx, 12, PS2_PADDH(GPR_VEC(ctx, 12), GPR_VEC(ctx, 25)));
    // 0x44a87c: 0x78b90050  lq          $t9, 0x50($a1)
    ctx->pc = 0x44a87cu;
    SET_GPR_VEC(ctx, 25, READ128(ADD32(GPR_U32(ctx, 5), 80)));
    // 0x44a880: 0x718361e8  pminh       $t4, $t4, $v1
    ctx->pc = 0x44a880u;
    SET_GPR_VEC(ctx, 12, PS2_PMINH(GPR_VEC(ctx, 12), GPR_VEC(ctx, 3)));
    // 0x44a884: 0x718061c8  pmaxh       $t4, $t4, $zero
    ctx->pc = 0x44a884u;
    SET_GPR_VEC(ctx, 12, PS2_PMAXH(GPR_VEC(ctx, 12), GPR_VEC(ctx, 0)));
    // 0x44a888: 0x71b96908  paddh       $t5, $t5, $t9
    ctx->pc = 0x44a888u;
    SET_GPR_VEC(ctx, 13, PS2_PADDH(GPR_VEC(ctx, 13), GPR_VEC(ctx, 25)));
    // 0x44a88c: 0x78b90060  lq          $t9, 0x60($a1)
    ctx->pc = 0x44a88cu;
    SET_GPR_VEC(ctx, 25, READ128(ADD32(GPR_U32(ctx, 5), 96)));
    // 0x44a890: 0x71a369e8  pminh       $t5, $t5, $v1
    ctx->pc = 0x44a890u;
    SET_GPR_VEC(ctx, 13, PS2_PMINH(GPR_VEC(ctx, 13), GPR_VEC(ctx, 3)));
    // 0x44a894: 0x71a069c8  pmaxh       $t5, $t5, $zero
    ctx->pc = 0x44a894u;
    SET_GPR_VEC(ctx, 13, PS2_PMAXH(GPR_VEC(ctx, 13), GPR_VEC(ctx, 0)));
    // 0x44a898: 0x71ac6ec8  ppacb       $t5, $t5, $t4
    ctx->pc = 0x44a898u;
    SET_GPR_VEC(ctx, 13, PS2_PPACB(GPR_VEC(ctx, 13), GPR_VEC(ctx, 12)));
    // 0x44a89c: 0x71d97108  paddh       $t6, $t6, $t9
    ctx->pc = 0x44a89cu;
    SET_GPR_VEC(ctx, 14, PS2_PADDH(GPR_VEC(ctx, 14), GPR_VEC(ctx, 25)));
    // 0x44a8a0: 0x78b90070  lq          $t9, 0x70($a1)
    ctx->pc = 0x44a8a0u;
    SET_GPR_VEC(ctx, 25, READ128(ADD32(GPR_U32(ctx, 5), 112)));
    // 0x44a8a4: 0x71c371e8  pminh       $t6, $t6, $v1
    ctx->pc = 0x44a8a4u;
    SET_GPR_VEC(ctx, 14, PS2_PMINH(GPR_VEC(ctx, 14), GPR_VEC(ctx, 3)));
    // 0x44a8a8: 0x71c071c8  pmaxh       $t6, $t6, $zero
    ctx->pc = 0x44a8a8u;
    SET_GPR_VEC(ctx, 14, PS2_PMAXH(GPR_VEC(ctx, 14), GPR_VEC(ctx, 0)));
    // 0x44a8ac: 0x7c890000  sq          $t1, 0x0($a0)
    ctx->pc = 0x44a8acu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 9));
    // 0x44a8b0: 0x71f97908  paddh       $t7, $t7, $t9
    ctx->pc = 0x44a8b0u;
    SET_GPR_VEC(ctx, 15, PS2_PADDH(GPR_VEC(ctx, 15), GPR_VEC(ctx, 25)));
    // 0x44a8b4: 0x71e379e8  pminh       $t7, $t7, $v1
    ctx->pc = 0x44a8b4u;
    SET_GPR_VEC(ctx, 15, PS2_PMINH(GPR_VEC(ctx, 15), GPR_VEC(ctx, 3)));
    // 0x44a8b8: 0x71e079c8  pmaxh       $t7, $t7, $zero
    ctx->pc = 0x44a8b8u;
    SET_GPR_VEC(ctx, 15, PS2_PMAXH(GPR_VEC(ctx, 15), GPR_VEC(ctx, 0)));
    // 0x44a8bc: 0x71ee7ec8  ppacb       $t7, $t7, $t6
    ctx->pc = 0x44a8bcu;
    SET_GPR_VEC(ctx, 15, PS2_PPACB(GPR_VEC(ctx, 15), GPR_VEC(ctx, 14)));
    // 0x44a8c0: 0x7c8b0010  sq          $t3, 0x10($a0)
    ctx->pc = 0x44a8c0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 11));
    // 0x44a8c4: 0x7c8d0020  sq          $t5, 0x20($a0)
    ctx->pc = 0x44a8c4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), GPR_VEC(ctx, 13));
    // 0x44a8c8: 0x7c8f0030  sq          $t7, 0x30($a0)
    ctx->pc = 0x44a8c8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), GPR_VEC(ctx, 15));
    // 0x44a8cc: 0x24a50080  addiu       $a1, $a1, 0x80
    ctx->pc = 0x44a8ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
    // 0x44a8d0: 0x24840040  addiu       $a0, $a0, 0x40
    ctx->pc = 0x44a8d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
    // 0x44a8d4: 0x1440ffcc  bnez        $v0, . + 4 + (-0x34 << 2)
    ctx->pc = 0x44A8D4u;
    {
        const bool branch_taken_0x44a8d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x44A8D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44A8D4u;
        // 0x44a8d8: 0x24c60080  addiu       $a2, $a2, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44a8d4) {
            ctx->pc = 0x44A808u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_44a808;
        }
    }
    ctx->pc = 0x44A8DCu;
    // 0x44a8dc: 0x3e00008  jr          $ra
    ctx->pc = 0x44A8DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x44A8DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x44A8E4u;
    // 0x44a8e4: 0x0  nop
    ctx->pc = 0x44a8e4u;
    // NOP
label_44a8e8:
    // 0x44a8e8: 0x24020018  addiu       $v0, $zero, 0x18
    ctx->pc = 0x44a8e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x44a8ec: 0x3c0a0045  lui         $t2, 0x45
    ctx->pc = 0x44a8ecu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)69 << 16));
    // 0x44a8f0: 0x254aa990  addiu       $t2, $t2, -0x5670
    ctx->pc = 0x44a8f0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294945168));
    // 0x44a8f4: 0x79430000  lq          $v1, 0x0($t2)
    ctx->pc = 0x44a8f4u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x44A990u));
label_44a8f8:
    // 0x44a8f8: 0x78a80000  lq          $t0, 0x0($a1)
    ctx->pc = 0x44a8f8u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x44a8fc: 0x2042fffc  addi        $v0, $v0, -0x4
    ctx->pc = 0x44a8fcu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 2), (int32_t)4294967292, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 2, (int32_t)tmp); }
    // 0x44a900: 0xa0c82d  daddu       $t9, $a1, $zero
    ctx->pc = 0x44a900u;
    SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44a904: 0x24a50080  addiu       $a1, $a1, 0x80
    ctx->pc = 0x44a904u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
    // 0x44a908: 0x7b290010  lq          $t1, 0x10($t9)
    ctx->pc = 0x44a908u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 25), 16)));
    // 0x44a90c: 0x7b2a0020  lq          $t2, 0x20($t9)
    ctx->pc = 0x44a90cu;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 25), 32)));
    // 0x44a910: 0x7b2b0030  lq          $t3, 0x30($t9)
    ctx->pc = 0x44a910u;
    SET_GPR_VEC(ctx, 11, READ128(ADD32(GPR_U32(ctx, 25), 48)));
    // 0x44a914: 0x7b2c0040  lq          $t4, 0x40($t9)
    ctx->pc = 0x44a914u;
    SET_GPR_VEC(ctx, 12, READ128(ADD32(GPR_U32(ctx, 25), 64)));
    // 0x44a918: 0x7b2d0050  lq          $t5, 0x50($t9)
    ctx->pc = 0x44a918u;
    SET_GPR_VEC(ctx, 13, READ128(ADD32(GPR_U32(ctx, 25), 80)));
    // 0x44a91c: 0x7b2e0060  lq          $t6, 0x60($t9)
    ctx->pc = 0x44a91cu;
    SET_GPR_VEC(ctx, 14, READ128(ADD32(GPR_U32(ctx, 25), 96)));
    // 0x44a920: 0x7b2f0070  lq          $t7, 0x70($t9)
    ctx->pc = 0x44a920u;
    SET_GPR_VEC(ctx, 15, READ128(ADD32(GPR_U32(ctx, 25), 112)));
    // 0x44a924: 0x710341e8  pminh       $t0, $t0, $v1
    ctx->pc = 0x44a924u;
    SET_GPR_VEC(ctx, 8, PS2_PMINH(GPR_VEC(ctx, 8), GPR_VEC(ctx, 3)));
    // 0x44a928: 0x710041c8  pmaxh       $t0, $t0, $zero
    ctx->pc = 0x44a928u;
    SET_GPR_VEC(ctx, 8, PS2_PMAXH(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x44a92c: 0x712349e8  pminh       $t1, $t1, $v1
    ctx->pc = 0x44a92cu;
    SET_GPR_VEC(ctx, 9, PS2_PMINH(GPR_VEC(ctx, 9), GPR_VEC(ctx, 3)));
    // 0x44a930: 0x712049c8  pmaxh       $t1, $t1, $zero
    ctx->pc = 0x44a930u;
    SET_GPR_VEC(ctx, 9, PS2_PMAXH(GPR_VEC(ctx, 9), GPR_VEC(ctx, 0)));
    // 0x44a934: 0x71284ec8  ppacb       $t1, $t1, $t0
    ctx->pc = 0x44a934u;
    SET_GPR_VEC(ctx, 9, PS2_PPACB(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x44a938: 0x714351e8  pminh       $t2, $t2, $v1
    ctx->pc = 0x44a938u;
    SET_GPR_VEC(ctx, 10, PS2_PMINH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 3)));
    // 0x44a93c: 0x714051c8  pmaxh       $t2, $t2, $zero
    ctx->pc = 0x44a93cu;
    SET_GPR_VEC(ctx, 10, PS2_PMAXH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
    // 0x44a940: 0x716359e8  pminh       $t3, $t3, $v1
    ctx->pc = 0x44a940u;
    SET_GPR_VEC(ctx, 11, PS2_PMINH(GPR_VEC(ctx, 11), GPR_VEC(ctx, 3)));
    // 0x44a944: 0x716059c8  pmaxh       $t3, $t3, $zero
    ctx->pc = 0x44a944u;
    SET_GPR_VEC(ctx, 11, PS2_PMAXH(GPR_VEC(ctx, 11), GPR_VEC(ctx, 0)));
    // 0x44a948: 0x716a5ec8  ppacb       $t3, $t3, $t2
    ctx->pc = 0x44a948u;
    SET_GPR_VEC(ctx, 11, PS2_PPACB(GPR_VEC(ctx, 11), GPR_VEC(ctx, 10)));
    // 0x44a94c: 0x718361e8  pminh       $t4, $t4, $v1
    ctx->pc = 0x44a94cu;
    SET_GPR_VEC(ctx, 12, PS2_PMINH(GPR_VEC(ctx, 12), GPR_VEC(ctx, 3)));
    // 0x44a950: 0x718061c8  pmaxh       $t4, $t4, $zero
    ctx->pc = 0x44a950u;
    SET_GPR_VEC(ctx, 12, PS2_PMAXH(GPR_VEC(ctx, 12), GPR_VEC(ctx, 0)));
    // 0x44a954: 0x71a369e8  pminh       $t5, $t5, $v1
    ctx->pc = 0x44a954u;
    SET_GPR_VEC(ctx, 13, PS2_PMINH(GPR_VEC(ctx, 13), GPR_VEC(ctx, 3)));
    // 0x44a958: 0x71a069c8  pmaxh       $t5, $t5, $zero
    ctx->pc = 0x44a958u;
    SET_GPR_VEC(ctx, 13, PS2_PMAXH(GPR_VEC(ctx, 13), GPR_VEC(ctx, 0)));
    // 0x44a95c: 0x71ac6ec8  ppacb       $t5, $t5, $t4
    ctx->pc = 0x44a95cu;
    SET_GPR_VEC(ctx, 13, PS2_PPACB(GPR_VEC(ctx, 13), GPR_VEC(ctx, 12)));
    // 0x44a960: 0x71c371e8  pminh       $t6, $t6, $v1
    ctx->pc = 0x44a960u;
    SET_GPR_VEC(ctx, 14, PS2_PMINH(GPR_VEC(ctx, 14), GPR_VEC(ctx, 3)));
    // 0x44a964: 0x71c071c8  pmaxh       $t6, $t6, $zero
    ctx->pc = 0x44a964u;
    SET_GPR_VEC(ctx, 14, PS2_PMAXH(GPR_VEC(ctx, 14), GPR_VEC(ctx, 0)));
    // 0x44a968: 0x71e379e8  pminh       $t7, $t7, $v1
    ctx->pc = 0x44a968u;
    SET_GPR_VEC(ctx, 15, PS2_PMINH(GPR_VEC(ctx, 15), GPR_VEC(ctx, 3)));
    // 0x44a96c: 0x71e079c8  pmaxh       $t7, $t7, $zero
    ctx->pc = 0x44a96cu;
    SET_GPR_VEC(ctx, 15, PS2_PMAXH(GPR_VEC(ctx, 15), GPR_VEC(ctx, 0)));
    // 0x44a970: 0x71ee7ec8  ppacb       $t7, $t7, $t6
    ctx->pc = 0x44a970u;
    SET_GPR_VEC(ctx, 15, PS2_PPACB(GPR_VEC(ctx, 15), GPR_VEC(ctx, 14)));
    // 0x44a974: 0x7c890000  sq          $t1, 0x0($a0)
    ctx->pc = 0x44a974u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 9));
    // 0x44a978: 0x7c8b0010  sq          $t3, 0x10($a0)
    ctx->pc = 0x44a978u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 11));
    // 0x44a97c: 0x7c8d0020  sq          $t5, 0x20($a0)
    ctx->pc = 0x44a97cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), GPR_VEC(ctx, 13));
    // 0x44a980: 0x7c8f0030  sq          $t7, 0x30($a0)
    ctx->pc = 0x44a980u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), GPR_VEC(ctx, 15));
    // 0x44a984: 0x1440ffdc  bnez        $v0, . + 4 + (-0x24 << 2)
    ctx->pc = 0x44A984u;
    {
        const bool branch_taken_0x44a984 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x44A988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44A984u;
        // 0x44a988: 0x24840040  addiu       $a0, $a0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44a984) {
            ctx->pc = 0x44A8F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_44a8f8;
        }
    }
    ctx->pc = 0x44A98Cu;
    // 0x44a98c: 0x0  nop
    ctx->pc = 0x44a98cu;
    // NOP
    // 0x44a990: 0xff00ff  .word       0x00FF00FF                   # dsra32      $zero, $ra, 3 # 00E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x44a990u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 31) >> (32 + 3));
    // 0x44a994: 0xff00ff  .word       0x00FF00FF                   # dsra32      $zero, $ra, 3 # 00E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x44a994u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 31) >> (32 + 3));
    // 0x44a998: 0xff00ff  .word       0x00FF00FF                   # dsra32      $zero, $ra, 3 # 00E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x44a998u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 31) >> (32 + 3));
    // 0x44a99c: 0xff00ff  .word       0x00FF00FF                   # dsra32      $zero, $ra, 3 # 00E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x44a99cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 31) >> (32 + 3));
    // 0x44a9a0: 0x3e00008  jr          $ra
    ctx->pc = 0x44A9A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x44A9A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x44A9A8u;
}
