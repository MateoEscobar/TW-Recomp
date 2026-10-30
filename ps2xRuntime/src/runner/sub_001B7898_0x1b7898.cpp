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

// Function: sub_001B7898
// Address: 0x1b7898 - 0x1b7958
void sub_001B7898_0x1b7898(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B7898_0x1b7898");
#endif

    switch (ctx->pc) {
        case 0x1b78c0u: goto label_1b78c0;
        case 0x1b78d0u: goto label_1b78d0;
        case 0x1b78dcu: goto label_1b78dc;
        case 0x1b78f0u: goto label_1b78f0;
        case 0x1b7920u: goto label_1b7920;
        default: break;
    }

    ctx->pc = 0x1b7898u;

    // 0x1b7898: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1b7898u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1b789c: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1b789cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x1b78a0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b78a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b78a4: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1b78a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1b78a8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1b78a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1b78ac: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x1b78acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x1b78b0: 0x24120002  addiu       $s2, $zero, 0x2
    ctx->pc = 0x1b78b0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1b78b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b78b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b78b8: 0xc06a38c  jal         func_1A8E30
    ctx->pc = 0x1B78B8u;
    SET_GPR_U32(ctx, 31, 0x1B78C0u);
    ctx->pc = 0x1B78BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B78B8u;
    // 0x1b78bc: 0x26110040  addiu       $s1, $s0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8E30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8E30u, 0x1B78B8u, 0x1B78C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B78C0u;
label_1b78c0:
    // 0x1b78c0: 0x2413ffff  addiu       $s3, $zero, -0x1
    ctx->pc = 0x1b78c0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1b78c4: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x1b78c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x1b78c8: 0x2442a1b0  addiu       $v0, $v0, -0x5E50
    ctx->pc = 0x1b78c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943152));
    // 0x1b78cc: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1b78ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_1b78d0:
    // 0x1b78d0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b78d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b78d4: 0xc0686fe  jal         func_1A1BF8
    ctx->pc = 0x1B78D4u;
    SET_GPR_U32(ctx, 31, 0x1B78DCu);
    ctx->pc = 0x1B78D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B78D4u;
    // 0x1b78d8: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1BF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1BF8u, 0x1B78D4u, 0x1B78DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B78DCu;
label_1b78dc:
    // 0x1b78dc: 0x0  nop
    ctx->pc = 0x1b78dcu;
    // NOP
    // 0x1b78e0: 0x1653fffb  bne         $s2, $s3, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1B78E0u;
    {
        const bool branch_taken_0x1b78e0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 19));
        ctx->pc = 0x1B78E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B78E0u;
        // 0x1b78e4: 0x26310100  addiu       $s1, $s1, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b78e0) {
            ctx->pc = 0x1B78D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b78d0;
        }
    }
    ctx->pc = 0x1B78E8u;
    // 0x1b78e8: 0xc0686fe  jal         func_1A1BF8
    ctx->pc = 0x1B78E8u;
    SET_GPR_U32(ctx, 31, 0x1B78F0u);
    ctx->pc = 0x1B78ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B78E8u;
    // 0x1b78ec: 0x26040340  addiu       $a0, $s0, 0x340 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 832));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1BF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1BF8u, 0x1B78E8u, 0x1B78F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B78F0u;
label_1b78f0:
    // 0x1b78f0: 0xc60000e0  lwc1        $f0, 0xE0($s0)
    ctx->pc = 0x1b78f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b78f4: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1b78f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1b78f8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1b78f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1b78fc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1b78fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b7900: 0xa2000464  sb          $zero, 0x464($s0)
    ctx->pc = 0x1b7900u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1124), (uint8_t)GPR_U32(ctx, 0));
    // 0x1b7904: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b7904u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7908: 0xa2000466  sb          $zero, 0x466($s0)
    ctx->pc = 0x1b7908u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1126), (uint8_t)GPR_U32(ctx, 0));
    // 0x1b790c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1b790cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b7910: 0xae020450  sw          $v0, 0x450($s0)
    ctx->pc = 0x1b7910u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1104), GPR_U32(ctx, 2));
    // 0x1b7914: 0xe6000454  swc1        $f0, 0x454($s0)
    ctx->pc = 0x1b7914u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1108), bits); }
    // 0x1b7918: 0xc06de86  jal         func_1B7A18
    ctx->pc = 0x1B7918u;
    SET_GPR_U32(ctx, 31, 0x1B7920u);
    ctx->pc = 0x1B791Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B7918u;
    // 0x1b791c: 0xa2030465  sb          $v1, 0x465($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 1125), (uint8_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7A18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7A18u, 0x1B7918u, 0x1B7920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7920u;
label_1b7920:
    // 0x1b7920: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b7920u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b7924: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1b7924u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1b7928: 0xae020458  sw          $v0, 0x458($s0)
    ctx->pc = 0x1b7928u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1112), GPR_U32(ctx, 2));
    // 0x1b792c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1b792cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1b7930: 0xae03045c  sw          $v1, 0x45C($s0)
    ctx->pc = 0x1b7930u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1116), GPR_U32(ctx, 3));
    // 0x1b7934: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1b7934u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7938: 0xae040460  sw          $a0, 0x460($s0)
    ctx->pc = 0x1b7938u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1120), GPR_U32(ctx, 4));
    // 0x1b793c: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1b793cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b7940: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1b7940u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b7944: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1b7944u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b7948: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x1b7948u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b794c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b794cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b7950: 0x3e00008  jr          $ra
    ctx->pc = 0x1B7950u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B7954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7950u;
        // 0x1b7954: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B7950u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B7958u;
}
