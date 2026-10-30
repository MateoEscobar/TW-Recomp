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

// Function: sub_001B4F00
// Address: 0x1b4f00 - 0x1b4fc0
void sub_001B4F00_0x1b4f00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B4F00_0x1b4f00");
#endif

    switch (ctx->pc) {
        case 0x1b4f90u: goto label_1b4f90;
        case 0x1b4fb4u: goto label_1b4fb4;
        default: break;
    }

    ctx->pc = 0x1b4f00u;

    // 0x1b4f00: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1b4f00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1b4f04: 0x10800024  beqz        $a0, . + 4 + (0x24 << 2)
    ctx->pc = 0x1B4F04u;
    {
        const bool branch_taken_0x1b4f04 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B4F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4F04u;
        // 0x1b4f08: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4f04) {
            ctx->pc = 0x1B4F98u;
            goto label_1b4f98;
        }
    }
    ctx->pc = 0x1B4F0Cu;
    // 0x1b4f0c: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x1b4f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
    // 0x1b4f10: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x1b4f10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
    // 0x1b4f14: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1b4f14u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1b4f18: 0x2444b180  addiu       $a0, $v0, -0x4E80
    ctx->pc = 0x1b4f18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947200));
    // 0x1b4f1c: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x1b4f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x60B18Cu));
    // 0x1b4f20: 0x14400025  bnez        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x1B4F20u;
    {
        const bool branch_taken_0x1b4f20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B4F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4F20u;
        // 0x1b4f24: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4f20) {
            ctx->pc = 0x1B4FB8u;
            goto label_1b4fb8;
        }
    }
    ctx->pc = 0x1B4F28u;
    // 0x1b4f28: 0x8c82ed0c  lw          $v0, -0x12F4($a0)
    ctx->pc = 0x1b4f28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294962444)));
    // 0x1b4f2c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B4F2Cu;
    {
        const bool branch_taken_0x1b4f2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B4F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4F2Cu;
        // 0x1b4f30: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4f2c) {
            ctx->pc = 0x1B4F3Cu;
            goto label_1b4f3c;
        }
    }
    ctx->pc = 0x1B4F34u;
    // 0x1b4f34: 0xc440d544  lwc1        $f0, -0x2ABC($v0)
    ctx->pc = 0x1b4f34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294956356)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b4f38: 0x46020080  add.s       $f2, $f0, $f2
    ctx->pc = 0x1b4f38u;
    ctx->f[2] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_1b4f3c:
    // 0x1b4f3c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1b4f3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1b4f40: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1b4f40u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b4f44: 0x3c08001a  lui         $t0, 0x1A
    ctx->pc = 0x1b4f44u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)26 << 16));
    // 0x1b4f48: 0x3c013f4c  lui         $at, 0x3F4C
    ctx->pc = 0x1b4f48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16204 << 16));
    // 0x1b4f4c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1b4f4cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1b4f50: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b4f50u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b4f54: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x1b4f54u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4f58: 0x3c013cf5  lui         $at, 0x3CF5
    ctx->pc = 0x1b4f58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15605 << 16));
    // 0x1b4f5c: 0x3421c28f  ori         $at, $at, 0xC28F
    ctx->pc = 0x1b4f5cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49807);
    // 0x1b4f60: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1b4f60u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1b4f64: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1b4f64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4f68: 0x3c014270  lui         $at, 0x4270
    ctx->pc = 0x1b4f68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17008 << 16));
    // 0x1b4f6c: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x1b4f6cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1b4f70: 0x35080007  ori         $t0, $t0, 0x7
    ctx->pc = 0x1b4f70u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)7);
    // 0x1b4f74: 0x3c0141f0  lui         $at, 0x41F0
    ctx->pc = 0x1b4f74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16880 << 16));
    // 0x1b4f78: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x1b4f78u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1b4f7c: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x1b4f7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1b4f80: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x1b4f80u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x1b4f84: 0xe7a1000c  swc1        $f1, 0xC($sp)
    ctx->pc = 0x1b4f84u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x1b4f88: 0xc068dc8  jal         func_1A3720
    ctx->pc = 0x1B4F88u;
    SET_GPR_U32(ctx, 31, 0x1B4F90u);
    ctx->pc = 0x1B4F8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4F88u;
    // 0x1b4f8c: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A3720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A3720u, 0x1B4F88u, 0x1B4F90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4F90u;
label_1b4f90:
    // 0x1b4f90: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1B4F90u;
    {
        const bool branch_taken_0x1b4f90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B4F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4F90u;
        // 0x1b4f94: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4f90) {
            ctx->pc = 0x1B4FB8u;
            goto label_1b4fb8;
        }
    }
    ctx->pc = 0x1B4F98u;
label_1b4f98:
    // 0x1b4f98: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x1b4f98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
    // 0x1b4f9c: 0x2444b180  addiu       $a0, $v0, -0x4E80
    ctx->pc = 0x1b4f9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947200));
    // 0x1b4fa0: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x1b4fa0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x60B18Cu));
    // 0x1b4fa4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B4FA4u;
    {
        const bool branch_taken_0x1b4fa4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B4FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4FA4u;
        // 0x1b4fa8: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4fa4) {
            ctx->pc = 0x1B4FB8u;
            goto label_1b4fb8;
        }
    }
    ctx->pc = 0x1B4FACu;
    // 0x1b4fac: 0xc068e36  jal         func_1A38D8
    ctx->pc = 0x1B4FACu;
    SET_GPR_U32(ctx, 31, 0x1B4FB4u);
    ctx->pc = 0x1A38D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A38D8u, 0x1B4FACu, 0x1B4FB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4FB4u;
label_1b4fb4:
    // 0x1b4fb4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1b4fb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1b4fb8:
    // 0x1b4fb8: 0x3e00008  jr          $ra
    ctx->pc = 0x1B4FB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B4FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4FB8u;
        // 0x1b4fbc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B4FB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B4FC0u;
}
