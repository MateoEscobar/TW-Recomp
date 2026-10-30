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

// Function: sub_001C8EA0
// Address: 0x1c8ea0 - 0x1c9028
void sub_001C8EA0_0x1c8ea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C8EA0_0x1c8ea0");
#endif

    ctx->pc = 0x1c8ea0u;

    // 0x1c8ea0: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1c8ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1c8ea4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1c8ea4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1c8ea8: 0x3c013d75  lui         $at, 0x3D75
    ctx->pc = 0x1c8ea8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15733 << 16));
    // 0x1c8eac: 0x3421c28f  ori         $at, $at, 0xC28F
    ctx->pc = 0x1c8eacu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49807);
    // 0x1c8eb0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1c8eb0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c8eb4: 0x54a20006  bnel        $a1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C8EB4u;
    {
        const bool branch_taken_0x1c8eb4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x1c8eb4) {
            ctx->pc = 0x1C8EB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C8EB4u;
            // 0x1c8eb8: 0xe4800560  swc1        $f0, 0x560($a0) (Delay Slot)
            { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1376), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C8ED0u;
            goto label_1c8ed0;
        }
    }
    ctx->pc = 0x1C8EBCu;
    // 0x1c8ebc: 0x3c013ccc  lui         $at, 0x3CCC
    ctx->pc = 0x1c8ebcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15564 << 16));
    // 0x1c8ec0: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1c8ec0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1c8ec4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1c8ec4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c8ec8: 0x0  nop
    ctx->pc = 0x1c8ec8u;
    // NOP
    // 0x1c8ecc: 0xe4800560  swc1        $f0, 0x560($a0)
    ctx->pc = 0x1c8eccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1376), bits); }
label_1c8ed0:
    // 0x1c8ed0: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1c8ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x1c8ed4: 0x8c43cdb4  lw          $v1, -0x324C($v0)
    ctx->pc = 0x1c8ed4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x50CDB4u));
    // 0x1c8ed8: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1c8ed8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1c8edc: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x1c8edcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x1c8ee0: 0x1040002a  beqz        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x1C8EE0u;
    {
        const bool branch_taken_0x1c8ee0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C8EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8EE0u;
        // 0x1c8ee4: 0x30620020  andi        $v0, $v1, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8ee0) {
            ctx->pc = 0x1C8F8Cu;
            goto label_1c8f8c;
        }
    }
    ctx->pc = 0x1C8EE8u;
    // 0x1c8ee8: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1C8EE8u;
    {
        const bool branch_taken_0x1c8ee8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C8EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8EE8u;
        // 0x1c8eec: 0x30620004  andi        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8ee8) {
            ctx->pc = 0x1C8F14u;
            goto label_1c8f14;
        }
    }
    ctx->pc = 0x1C8EF0u;
    // 0x1c8ef0: 0x1040004b  beqz        $v0, . + 4 + (0x4B << 2)
    ctx->pc = 0x1C8EF0u;
    {
        const bool branch_taken_0x1c8ef0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c8ef0) {
            ctx->pc = 0x1C9020u;
            goto label_1c9020;
        }
    }
    ctx->pc = 0x1C8EF8u;
    // 0x1c8ef8: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1c8ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1c8efc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1c8efcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1c8f00: 0x3c01bdcc  lui         $at, 0xBDCC
    ctx->pc = 0x1c8f00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48588 << 16));
    // 0x1c8f04: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1c8f04u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1c8f08: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1c8f08u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c8f0c: 0x3e00008  jr          $ra
    ctx->pc = 0x1C8F0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C8F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8F0Cu;
        // 0x1c8f10: 0xe4800560  swc1        $f0, 0x560($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1376), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C8F0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C8F14u;
label_1c8f14:
    // 0x1c8f14: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1C8F14u;
    {
        const bool branch_taken_0x1c8f14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c8f14) {
            ctx->pc = 0x1C8F60u;
            goto label_1c8f60;
        }
    }
    ctx->pc = 0x1C8F1Cu;
    // 0x1c8f1c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1c8f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1c8f20: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1c8f20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1c8f24: 0x3c01bdcc  lui         $at, 0xBDCC
    ctx->pc = 0x1c8f24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48588 << 16));
    // 0x1c8f28: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1c8f28u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1c8f2c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1c8f2cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c8f30: 0x54a20006  bnel        $a1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C8F30u;
    {
        const bool branch_taken_0x1c8f30 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x1c8f30) {
            ctx->pc = 0x1C8F34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C8F30u;
            // 0x1c8f34: 0xe4800560  swc1        $f0, 0x560($a0) (Delay Slot)
            { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1376), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C8F4Cu;
            goto label_1c8f4c;
        }
    }
    ctx->pc = 0x1C8F38u;
    // 0x1c8f38: 0x3c01be0f  lui         $at, 0xBE0F
    ctx->pc = 0x1c8f38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48655 << 16));
    // 0x1c8f3c: 0x34215c29  ori         $at, $at, 0x5C29
    ctx->pc = 0x1c8f3cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)23593);
    // 0x1c8f40: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1c8f40u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c8f44: 0x0  nop
    ctx->pc = 0x1c8f44u;
    // NOP
    // 0x1c8f48: 0xe4800560  swc1        $f0, 0x560($a0)
    ctx->pc = 0x1c8f48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1376), bits); }
label_1c8f4c:
    // 0x1c8f4c: 0x3c013f6b  lui         $at, 0x3F6B
    ctx->pc = 0x1c8f4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16235 << 16));
    // 0x1c8f50: 0x3421851f  ori         $at, $at, 0x851F
    ctx->pc = 0x1c8f50u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)34079);
    // 0x1c8f54: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1c8f54u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c8f58: 0x3e00008  jr          $ra
    ctx->pc = 0x1C8F58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C8F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8F58u;
        // 0x1c8f5c: 0xe4800568  swc1        $f0, 0x568($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1384), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C8F58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C8F60u;
