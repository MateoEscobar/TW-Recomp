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

// Function: sub_00158488
// Address: 0x158488 - 0x158580
void sub_00158488_0x158488(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00158488_0x158488");
#endif

    switch (ctx->pc) {
        case 0x1584b8u: goto label_1584b8;
        case 0x1584c4u: goto label_1584c4;
        case 0x1584d0u: goto label_1584d0;
        case 0x1584d8u: goto label_1584d8;
        case 0x1584fcu: goto label_1584fc;
        case 0x15853cu: goto label_15853c;
        case 0x158548u: goto label_158548;
        case 0x15855cu: goto label_15855c;
        case 0x158564u: goto label_158564;
        default: break;
    }

    ctx->pc = 0x158488u;

    // 0x158488: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x158488u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x15848c: 0x3c040002  lui         $a0, 0x2
    ctx->pc = 0x15848cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)2 << 16));
    // 0x158490: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x158490u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x158494: 0x34844280  ori         $a0, $a0, 0x4280
    ctx->pc = 0x158494u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)17024);
    // 0x158498: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x158498u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
    // 0x15849c: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x15849cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x1584a0: 0x8e02aa84  lw          $v0, -0x557C($s0)
    ctx->pc = 0x1584a0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x50AA84u));
    // 0x1584a4: 0x3c110051  lui         $s1, 0x51
    ctx->pc = 0x1584a4u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
    // 0x1584a8: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x1584a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x1584ac: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1584acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1584b0: 0xc0434e6  jal         func_10D398
    ctx->pc = 0x1584B0u;
    SET_GPR_U32(ctx, 31, 0x1584B8u);
    ctx->pc = 0x1584B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1584B0u;
    // 0x1584b4: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10D398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10D398u, 0x1584B0u, 0x1584B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1584B8u;
label_1584b8:
    // 0x1584b8: 0x3c120051  lui         $s2, 0x51
    ctx->pc = 0x1584b8u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)81 << 16));
    // 0x1584bc: 0xc043eea  jal         func_10FBA8
    ctx->pc = 0x1584BCu;
    SET_GPR_U32(ctx, 31, 0x1584C4u);
    ctx->pc = 0x1584C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1584BCu;
    // 0x1584c0: 0x8e04aa84  lw          $a0, -0x557C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294945412)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FBA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FBA8u, 0x1584BCu, 0x1584C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1584C4u;
label_1584c4:
    // 0x1584c4: 0x8e44489c  lw          $a0, 0x489C($s2)
    ctx->pc = 0x1584c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 18588)));
    // 0x1584c8: 0xc106802  jal         func_41A008
    ctx->pc = 0x1584C8u;
    SET_GPR_U32(ctx, 31, 0x1584D0u);
    ctx->pc = 0x1584CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1584C8u;
    // 0x1584cc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41A008u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41A008u, 0x1584C8u, 0x1584D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1584D0u;
label_1584d0:
    // 0x1584d0: 0xc04414a  jal         func_110528
    ctx->pc = 0x1584D0u;
    SET_GPR_U32(ctx, 31, 0x1584D8u);
    ctx->pc = 0x1584D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1584D0u;
    // 0x1584d4: 0x8e04aa84  lw          $a0, -0x557C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294945412)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110528u, 0x1584D0u, 0x1584D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1584D8u;
label_1584d8:
    // 0x1584d8: 0x8e03aa84  lw          $v1, -0x557C($s0)
    ctx->pc = 0x1584d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294945412)));
    // 0x1584dc: 0x3c020003  lui         $v0, 0x3
    ctx->pc = 0x1584dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
    // 0x1584e0: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x1584e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x1584e4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1584e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1584e8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1584e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1584ec: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1584ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1584f0: 0x8e24c754  lw          $a0, -0x38AC($s1)
    ctx->pc = 0x1584f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294952788)));
    // 0x1584f4: 0xc0581ee  jal         func_1607B8
    ctx->pc = 0x1584F4u;
    SET_GPR_U32(ctx, 31, 0x1584FCu);
    ctx->pc = 0x1584F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1584F4u;
    // 0x1584f8: 0xe4607a5c  swc1        $f0, 0x7A5C($v1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 31324), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1607B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1607B8u, 0x1584F4u, 0x1584FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1584FCu;
