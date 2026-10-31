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

// Function: sub_0016DDA8
// Address: 0x16dda8 - 0x16de30
void sub_0016DDA8_0x16dda8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016DDA8_0x16dda8");
#endif

    switch (ctx->pc) {
        case 0x16ddd8u: goto label_16ddd8;
        case 0x16de0cu: goto label_16de0c;
        default: break;
    }

    ctx->pc = 0x16dda8u;

    // 0x16dda8: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x16dda8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ddac: 0x8ce200ac  lw          $v0, 0xAC($a3)
    ctx->pc = 0x16ddacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 172)));
    // 0x16ddb0: 0x4410016  bgez        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x16DDB0u;
    {
        const bool branch_taken_0x16ddb0 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x16ddb0) {
            ctx->pc = 0x16DE0Cu;
            goto label_16de0c;
        }
    }
    ctx->pc = 0x16DDB8u;
    // 0x16ddb8: 0x8ce200b0  lw          $v0, 0xB0($a3)
    ctx->pc = 0x16ddb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 176)));
    // 0x16ddbc: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x16DDBCu;
    {
        const bool branch_taken_0x16ddbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16DDC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DDBCu;
        // 0x16ddc0: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ddbc) {
            ctx->pc = 0x16DE0Cu;
            goto label_16de0c;
        }
    }
    ctx->pc = 0x16DDC4u;
    // 0x16ddc4: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x16ddc4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
    // 0x16ddc8: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x16ddc8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x16ddcc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x16ddccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ddd0: 0x24e400b4  addiu       $a0, $a3, 0xB4
    ctx->pc = 0x16ddd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 180));
    // 0x16ddd4: 0x0  nop
    ctx->pc = 0x16ddd4u;
    // NOP
label_16ddd8:
    // 0x16ddd8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x16ddd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x16dddc: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x16dddcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x16dde0: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x16DDE0u;
    {
        const bool branch_taken_0x16dde0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16dde0) {
            ctx->pc = 0x16DDE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16DDE0u;
            // 0x16dde4: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16DDF4u;
            goto label_16ddf4;
        }
    }
    ctx->pc = 0x16DDE8u;
    // 0x16dde8: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x16dde8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ddec: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x16ddecu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ddf0: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x16ddf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_16ddf4:
    // 0x16ddf4: 0x2ca20004  sltiu       $v0, $a1, 0x4
    ctx->pc = 0x16ddf4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x16ddf8: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x16DDF8u;
    {
        const bool branch_taken_0x16ddf8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16DDFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DDF8u;
        // 0x16ddfc: 0x2484001c  addiu       $a0, $a0, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ddf8) {
            ctx->pc = 0x16DDD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16ddd8;
        }
    }
    ctx->pc = 0x16DE00u;
    // 0x16de00: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x16de00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x16de04: 0x15020003  bne         $t0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x16DE04u;
    {
        const bool branch_taken_0x16de04 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 2));
        ctx->pc = 0x16DE08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DE04u;
        // 0x16de08: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16de04) {
            ctx->pc = 0x16DE14u;
            goto label_16de14;
        }
    }
    ctx->pc = 0x16DE0Cu;
label_16de0c:
    // 0x16de0c: 0x3e00008  jr          $ra
    ctx->pc = 0x16DE0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16DE10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DE0Cu;
        // 0x16de10: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16DE0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16DE14u;
label_16de14:
    // 0x16de14: 0x8c44b734  lw          $a0, -0x48CC($v0)
    ctx->pc = 0x16de14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948660)));
    // 0x16de18: 0x8c830048  lw          $v1, 0x48($a0)
    ctx->pc = 0x16de18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x16de1c: 0xc3182b  sltu        $v1, $a2, $v1
    ctx->pc = 0x16de1cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x16de20: 0x1060fffa  beqz        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x16DE20u;
    {
        const bool branch_taken_0x16de20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x16DE24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DE20u;
        // 0x16de24: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16de20) {
            ctx->pc = 0x16DE0Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16de0c;
        }
    }
    ctx->pc = 0x16DE28u;
    // 0x16de28: 0x3e00008  jr          $ra
    ctx->pc = 0x16DE28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16DE2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DE28u;
        // 0x16de2c: 0xace800ac  sw          $t0, 0xAC($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 172), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16DE28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16DE30u;
}
