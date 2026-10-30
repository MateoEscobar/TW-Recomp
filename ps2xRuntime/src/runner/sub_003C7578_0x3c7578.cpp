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

// Function: sub_003C7578
// Address: 0x3c7578 - 0x3c7640
void sub_003C7578_0x3c7578(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C7578_0x3c7578");
#endif

    switch (ctx->pc) {
        case 0x3c7578u: goto label_3c7578;
        case 0x3c757cu: goto label_3c757c;
        case 0x3c7580u: goto label_3c7580;
        case 0x3c7584u: goto label_3c7584;
        case 0x3c7588u: goto label_3c7588;
        case 0x3c758cu: goto label_3c758c;
        case 0x3c7590u: goto label_3c7590;
        case 0x3c7594u: goto label_3c7594;
        case 0x3c7598u: goto label_3c7598;
        case 0x3c759cu: goto label_3c759c;
        case 0x3c75a0u: goto label_3c75a0;
        case 0x3c75a4u: goto label_3c75a4;
        case 0x3c75a8u: goto label_3c75a8;
        case 0x3c75acu: goto label_3c75ac;
        case 0x3c75b0u: goto label_3c75b0;
        case 0x3c75b4u: goto label_3c75b4;
        case 0x3c75b8u: goto label_3c75b8;
        case 0x3c75bcu: goto label_3c75bc;
        case 0x3c75c0u: goto label_3c75c0;
        case 0x3c75c4u: goto label_3c75c4;
        case 0x3c75c8u: goto label_3c75c8;
        case 0x3c75ccu: goto label_3c75cc;
        case 0x3c75d0u: goto label_3c75d0;
        case 0x3c75d4u: goto label_3c75d4;
        case 0x3c75d8u: goto label_3c75d8;
        case 0x3c75dcu: goto label_3c75dc;
        case 0x3c75e0u: goto label_3c75e0;
        case 0x3c75e4u: goto label_3c75e4;
        case 0x3c75e8u: goto label_3c75e8;
        case 0x3c75ecu: goto label_3c75ec;
        case 0x3c75f0u: goto label_3c75f0;
        case 0x3c75f4u: goto label_3c75f4;
        case 0x3c75f8u: goto label_3c75f8;
        case 0x3c75fcu: goto label_3c75fc;
        case 0x3c7600u: goto label_3c7600;
        case 0x3c7604u: goto label_3c7604;
        case 0x3c7608u: goto label_3c7608;
        case 0x3c760cu: goto label_3c760c;
        case 0x3c7610u: goto label_3c7610;
        case 0x3c7614u: goto label_3c7614;
        case 0x3c7618u: goto label_3c7618;
        case 0x3c761cu: goto label_3c761c;
        case 0x3c7620u: goto label_3c7620;
        case 0x3c7624u: goto label_3c7624;
        case 0x3c7628u: goto label_3c7628;
        case 0x3c762cu: goto label_3c762c;
        case 0x3c7630u: goto label_3c7630;
        case 0x3c7634u: goto label_3c7634;
        case 0x3c7638u: goto label_3c7638;
        case 0x3c763cu: goto label_3c763c;
        default: break;
    }

    ctx->pc = 0x3c7578u;

label_3c7578:
    // 0x3c7578: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3c7578u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_3c757c:
    // 0x3c757c: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x3c757cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_3c7580:
    // 0x3c7580: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x3c7580u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_3c7584:
    // 0x3c7584: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3c7584u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3c7588:
    // 0x3c7588: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3c7588u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_3c758c:
    // 0x3c758c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3c758cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3c7590:
    // 0x3c7590: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3c7590u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_3c7594:
    // 0x3c7594: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3c7594u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3c7598:
    // 0x3c7598: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3c7598u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3c759c:
    // 0x3c759c: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3c759cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3c75a0:
    // 0x3c75a0: 0x40f809  jalr        $v0
label_3c75a4:
    if (ctx->pc == 0x3C75A4u) {
        ctx->pc = 0x3C75A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C75A0u;
        // 0x3c75a4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C75A8u;
        goto label_3c75a8;
    }
    ctx->pc = 0x3C75A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3C75A8u);
        ctx->pc = 0x3C75A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C75A0u;
        // 0x3c75a4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C75A0u, 0x3C75A8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3C75A8u;
label_3c75a8:
    // 0x3c75a8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3c75a8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3c75ac:
    // 0x3c75ac: 0xc0ea13a  jal         func_3A84E8
label_3c75b0:
    if (ctx->pc == 0x3C75B0u) {
        ctx->pc = 0x3C75B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C75ACu;
        // 0x3c75b0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C75B4u;
        goto label_3c75b4;
    }
    ctx->pc = 0x3C75ACu;
    SET_GPR_U32(ctx, 31, 0x3C75B4u);
    ctx->pc = 0x3C75B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C75ACu;
    // 0x3c75b0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84E8u, 0x3C75ACu, 0x3C75B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C75B4u;
label_3c75b4:
    // 0x3c75b4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3c75b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3c75b8:
    // 0x3c75b8: 0xe6400004  swc1        $f0, 0x4($s2)
    ctx->pc = 0x3c75b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
label_3c75bc:
    // 0x3c75bc: 0xc0ea12a  jal         func_3A84A8