label_1584fc:
    // 0x1584fc: 0x8e22c754  lw          $v0, -0x38AC($s1)
    ctx->pc = 0x1584fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294952788)));
    // 0x158500: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x158500u;
    {
        const bool branch_taken_0x158500 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x158504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158500u;
        // 0x158504: 0x8e45489c  lw          $a1, 0x489C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 18588)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158500) {
            ctx->pc = 0x15855Cu;
            goto label_15855c;
        }
    }
    ctx->pc = 0x158508u;
    // 0x158508: 0x24040084  addiu       $a0, $zero, 0x84
    ctx->pc = 0x158508u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 132));
    // 0x15850c: 0x94a256dc  lhu         $v0, 0x56DC($a1)
    ctx->pc = 0x15850cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 22236)));
    // 0x158510: 0x442018  mult        $a0, $v0, $a0
    ctx->pc = 0x158510u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x158514: 0xa41821  addu        $v1, $a1, $a0
    ctx->pc = 0x158514u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x158518: 0x906214e1  lbu         $v0, 0x14E1($v1)
    ctx->pc = 0x158518u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 5345)));
    // 0x15851c: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x15851cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x158520: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x158520u;
    {
        const bool branch_taken_0x158520 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x158524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158520u;
        // 0x158524: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158520) {
            ctx->pc = 0x158548u;
            goto label_158548;
        }
    }
    ctx->pc = 0x158528u;
    // 0x158528: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x158528u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
    // 0x15852c: 0x8c4614d8  lw          $a2, 0x14D8($v0)
    ctx->pc = 0x15852cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5336)));
    // 0x158530: 0x24a5ed20  addiu       $a1, $a1, -0x12E0
    ctx->pc = 0x158530u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962464));
    // 0x158534: 0xc10ca28  jal         func_4328A0
    ctx->pc = 0x158534u;
    SET_GPR_U32(ctx, 31, 0x15853Cu);
    ctx->pc = 0x158538u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x158534u;
    // 0x158538: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4328A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4328A0u, 0x158534u, 0x15853Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15853Cu;
label_15853c:
    // 0x15853c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x15853cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x158540: 0xc10aa4e  jal         func_42A938
    ctx->pc = 0x158540u;
    SET_GPR_U32(ctx, 31, 0x158548u);
    ctx->pc = 0x158544u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x158540u;
    // 0x158544: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42A938u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42A938u, 0x158540u, 0x158548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158548u;
label_158548:
    // 0x158548: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x158548u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x15854c: 0xae20c754  sw          $zero, -0x38AC($s1)
    ctx->pc = 0x15854cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294952788), GPR_U32(ctx, 0));
    // 0x158550: 0x8c4447c4  lw          $a0, 0x47C4($v0)
    ctx->pc = 0x158550u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5147C4u));
    // 0x158554: 0xc103d6e  jal         func_40F5B8
    ctx->pc = 0x158554u;
    SET_GPR_U32(ctx, 31, 0x15855Cu);
    ctx->pc = 0x158558u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x158554u;
    // 0x158558: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40F5B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40F5B8u, 0x158554u, 0x15855Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15855Cu;
label_15855c:
    // 0x15855c: 0xc05651a  jal         func_159468
    ctx->pc = 0x15855Cu;
    SET_GPR_U32(ctx, 31, 0x158564u);
    ctx->pc = 0x158560u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15855Cu;
    // 0x158560: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x159468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x159468u, 0x15855Cu, 0x158564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158564u;
label_158564:
    // 0x158564: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x158564u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x158568: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x158568u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x15856c: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x15856cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x158570: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x158570u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x158574: 0x3e00008  jr          $ra
    ctx->pc = 0x158574u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x158578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158574u;
        // 0x158578: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x158574u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15857Cu;
    // 0x15857c: 0x0  nop
    ctx->pc = 0x15857cu;
    // NOP
    ctx->pc = 0x158580u;
}
