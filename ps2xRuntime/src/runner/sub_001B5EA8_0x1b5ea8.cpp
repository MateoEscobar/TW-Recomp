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

// Function: sub_001B5EA8
// Address: 0x1b5ea8 - 0x1b5f88
void sub_001B5EA8_0x1b5ea8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B5EA8_0x1b5ea8");
#endif

    ctx->pc = 0x1b5ea8u;

    // 0x1b5ea8: 0x3c013f5c  lui         $at, 0x3F5C
    ctx->pc = 0x1b5ea8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16220 << 16));
    // 0x1b5eac: 0x342128f6  ori         $at, $at, 0x28F6
    ctx->pc = 0x1b5eacu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)10486);
    // 0x1b5eb0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1b5eb0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b5eb4: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B5EB4u;
    {
        const bool branch_taken_0x1b5eb4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B5EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5EB4u;
        // 0x1b5eb8: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5eb4) {
            ctx->pc = 0x1B5EC4u;
            goto label_1b5ec4;
        }
    }
    ctx->pc = 0x1B5EBCu;
    // 0x1b5ebc: 0x3c013e00  lui         $at, 0x3E00
    ctx->pc = 0x1b5ebcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15872 << 16));
    // 0x1b5ec0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1b5ec0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1b5ec4:
    // 0x1b5ec4: 0x8c43cdb4  lw          $v1, -0x324C($v0)
    ctx->pc = 0x1b5ec4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954420)));
    // 0x1b5ec8: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1b5ec8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1b5ecc: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x1b5eccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x1b5ed0: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x1B5ED0u;
    {
        const bool branch_taken_0x1b5ed0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B5ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5ED0u;
        // 0x1b5ed4: 0x30620004  andi        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5ed0) {
            ctx->pc = 0x1B5F50u;
            goto label_1b5f50;
        }
    }
    ctx->pc = 0x1B5ED8u;
    // 0x1b5ed8: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1B5ED8u;
    {
        const bool branch_taken_0x1b5ed8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b5ed8) {
            ctx->pc = 0x1B5F18u;
            goto label_1b5f18;
        }
    }
    ctx->pc = 0x1B5EE0u;
    // 0x1b5ee0: 0x3c013e00  lui         $at, 0x3E00
    ctx->pc = 0x1b5ee0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15872 << 16));
    // 0x1b5ee4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b5ee4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b5ee8: 0x0  nop
    ctx->pc = 0x1b5ee8u;
    // NOP
    // 0x1b5eec: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x1b5eecu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b5ef0: 0x3c013f4c  lui         $at, 0x3F4C
    ctx->pc = 0x1b5ef0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16204 << 16));
    // 0x1b5ef4: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1b5ef4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1b5ef8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1b5ef8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b5efc: 0x4500001c  bc1f        . + 4 + (0x1C << 2)
    ctx->pc = 0x1B5EFCu;
    {
        const bool branch_taken_0x1b5efc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B5F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5EFCu;
        // 0x1b5f00: 0x3c020060  lui         $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5efc) {
            ctx->pc = 0x1B5F70u;
            goto label_1b5f70;
        }
    }
    ctx->pc = 0x1B5F04u;
    // 0x1b5f04: 0x3c013e19  lui         $at, 0x3E19
    ctx->pc = 0x1b5f04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15897 << 16));
    // 0x1b5f08: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x1b5f08u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x1b5f0c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1b5f0cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b5f10: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x1B5F10u;
    {
        const bool branch_taken_0x1b5f10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B5F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5F10u;
        // 0x1b5f14: 0x24427380  addiu       $v0, $v0, 0x7380 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29568));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5f10) {
            ctx->pc = 0x1B5F78u;
            goto label_1b5f78;
        }
    }
    ctx->pc = 0x1B5F18u;
label_1b5f18:
    // 0x1b5f18: 0x3c013e00  lui         $at, 0x3E00
    ctx->pc = 0x1b5f18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15872 << 16));
    // 0x1b5f1c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b5f1cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b5f20: 0x0  nop
    ctx->pc = 0x1b5f20u;
    // NOP
    // 0x1b5f24: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x1b5f24u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b5f28: 0x3c013f47  lui         $at, 0x3F47
    ctx->pc = 0x1b5f28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16199 << 16));
    // 0x1b5f2c: 0x3421ae14  ori         $at, $at, 0xAE14
    ctx->pc = 0x1b5f2cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)44564);
    // 0x1b5f30: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1b5f30u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b5f34: 0x4500000e  bc1f        . + 4 + (0xE << 2)
    ctx->pc = 0x1B5F34u;
    {
        const bool branch_taken_0x1b5f34 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B5F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5F34u;
        // 0x1b5f38: 0x3c020060  lui         $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5f34) {
            ctx->pc = 0x1B5F70u;
            goto label_1b5f70;
        }
    }
    ctx->pc = 0x1B5F3Cu;
    // 0x1b5f3c: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x1b5f3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
    // 0x1b5f40: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1b5f40u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1b5f44: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1b5f44u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b5f48: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1B5F48u;
    {
        const bool branch_taken_0x1b5f48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B5F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5F48u;
        // 0x1b5f4c: 0x24427380  addiu       $v0, $v0, 0x7380 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29568));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5f48) {
            ctx->pc = 0x1B5F78u;
            goto label_1b5f78;
        }
    }
    ctx->pc = 0x1B5F50u;
label_1b5f50:
    // 0x1b5f50: 0x30620020  andi        $v0, $v1, 0x20
    ctx->pc = 0x1b5f50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
    // 0x1b5f54: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B5F54u;
    {
        const bool branch_taken_0x1b5f54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B5F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5F54u;
        // 0x1b5f58: 0x30620004  andi        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5f54) {
            ctx->pc = 0x1B5F70u;
            goto label_1b5f70;
        }
    }
    ctx->pc = 0x1B5F5Cu;
    // 0x1b5f5c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B5F5Cu;
    {
        const bool branch_taken_0x1b5f5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B5F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5F5Cu;
        // 0x1b5f60: 0x3c020060  lui         $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5f5c) {
            ctx->pc = 0x1B5F74u;
            goto label_1b5f74;
        }
    }
    ctx->pc = 0x1B5F64u;
    // 0x1b5f64: 0x3c013da3  lui         $at, 0x3DA3
    ctx->pc = 0x1b5f64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15779 << 16));
    // 0x1b5f68: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x1b5f68u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x1b5f6c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1b5f6cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1b5f70:
    // 0x1b5f70: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1b5f70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_1b5f74:
    // 0x1b5f74: 0x24427380  addiu       $v0, $v0, 0x7380
    ctx->pc = 0x1b5f74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29568));
label_1b5f78:
    // 0x1b5f78: 0xe44109f4  swc1        $f1, 0x9F4($v0)
    ctx->pc = 0x1b5f78u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 2548), bits); }
    // 0x1b5f7c: 0x3e00008  jr          $ra
    ctx->pc = 0x1B5F7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B5F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5F7Cu;
        // 0x1b5f80: 0xe4410464  swc1        $f1, 0x464($v0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 1124), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B5F7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B5F84u;
    // 0x1b5f84: 0x0  nop
    ctx->pc = 0x1b5f84u;
    // NOP
    ctx->pc = 0x1b5f88u;
}
