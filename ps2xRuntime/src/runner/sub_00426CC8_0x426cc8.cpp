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

// Function: sub_00426CC8
// Address: 0x426cc8 - 0x426d58
void sub_00426CC8_0x426cc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00426CC8_0x426cc8");
#endif

    switch (ctx->pc) {
        case 0x426ce4u: goto label_426ce4;
        default: break;
    }

    ctx->pc = 0x426cc8u;

    // 0x426cc8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x426cc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x426ccc: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x426cccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x426cd0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x426cd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x426cd4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x426cd4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x426cd8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x426cd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x426cdc: 0xc1194f6  jal         func_4653D8
    ctx->pc = 0x426CDCu;
    SET_GPR_U32(ctx, 31, 0x426CE4u);
    ctx->pc = 0x426CE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x426CDCu;
    // 0x426ce0: 0x8cb10000  lw          $s1, 0x0($a1) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4653D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4653D8u, 0x426CDCu, 0x426CE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x426CE4u;
label_426ce4:
    // 0x426ce4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x426ce4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x426ce8: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x426CE8u;
    {
        const bool branch_taken_0x426ce8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x426CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x426CE8u;
        // 0x426cec: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x426ce8) {
            ctx->pc = 0x426D20u;
            goto label_426d20;
        }
    }
    ctx->pc = 0x426CF0u;
    // 0x426cf0: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x426CF0u;
    {
        const bool branch_taken_0x426cf0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x426CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x426CF0u;
        // 0x426cf4: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x426cf0) {
            ctx->pc = 0x426D08u;
            goto label_426d08;
        }
    }
    ctx->pc = 0x426CF8u;
    // 0x426cf8: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x426CF8u;
    {
        const bool branch_taken_0x426cf8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x426CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x426CF8u;
        // 0x426cfc: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x426cf8) {
            ctx->pc = 0x426D14u;
            goto label_426d14;
        }
    }
    ctx->pc = 0x426D00u;
    // 0x426d00: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x426D00u;
    {
        const bool branch_taken_0x426d00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x426D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x426D00u;
        // 0x426d04: 0x7bb10010  lq          $s1, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x426d00) {
            ctx->pc = 0x426D48u;
            goto label_426d48;
        }
    }
    ctx->pc = 0x426D08u;
label_426d08:
    // 0x426d08: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x426d08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x426d0c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x426D0Cu;
    {
        const bool branch_taken_0x426d0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x426D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x426D0Cu;
        // 0x426d10: 0x8c4351c0  lw          $v1, 0x51C0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20928)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x426d0c) {
            ctx->pc = 0x426D3Cu;
            goto label_426d3c;
        }
    }
    ctx->pc = 0x426D14u;
label_426d14:
    // 0x426d14: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x426d14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x426d18: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x426D18u;
    {
        const bool branch_taken_0x426d18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x426D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x426D18u;
        // 0x426d1c: 0x8c4351bc  lw          $v1, 0x51BC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20924)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x426d18) {
            ctx->pc = 0x426D3Cu;
            goto label_426d3c;
        }
    }
    ctx->pc = 0x426D20u;
label_426d20:
    // 0x426d20: 0x32220080  andi        $v0, $s1, 0x80
    ctx->pc = 0x426d20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)128);
    // 0x426d24: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x426D24u;
    {
        const bool branch_taken_0x426d24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x426D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x426D24u;
        // 0x426d28: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x426d24) {
            ctx->pc = 0x426D34u;
            goto label_426d34;
        }
    }
    ctx->pc = 0x426D2Cu;
    // 0x426d2c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x426D2Cu;
    {
        const bool branch_taken_0x426d2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x426D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x426D2Cu;
        // 0x426d30: 0x8c4351b8  lw          $v1, 0x51B8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20920)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x426d2c) {
            ctx->pc = 0x426D3Cu;
            goto label_426d3c;
        }
    }
    ctx->pc = 0x426D34u;
label_426d34:
    // 0x426d34: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x426d34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x426d38: 0x8c4351b4  lw          $v1, 0x51B4($v0)
    ctx->pc = 0x426d38u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5151B4u));
label_426d3c:
    // 0x426d3c: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x426d3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x426d40: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x426d40u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x426d44: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x426d44u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_426d48:
    // 0x426d48: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x426d48u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x426d4c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x426d4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x426d50: 0x3e00008  jr          $ra
    ctx->pc = 0x426D50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x426D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x426D50u;
        // 0x426d54: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x426D50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x426D58u;
}