label_1c8f60:
    // 0x1c8f60: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1c8f60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1c8f64: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1c8f64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1c8f68: 0x14a20003  bne         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C8F68u;
    {
        const bool branch_taken_0x1c8f68 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x1c8f68) {
            ctx->pc = 0x1C8F78u;
            goto label_1c8f78;
        }
    }
    ctx->pc = 0x1C8F70u;
    // 0x1c8f70: 0x3e00008  jr          $ra
    ctx->pc = 0x1C8F70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C8F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8F70u;
        // 0x1c8f74: 0xac800560  sw          $zero, 0x560($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 1376), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C8F70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C8F78u;
label_1c8f78:
    // 0x1c8f78: 0x3c013d23  lui         $at, 0x3D23
    ctx->pc = 0x1c8f78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15651 << 16));
    // 0x1c8f7c: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x1c8f7cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x1c8f80: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1c8f80u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c8f84: 0x3e00008  jr          $ra
    ctx->pc = 0x1C8F84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C8F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8F84u;
        // 0x1c8f88: 0xe4800560  swc1        $f0, 0x560($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1376), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C8F84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C8F8Cu;
label_1c8f8c:
    // 0x1c8f8c: 0x30620004  andi        $v0, $v1, 0x4
    ctx->pc = 0x1c8f8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x1c8f90: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1C8F90u;
    {
        const bool branch_taken_0x1c8f90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c8f90) {
            ctx->pc = 0x1C8FDCu;
            goto label_1c8fdc;
        }
    }
    ctx->pc = 0x1C8F98u;
    // 0x1c8f98: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1c8f98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1c8f9c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1c8f9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1c8fa0: 0x3c01be0f  lui         $at, 0xBE0F
    ctx->pc = 0x1c8fa0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48655 << 16));
    // 0x1c8fa4: 0x34215c29  ori         $at, $at, 0x5C29
    ctx->pc = 0x1c8fa4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)23593);
    // 0x1c8fa8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1c8fa8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c8fac: 0x54a20006  bnel        $a1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C8FACu;
    {
        const bool branch_taken_0x1c8fac = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x1c8fac) {
            ctx->pc = 0x1C8FB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C8FACu;
            // 0x1c8fb0: 0xe4800560  swc1        $f0, 0x560($a0) (Delay Slot)
            { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1376), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C8FC8u;
            goto label_1c8fc8;
        }
    }
    ctx->pc = 0x1C8FB4u;
    // 0x1c8fb4: 0x3c01be4c  lui         $at, 0xBE4C
    ctx->pc = 0x1c8fb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48716 << 16));
    // 0x1c8fb8: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1c8fb8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1c8fbc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1c8fbcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c8fc0: 0x0  nop
    ctx->pc = 0x1c8fc0u;
    // NOP
    // 0x1c8fc4: 0xe4800560  swc1        $f0, 0x560($a0)
    ctx->pc = 0x1c8fc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1376), bits); }
label_1c8fc8:
    // 0x1c8fc8: 0x3c013f53  lui         $at, 0x3F53
    ctx->pc = 0x1c8fc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16211 << 16));
    // 0x1c8fcc: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x1c8fccu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
    // 0x1c8fd0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1c8fd0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c8fd4: 0x3e00008  jr          $ra
    ctx->pc = 0x1C8FD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C8FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8FD4u;
        // 0x1c8fd8: 0xe4800568  swc1        $f0, 0x568($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1384), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C8FD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C8FDCu;
label_1c8fdc:
    // 0x1c8fdc: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1c8fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1c8fe0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1c8fe0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1c8fe4: 0x3c013d75  lui         $at, 0x3D75
    ctx->pc = 0x1c8fe4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15733 << 16));
    // 0x1c8fe8: 0x3421c28f  ori         $at, $at, 0xC28F
    ctx->pc = 0x1c8fe8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49807);
    // 0x1c8fec: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1c8fecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c8ff0: 0x54a20006  bnel        $a1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C8FF0u;
    {
        const bool branch_taken_0x1c8ff0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x1c8ff0) {
            ctx->pc = 0x1C8FF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C8FF0u;
            // 0x1c8ff4: 0xe4800560  swc1        $f0, 0x560($a0) (Delay Slot)
            { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1376), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C900Cu;
            goto label_1c900c;
        }
    }
    ctx->pc = 0x1C8FF8u;
    // 0x1c8ff8: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x1c8ff8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
    // 0x1c8ffc: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x1c8ffcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x1c9000: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1c9000u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c9004: 0x0  nop
    ctx->pc = 0x1c9004u;
    // NOP
    // 0x1c9008: 0xe4800560  swc1        $f0, 0x560($a0)
    ctx->pc = 0x1c9008u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1376), bits); }
label_1c900c:
    // 0x1c900c: 0x3c013f47  lui         $at, 0x3F47
    ctx->pc = 0x1c900cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16199 << 16));
    // 0x1c9010: 0x3421ae14  ori         $at, $at, 0xAE14
    ctx->pc = 0x1c9010u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)44564);
    // 0x1c9014: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1c9014u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c9018: 0x0  nop
    ctx->pc = 0x1c9018u;
    // NOP
    // 0x1c901c: 0xe4800568  swc1        $f0, 0x568($a0)
    ctx->pc = 0x1c901cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1384), bits); }
label_1c9020:
    // 0x1c9020: 0x3e00008  jr          $ra
    ctx->pc = 0x1C9020u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C9020u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C9028u;
}
