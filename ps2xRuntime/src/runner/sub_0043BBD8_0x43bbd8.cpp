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

// Function: sub_0043BBD8
// Address: 0x43bbd8 - 0x43bca0
void sub_0043BBD8_0x43bbd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0043BBD8_0x43bbd8");
#endif

    switch (ctx->pc) {
        case 0x43bbf4u: goto label_43bbf4;
        case 0x43bc80u: goto label_43bc80;
        default: break;
    }

    ctx->pc = 0x43bbd8u;

    // 0x43bbd8: 0xa60018  mult        $zero, $a1, $a2
    ctx->pc = 0x43bbd8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x43bbdc: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x43bbdcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x43bbe0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x43bbe0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x43bbe4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x43bbe4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x43bbe8: 0x2812  mflo        $a1
    ctx->pc = 0x43bbe8u;
    SET_GPR_U64(ctx, 5, ctx->lo);
    // 0x43bbec: 0xc10e314  jal         func_438C50
    ctx->pc = 0x43BBECu;
    SET_GPR_U32(ctx, 31, 0x43BBF4u);
    ctx->pc = 0x438C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x438C50u, 0x43BBECu, 0x43BBF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x43BBF4u;
label_43bbf4:
    // 0x43bbf4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x43bbf4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43bbf8: 0x56000003  bnel        $s0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x43BBF8u;
    {
        const bool branch_taken_0x43bbf8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x43bbf8) {
            ctx->pc = 0x43BBFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x43BBF8u;
            // 0x43bbfc: 0x8e03fffc  lw          $v1, -0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294967292)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x43BC08u;
            goto label_43bc08;
        }
    }
    ctx->pc = 0x43BC00u;
    // 0x43bc00: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x43BC00u;
    {
        const bool branch_taken_0x43bc00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x43BC04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43BC00u;
        // 0x43bc04: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43bc00) {
            ctx->pc = 0x43BC84u;
            goto label_43bc84;
        }
    }
    ctx->pc = 0x43BC08u;
label_43bc08:
    // 0x43bc08: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x43bc08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x43bc0c: 0x3442fffc  ori         $v0, $v0, 0xFFFC
    ctx->pc = 0x43bc0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65532);
    // 0x43bc10: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x43bc10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x43bc14: 0x2466fffc  addiu       $a2, $v1, -0x4
    ctx->pc = 0x43bc14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967292));
    // 0x43bc18: 0x2cc20025  sltiu       $v0, $a2, 0x25
    ctx->pc = 0x43bc18u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)37) ? 1 : 0);
    // 0x43bc1c: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x43BC1Cu;
    {
        const bool branch_taken_0x43bc1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x43BC20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43BC1Cu;
        // 0x43bc20: 0x2cc20014  sltiu       $v0, $a2, 0x14 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)20) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x43bc1c) {
            ctx->pc = 0x43BC74u;
            goto label_43bc74;
        }
    }
    ctx->pc = 0x43BC24u;
    // 0x43bc24: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x43BC24u;
    {
        const bool branch_taken_0x43bc24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x43BC28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43BC24u;
        // 0x43bc28: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43bc24) {
            ctx->pc = 0x43BC60u;
            goto label_43bc60;
        }
    }
    ctx->pc = 0x43BC2Cu;
    // 0x43bc2c: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x43bc2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x43bc30: 0x26040008  addiu       $a0, $s0, 0x8
    ctx->pc = 0x43bc30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x43bc34: 0x2cc2001c  sltiu       $v0, $a2, 0x1C
    ctx->pc = 0x43bc34u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)28) ? 1 : 0);
    // 0x43bc38: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x43BC38u;
    {
        const bool branch_taken_0x43bc38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x43BC3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43BC38u;
        // 0x43bc3c: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43bc38) {
            ctx->pc = 0x43BC60u;
            goto label_43bc60;
        }
    }
    ctx->pc = 0x43BC40u;
    // 0x43bc40: 0x2cc20024  sltiu       $v0, $a2, 0x24
    ctx->pc = 0x43bc40u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)36) ? 1 : 0);
    // 0x43bc44: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x43bc44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x43bc48: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x43bc48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x43bc4c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x43BC4Cu;
    {
        const bool branch_taken_0x43bc4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x43BC50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43BC4Cu;
        // 0x43bc50: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43bc4c) {
            ctx->pc = 0x43BC60u;
            goto label_43bc60;
        }
    }
    ctx->pc = 0x43BC54u;
    // 0x43bc54: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x43bc54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x43bc58: 0x26040018  addiu       $a0, $s0, 0x18
    ctx->pc = 0x43bc58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x43bc5c: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x43bc5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
label_43bc60:
    // 0x43bc60: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x43bc60u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x43bc64: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x43bc64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x43bc68: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x43bc68u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x43bc6c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x43BC6Cu;
    {
        const bool branch_taken_0x43bc6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x43BC70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43BC6Cu;
        // 0x43bc70: 0xac800000  sw          $zero, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43bc6c) {
            ctx->pc = 0x43BC80u;
            goto label_43bc80;
        }
    }
    ctx->pc = 0x43BC74u;
label_43bc74:
    // 0x43bc74: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x43bc74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43bc78: 0xc10c1fa  jal         func_4307E8
    ctx->pc = 0x43BC78u;
    SET_GPR_U32(ctx, 31, 0x43BC80u);
    ctx->pc = 0x43BC7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x43BC78u;
    // 0x43bc7c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4307E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4307E8u, 0x43BC78u, 0x43BC80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x43BC80u;
label_43bc80:
    // 0x43bc80: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x43bc80u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_43bc84:
    // 0x43bc84: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x43bc84u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x43bc88: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x43bc88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x43bc8c: 0x3e00008  jr          $ra
    ctx->pc = 0x43BC8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x43BC90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43BC8Cu;
        // 0x43bc90: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x43BC8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x43BC94u;
    // 0x43bc94: 0x0  nop
    ctx->pc = 0x43bc94u;
    // NOP
    // 0x43bc98: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x43bc98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x43bc9c: 0x0  nop
    ctx->pc = 0x43bc9cu;
    // NOP
    ctx->pc = 0x43bca0u;
}