label_3c75c0:
    if (ctx->pc == 0x3C75C0u) {
        ctx->pc = 0x3C75C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C75BCu;
        // 0x3c75c0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C75C4u;
        goto label_3c75c4;
    }
    ctx->pc = 0x3C75BCu;
    SET_GPR_U32(ctx, 31, 0x3C75C4u);
    ctx->pc = 0x3C75C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C75BCu;
    // 0x3c75c0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3C75BCu, 0x3C75C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C75C4u;
label_3c75c4:
    // 0x3c75c4: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x3c75c4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3c75c8:
    // 0x3c75c8: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x3c75c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_3c75cc:
    // 0x3c75cc: 0x2484b8b8  addiu       $a0, $a0, -0x4748
    ctx->pc = 0x3c75ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949048));
label_3c75d0:
    // 0x3c75d0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x3c75d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3c75d4:
    // 0x3c75d4: 0xc0cd4ee  jal         func_3353B8
label_3c75d8:
    if (ctx->pc == 0x3C75D8u) {
        ctx->pc = 0x3C75D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C75D4u;
        // 0x3c75d8: 0x7e020010  sq          $v0, 0x10($s0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C75DCu;
        goto label_3c75dc;
    }
    ctx->pc = 0x3C75D4u;
    SET_GPR_U32(ctx, 31, 0x3C75DCu);
    ctx->pc = 0x3C75D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C75D4u;
    // 0x3c75d8: 0x7e020010  sq          $v0, 0x10($s0) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x3C75D4u, 0x3C75DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C75DCu;
label_3c75dc:
    // 0x3c75dc: 0x2442002a  addiu       $v0, $v0, 0x2A
    ctx->pc = 0x3c75dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 42));
label_3c75e0:
    // 0x3c75e0: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x3c75e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
label_3c75e4:
    // 0x3c75e4: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x3c75e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_3c75e8:
    // 0x3c75e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3c75e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3c75ec:
    // 0x3c75ec: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3c75ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_3c75f0:
    // 0x3c75f0: 0x2405001e  addiu       $a1, $zero, 0x1E
    ctx->pc = 0x3c75f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_3c75f4:
    // 0x3c75f4: 0xc0e858c  jal         func_3A1630
label_3c75f8:
    if (ctx->pc == 0x3C75F8u) {
        ctx->pc = 0x3C75F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C75F4u;
        // 0x3c75f8: 0xae0200c4  sw          $v0, 0xC4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 196), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C75FCu;
        goto label_3c75fc;
    }
    ctx->pc = 0x3C75F4u;
    SET_GPR_U32(ctx, 31, 0x3C75FCu);
    ctx->pc = 0x3C75F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C75F4u;
    // 0x3c75f8: 0xae0200c4  sw          $v0, 0xC4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 196), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3C75F4u, 0x3C75FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C75FCu;
label_3c75fc:
    // 0x3c75fc: 0xae0000bc  sw          $zero, 0xBC($s0)
    ctx->pc = 0x3c75fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 188), GPR_U32(ctx, 0));
label_3c7600:
    // 0x3c7600: 0x3c03b010  lui         $v1, 0xB010
    ctx->pc = 0x3c7600u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)45072 << 16));
label_3c7604:
    // 0x3c7604: 0x3c025010  lui         $v0, 0x5010
    ctx->pc = 0x3c7604u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20496 << 16));
label_3c7608:
    // 0x3c7608: 0x34630030  ori         $v1, $v1, 0x30
    ctx->pc = 0x3c7608u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)48);
label_3c760c:
    // 0x3c760c: 0xc6400004  lwc1        $f0, 0x4($s2)
    ctx->pc = 0x3c760cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3c7610:
    // 0x3c7610: 0x34420090  ori         $v0, $v0, 0x90
    ctx->pc = 0x3c7610u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)144);
label_3c7614:
    // 0x3c7614: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x3c7614u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3c7618:
    // 0x3c7618: 0xe60000c0  swc1        $f0, 0xC0($s0)
    ctx->pc = 0x3c7618u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 192), bits); }
label_3c761c:
    // 0x3c761c: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x3c761cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
label_3c7620:
    // 0x3c7620: 0xae0200b4  sw          $v0, 0xB4($s0)
    ctx->pc = 0x3c7620u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 2));
label_3c7624:
    // 0x3c7624: 0xae0300b0  sw          $v1, 0xB0($s0)
    ctx->pc = 0x3c7624u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 3));
label_3c7628:
    // 0x3c7628: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x3c7628u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3c762c:
    // 0x3c762c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3c762cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3c7630:
    // 0x3c7630: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3c7630u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3c7634:
    // 0x3c7634: 0x3e00008  jr          $ra
label_3c7638:
    if (ctx->pc == 0x3C7638u) {
        ctx->pc = 0x3C7638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C7634u;
        // 0x3c7638: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C763Cu;
        goto label_3c763c;
    }
    ctx->pc = 0x3C7634u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C7638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C7634u;
        // 0x3c7638: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C7634u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C763Cu;
label_3c763c:
    // 0x3c763c: 0x0  nop
    ctx->pc = 0x3c763cu;
    // NOP
    ctx->pc = 0x3c7640u;
}
