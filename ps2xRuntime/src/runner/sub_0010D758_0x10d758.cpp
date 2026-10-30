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

// Function: sub_0010D758
// Address: 0x10d758 - 0x10d830
void sub_0010D758_0x10d758(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010D758_0x10d758");
#endif

    switch (ctx->pc) {
        case 0x10d788u: goto label_10d788;
        case 0x10d7c4u: goto label_10d7c4;
        case 0x10d7ccu: goto label_10d7cc;
        case 0x10d7d4u: goto label_10d7d4;
        case 0x10d7dcu: goto label_10d7dc;
        case 0x10d7fcu: goto label_10d7fc;
        case 0x10d80cu: goto label_10d80c;
        default: break;
    }

    ctx->pc = 0x10d758u;

    // 0x10d758: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x10d758u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x10d75c: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x10d75cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x10d760: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x10d760u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d764: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x10d764u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x10d768: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x10d768u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x10d76c: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x10d76cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x10d770: 0x26120070  addiu       $s2, $s0, 0x70
    ctx->pc = 0x10d770u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
    // 0x10d774: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x10d774u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x10d778: 0x261300bc  addiu       $s3, $s0, 0xBC
    ctx->pc = 0x10d778u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 188));
    // 0x10d77c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x10d77cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x10d780: 0xc046d00  jal         func_11B400
    ctx->pc = 0x10D780u;
    SET_GPR_U32(ctx, 31, 0x10D788u);
    ctx->pc = 0x10D784u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10D780u;
    // 0x10d784: 0x24140003  addiu       $s4, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B400u, 0x10D780u, 0x10D788u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10D788u;
label_10d788:
    // 0x10d788: 0x26110108  addiu       $s1, $s0, 0x108
    ctx->pc = 0x10d788u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 264));
    // 0x10d78c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x10d78cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x10d790: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x10d790u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x10d794: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x10d794u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10d798: 0x3c013f66  lui         $at, 0x3F66
    ctx->pc = 0x10d798u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16230 << 16));
    // 0x10d79c: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x10d79cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
    // 0x10d7a0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x10d7a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x10d7a4: 0x2604000c  addiu       $a0, $s0, 0xC
    ctx->pc = 0x10d7a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x10d7a8: 0xae140020  sw          $s4, 0x20($s0)
    ctx->pc = 0x10d7a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 20));
    // 0x10d7ac: 0xae000064  sw          $zero, 0x64($s0)
    ctx->pc = 0x10d7acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 0));
    // 0x10d7b0: 0xae000068  sw          $zero, 0x68($s0)
    ctx->pc = 0x10d7b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 0));
    // 0x10d7b4: 0xe601005c  swc1        $f1, 0x5C($s0)
    ctx->pc = 0x10d7b4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 92), bits); }
    // 0x10d7b8: 0xe6000060  swc1        $f0, 0x60($s0)
    ctx->pc = 0x10d7b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 96), bits); }
    // 0x10d7bc: 0xc043b50  jal         func_10ED40
    ctx->pc = 0x10D7BCu;
    SET_GPR_U32(ctx, 31, 0x10D7C4u);
    ctx->pc = 0x10D7C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10D7BCu;
    // 0x10d7c0: 0xa2020024  sb          $v0, 0x24($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 36), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10ED40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10ED40u, 0x10D7BCu, 0x10D7C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10D7C4u;
label_10d7c4:
    // 0x10d7c4: 0xc0467de  jal         func_119F78
    ctx->pc = 0x10D7C4u;
    SET_GPR_U32(ctx, 31, 0x10D7CCu);
    ctx->pc = 0x10D7C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10D7C4u;
    // 0x10d7c8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119F78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119F78u, 0x10D7C4u, 0x10D7CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10D7CCu;
label_10d7cc:
    // 0x10d7cc: 0xc0467de  jal         func_119F78
    ctx->pc = 0x10D7CCu;
    SET_GPR_U32(ctx, 31, 0x10D7D4u);
    ctx->pc = 0x10D7D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10D7CCu;
    // 0x10d7d0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119F78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119F78u, 0x10D7CCu, 0x10D7D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10D7D4u;
label_10d7d4:
    // 0x10d7d4: 0xc0467de  jal         func_119F78
    ctx->pc = 0x10D7D4u;
    SET_GPR_U32(ctx, 31, 0x10D7DCu);
    ctx->pc = 0x10D7D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10D7D4u;
    // 0x10d7d8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119F78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119F78u, 0x10D7D4u, 0x10D7DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10D7DCu;
label_10d7dc:
    // 0x10d7dc: 0xae120154  sw          $s2, 0x154($s0)
    ctx->pc = 0x10d7dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 340), GPR_U32(ctx, 18));
    // 0x10d7e0: 0x26040025  addiu       $a0, $s0, 0x25
    ctx->pc = 0x10d7e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 37));
    // 0x10d7e4: 0xae130158  sw          $s3, 0x158($s0)
    ctx->pc = 0x10d7e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 344), GPR_U32(ctx, 19));
    // 0x10d7e8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x10d7e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d7ec: 0xae11015c  sw          $s1, 0x15C($s0)
    ctx->pc = 0x10d7ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 348), GPR_U32(ctx, 17));
    // 0x10d7f0: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x10d7f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x10d7f4: 0xc10c1fa  jal         func_4307E8
    ctx->pc = 0x10D7F4u;
    SET_GPR_U32(ctx, 31, 0x10D7FCu);
    ctx->pc = 0x10D7F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10D7F4u;
    // 0x10d7f8: 0xae14001c  sw          $s4, 0x1C($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4307E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4307E8u, 0x10D7F4u, 0x10D7FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10D7FCu;
label_10d7fc:
    // 0x10d7fc: 0x2604002c  addiu       $a0, $s0, 0x2C
    ctx->pc = 0x10d7fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 44));
    // 0x10d800: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x10d800u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d804: 0xc10c1fa  jal         func_4307E8
    ctx->pc = 0x10D804u;
    SET_GPR_U32(ctx, 31, 0x10D80Cu);
    ctx->pc = 0x10D808u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10D804u;
    // 0x10d808: 0x24060030  addiu       $a2, $zero, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4307E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4307E8u, 0x10D804u, 0x10D80Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10D80Cu;
label_10d80c:
    // 0x10d80c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x10d80cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d810: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x10d810u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x10d814: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x10d814u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x10d818: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x10d818u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x10d81c: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x10d81cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10d820: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x10d820u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10d824: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10d824u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10d828: 0x3e00008  jr          $ra
    ctx->pc = 0x10D828u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10D82Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D828u;
        // 0x10d82c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10D828u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10D830u;
}
