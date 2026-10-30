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

// Function: sub_001118D0
// Address: 0x1118d0 - 0x111990
void sub_001118D0_0x1118d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001118D0_0x1118d0");
#endif

    switch (ctx->pc) {
        case 0x1118d0u: goto label_1118d0;
        case 0x1118d4u: goto label_1118d4;
        case 0x1118d8u: goto label_1118d8;
        case 0x1118dcu: goto label_1118dc;
        case 0x1118e0u: goto label_1118e0;
        case 0x1118e4u: goto label_1118e4;
        case 0x1118e8u: goto label_1118e8;
        case 0x1118ecu: goto label_1118ec;
        case 0x1118f0u: goto label_1118f0;
        case 0x1118f4u: goto label_1118f4;
        case 0x1118f8u: goto label_1118f8;
        case 0x1118fcu: goto label_1118fc;
        case 0x111900u: goto label_111900;
        case 0x111904u: goto label_111904;
        case 0x111908u: goto label_111908;
        case 0x11190cu: goto label_11190c;
        case 0x111910u: goto label_111910;
        case 0x111914u: goto label_111914;
        case 0x111918u: goto label_111918;
        case 0x11191cu: goto label_11191c;
        case 0x111920u: goto label_111920;
        case 0x111924u: goto label_111924;
        case 0x111928u: goto label_111928;
        case 0x11192cu: goto label_11192c;
        case 0x111930u: goto label_111930;
        case 0x111934u: goto label_111934;
        case 0x111938u: goto label_111938;
        case 0x11193cu: goto label_11193c;
        case 0x111940u: goto label_111940;
        case 0x111944u: goto label_111944;
        case 0x111948u: goto label_111948;
        case 0x11194cu: goto label_11194c;
        case 0x111950u: goto label_111950;
        case 0x111954u: goto label_111954;
        case 0x111958u: goto label_111958;
        case 0x11195cu: goto label_11195c;
        case 0x111960u: goto label_111960;
        case 0x111964u: goto label_111964;
        case 0x111968u: goto label_111968;
        case 0x11196cu: goto label_11196c;
        case 0x111970u: goto label_111970;
        case 0x111974u: goto label_111974;
        case 0x111978u: goto label_111978;
        case 0x11197cu: goto label_11197c;
        case 0x111980u: goto label_111980;
        case 0x111984u: goto label_111984;
        case 0x111988u: goto label_111988;
        case 0x11198cu: goto label_11198c;
        default: break;
    }

    ctx->pc = 0x1118d0u;

label_1118d0:
    // 0x1118d0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1118d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_1118d4:
    // 0x1118d4: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1118d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_1118d8:
    // 0x1118d8: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x1118d8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_1118dc:
    // 0x1118dc: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1118dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_1118e0:
    // 0x1118e0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1118e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1118e4:
    // 0x1118e4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1118e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1118e8:
    // 0x1118e8: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x1118e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_1118ec:
    // 0x1118ec: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1118ecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1118f0:
    // 0x1118f0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1118f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1118f4:
    // 0x1118f4: 0x3c13006f  lui         $s3, 0x6F
    ctx->pc = 0x1118f4u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)111 << 16));
label_1118f8:
    // 0x1118f8: 0x8e0627e4  lw          $a2, 0x27E4($s0)
    ctx->pc = 0x1118f8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10212)));
label_1118fc:
    // 0x1118fc: 0x8e65b9b8  lw          $a1, -0x4648($s3)
    ctx->pc = 0x1118fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294949304)));
label_111900:
    // 0x111900: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x111900u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_111904:
    // 0x111904: 0x844400b8  lh          $a0, 0xB8($v0)
    ctx->pc = 0x111904u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 184)));
label_111908:
    // 0x111908: 0x8c4300bc  lw          $v1, 0xBC($v0)
    ctx->pc = 0x111908u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 188)));
label_11190c:
    // 0x11190c: 0x60f809  jalr        $v1
