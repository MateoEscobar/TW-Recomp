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

// Function: sub_0014E2D8
// Address: 0x14e2d8 - 0x14e370
void sub_0014E2D8_0x14e2d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014E2D8_0x14e2d8");
#endif

    switch (ctx->pc) {
        case 0x14e318u: goto label_14e318;
        case 0x14e34cu: goto label_14e34c;
        case 0x14e35cu: goto label_14e35c;
        default: break;
    }

    ctx->pc = 0x14e2d8u;

    // 0x14e2d8: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x14e2d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x14e2dc: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x14e2dcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x14e2e0: 0x8c62c20c  lw          $v0, -0x3DF4($v1)
    ctx->pc = 0x14e2e0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x50C20Cu));
    // 0x14e2e4: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x14e2e4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x14e2e8: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x14E2E8u;
    {
        const bool branch_taken_0x14e2e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14E2ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E2E8u;
        // 0x14e2ec: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e2e8) {
            ctx->pc = 0x14E2FCu;
            goto label_14e2fc;
        }
    }
    ctx->pc = 0x14E2F0u;
    // 0x14e2f0: 0x3c040055  lui         $a0, 0x55
    ctx->pc = 0x14e2f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)85 << 16));
    // 0x14e2f4: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x14E2F4u;
    {
        const bool branch_taken_0x14e2f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14E2F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E2F4u;
        // 0x14e2f8: 0x2484bb58  addiu       $a0, $a0, -0x44A8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949720));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e2f4) {
            ctx->pc = 0x14E354u;
            goto label_14e354;
        }
    }
    ctx->pc = 0x14E2FCu;
label_14e2fc:
    // 0x14e2fc: 0xa4102a  slt         $v0, $a1, $a0
    ctx->pc = 0x14e2fcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x14e300: 0x54400010  bnel        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x14E300u;
    {
        const bool branch_taken_0x14e300 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14e300) {
            ctx->pc = 0x14E304u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14E300u;
            // 0x14e304: 0x3c040055  lui         $a0, 0x55 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)85 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14E344u;
            goto label_14e344;
        }
    }
    ctx->pc = 0x14E308u;
    // 0x14e308: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x14e308u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x14e30c: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x14e30cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x14e310: 0x24433ac8  addiu       $v1, $v0, 0x3AC8
    ctx->pc = 0x14e310u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 15048));
    // 0x14e314: 0x831021  addu        $v0, $a0, $v1
    ctx->pc = 0x14e314u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_14e318:
    // 0x14e318: 0x80420000  lb          $v0, 0x0($v0)
    ctx->pc = 0x14e318u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14e31c: 0x50400010  beql        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x14E31Cu;
    {
        const bool branch_taken_0x14e31c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14e31c) {
            ctx->pc = 0x14E320u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14E31Cu;
            // 0x14e320: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14E360u;
            goto label_14e360;
        }
    }
    ctx->pc = 0x14E324u;
    // 0x14e324: 0x54460003  bnel        $v0, $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x14E324u;
    {
        const bool branch_taken_0x14e324 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        if (branch_taken_0x14e324) {
            ctx->pc = 0x14E328u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14E324u;
            // 0x14e328: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14E334u;
            goto label_14e334;
        }
    }
    ctx->pc = 0x14E32Cu;
    // 0x14e32c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x14E32Cu;
    {
        const bool branch_taken_0x14e32c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14E330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E32Cu;
        // 0x14e330: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e32c) {
            ctx->pc = 0x14E360u;
            goto label_14e360;
        }
    }
    ctx->pc = 0x14E334u;
label_14e334:
    // 0x14e334: 0xa4102a  slt         $v0, $a1, $a0
    ctx->pc = 0x14e334u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x14e338: 0x1040fff7  beqz        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x14E338u;
    {
        const bool branch_taken_0x14e338 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14E33Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E338u;
        // 0x14e33c: 0x831021  addu        $v0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e338) {
            ctx->pc = 0x14E318u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14e318;
        }
    }
    ctx->pc = 0x14E340u;
    // 0x14e340: 0x3c040055  lui         $a0, 0x55
    ctx->pc = 0x14e340u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)85 << 16));
label_14e344:
    // 0x14e344: 0xc10fe1c  jal         func_43F870
    ctx->pc = 0x14E344u;
    SET_GPR_U32(ctx, 31, 0x14E34Cu);
    ctx->pc = 0x14E348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E344u;
    // 0x14e348: 0x2484bb28  addiu       $a0, $a0, -0x44D8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949672));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43F870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43F870u, 0x14E344u, 0x14E34Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E34Cu;
label_14e34c:
    // 0x14e34c: 0x3c040055  lui         $a0, 0x55
    ctx->pc = 0x14e34cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)85 << 16));
    // 0x14e350: 0x2484bb40  addiu       $a0, $a0, -0x44C0
    ctx->pc = 0x14e350u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949696));
label_14e354:
    // 0x14e354: 0xc10fe1c  jal         func_43F870
    ctx->pc = 0x14E354u;
    SET_GPR_U32(ctx, 31, 0x14E35Cu);
    ctx->pc = 0x43F870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43F870u, 0x14E354u, 0x14E35Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E35Cu;
label_14e35c:
    // 0x14e35c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x14e35cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_14e360:
    // 0x14e360: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14e360u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14e364: 0x3e00008  jr          $ra
    ctx->pc = 0x14E364u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14E368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E364u;
        // 0x14e368: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14E364u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14E36Cu;
    // 0x14e36c: 0x0  nop
    ctx->pc = 0x14e36cu;
    // NOP
    ctx->pc = 0x14e370u;
}