label_111910:
    if (ctx->pc == 0x111910u) {
        ctx->pc = 0x111910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11190Cu;
        // 0x111910: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x111914u;
        goto label_111914;
    }
    ctx->pc = 0x11190Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x111914u);
        ctx->pc = 0x111910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11190Cu;
        // 0x111910: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11190Cu, 0x111914u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x111914u;
label_111914:
    // 0x111914: 0xae510008  sw          $s1, 0x8($s2)
    ctx->pc = 0x111914u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 17));
label_111918:
    // 0x111918: 0x3c050054  lui         $a1, 0x54
    ctx->pc = 0x111918u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)84 << 16));
label_11191c:
    // 0x11191c: 0x8e0c27e4  lw          $t4, 0x27E4($s0)
    ctx->pc = 0x11191cu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10212)));
label_111920:
    // 0x111920: 0x3c080054  lui         $t0, 0x54
    ctx->pc = 0x111920u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)84 << 16));
label_111924:
    // 0x111924: 0x113080  sll         $a2, $s1, 2
    ctx->pc = 0x111924u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_111928:
    // 0x111928: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x111928u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_11192c:
    // 0x11192c: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x11192cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_111930:
    // 0x111930: 0x2409001b  addiu       $t1, $zero, 0x1B
    ctx->pc = 0x111930u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
label_111934:
    // 0x111934: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x111934u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_111938:
    // 0x111938: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x111938u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_11193c:
    // 0x11193c: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x11193cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_111940:
    // 0x111940: 0x24a57048  addiu       $a1, $a1, 0x7048
    ctx->pc = 0x111940u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28744));
label_111944:
    // 0x111944: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x111944u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_111948:
    // 0x111948: 0x25087050  addiu       $t0, $t0, 0x7050
    ctx->pc = 0x111948u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 28752));
label_11194c:
    // 0x11194c: 0x40f809  jalr        $v0
label_111950:
    if (ctx->pc == 0x111950u) {
        ctx->pc = 0x111950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11194Cu;
        // 0x111950: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x111954u;
        goto label_111954;
    }
    ctx->pc = 0x11194Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x111954u);
        ctx->pc = 0x111950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11194Cu;
        // 0x111950: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11194Cu, 0x111954u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x111954u;
label_111954:
    // 0x111954: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x111954u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_111958:
    // 0x111958: 0x8e0627e4  lw          $a2, 0x27E4($s0)
    ctx->pc = 0x111958u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10212)));
label_11195c:
    // 0x11195c: 0x8e65b9b8  lw          $a1, -0x4648($s3)
    ctx->pc = 0x11195cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294949304)));
label_111960:
    // 0x111960: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x111960u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_111964:
    // 0x111964: 0x844400c0  lh          $a0, 0xC0($v0)
    ctx->pc = 0x111964u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 192)));
label_111968:
    // 0x111968: 0x8c4300c4  lw          $v1, 0xC4($v0)
    ctx->pc = 0x111968u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
label_11196c:
    // 0x11196c: 0x60f809  jalr        $v1
label_111970:
    if (ctx->pc == 0x111970u) {
        ctx->pc = 0x111970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11196Cu;
        // 0x111970: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x111974u;
        goto label_111974;
    }
    ctx->pc = 0x11196Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x111974u);
        ctx->pc = 0x111970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11196Cu;
        // 0x111970: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11196Cu, 0x111974u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x111974u;
label_111974:
    // 0x111974: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x111974u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_111978:
    // 0x111978: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x111978u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_11197c:
    // 0x11197c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x11197cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_111980:
    // 0x111980: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x111980u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_111984:
    // 0x111984: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x111984u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_111988:
    // 0x111988: 0x3e00008  jr          $ra
label_11198c:
    if (ctx->pc == 0x11198Cu) {
        ctx->pc = 0x11198Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111988u;
        // 0x11198c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x111990u;
        goto label_fallthrough_0x111988;
    }
    ctx->pc = 0x111988u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11198Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111988u;
        // 0x11198c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x111988u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x111988:
    ctx->pc = 0x111990u;
}
