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

// Function: sub_004161E8
// Address: 0x4161e8 - 0x416250
void sub_004161E8_0x4161e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004161E8_0x4161e8");
#endif

    switch (ctx->pc) {
        case 0x4161e8u: goto label_4161e8;
        case 0x4161ecu: goto label_4161ec;
        case 0x4161f0u: goto label_4161f0;
        case 0x4161f4u: goto label_4161f4;
        case 0x4161f8u: goto label_4161f8;
        case 0x4161fcu: goto label_4161fc;
        case 0x416200u: goto label_416200;
        case 0x416204u: goto label_416204;
        case 0x416208u: goto label_416208;
        case 0x41620cu: goto label_41620c;
        case 0x416210u: goto label_416210;
        case 0x416214u: goto label_416214;
        case 0x416218u: goto label_416218;
        case 0x41621cu: goto label_41621c;
        case 0x416220u: goto label_416220;
        case 0x416224u: goto label_416224;
        case 0x416228u: goto label_416228;
        case 0x41622cu: goto label_41622c;
        case 0x416230u: goto label_416230;
        case 0x416234u: goto label_416234;
        case 0x416238u: goto label_416238;
        case 0x41623cu: goto label_41623c;
        case 0x416240u: goto label_416240;
        case 0x416244u: goto label_416244;
        case 0x416248u: goto label_416248;
        case 0x41624cu: goto label_41624c;
        default: break;
    }

    ctx->pc = 0x4161e8u;

label_4161e8:
    // 0x4161e8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4161e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_4161ec:
    // 0x4161ec: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x4161ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_4161f0:
    // 0x4161f0: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x4161f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_4161f4:
    // 0x4161f4: 0xc10586a  jal         func_4161A8
label_4161f8:
    if (ctx->pc == 0x4161F8u) {
        ctx->pc = 0x4161F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4161F4u;
        // 0x4161f8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4161FCu;
        goto label_4161fc;
    }
    ctx->pc = 0x4161F4u;
    SET_GPR_U32(ctx, 31, 0x4161FCu);
    ctx->pc = 0x4161F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4161F4u;
    // 0x4161f8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4161A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4161A8u, 0x4161F4u, 0x4161FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4161FCu;
label_4161fc:
    // 0x4161fc: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x4161fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
label_416200:
    // 0x416200: 0xc0e4060  jal         func_390180
label_416204:
    if (ctx->pc == 0x416204u) {
        ctx->pc = 0x416204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x416200u;
        // 0x416204: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x416208u;
        goto label_416208;
    }
    ctx->pc = 0x416200u;
    SET_GPR_U32(ctx, 31, 0x416208u);
    ctx->pc = 0x416204u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x416200u;
    // 0x416204: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x416200u, 0x416208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x416208u;
label_416208:
    // 0x416208: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_41620c:
    if (ctx->pc == 0x41620Cu) {
        ctx->pc = 0x41620Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x416208u;
        // 0x41620c: 0x26020010  addiu       $v0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x416210u;
        goto label_416210;
    }
    ctx->pc = 0x416208u;
    {
        const bool branch_taken_0x416208 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x41620Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x416208u;
        // 0x41620c: 0x26020010  addiu       $v0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x416208) {
            ctx->pc = 0x416240u;
            goto label_416240;
        }
    }
    ctx->pc = 0x416210u;
label_416210:
    // 0x416210: 0xc10586a  jal         func_4161A8
label_416214:
    if (ctx->pc == 0x416214u) {
        ctx->pc = 0x416214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x416210u;
        // 0x416214: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x416218u;
        goto label_416218;
    }
    ctx->pc = 0x416210u;
    SET_GPR_U32(ctx, 31, 0x416218u);
    ctx->pc = 0x416214u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x416210u;
    // 0x416214: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4161A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4161A8u, 0x416210u, 0x416218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x416218u;
label_416218:
    // 0x416218: 0x27a40024  addiu       $a0, $sp, 0x24
    ctx->pc = 0x416218u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 36));
label_41621c:
    // 0x41621c: 0xc0e4060  jal         func_390180
label_416220:
    if (ctx->pc == 0x416220u) {
        ctx->pc = 0x416220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41621Cu;
        // 0x416220: 0xafa20024  sw          $v0, 0x24($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x416224u;
        goto label_416224;
    }
    ctx->pc = 0x41621Cu;
    SET_GPR_U32(ctx, 31, 0x416224u);
    ctx->pc = 0x416220u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41621Cu;
    // 0x416220: 0xafa20024  sw          $v0, 0x24($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x41621Cu, 0x416224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x416224u;
label_416224:
    // 0x416224: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x416224u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_416228:
    // 0x416228: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x416228u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_41622c:
    // 0x41622c: 0x846500a8  lh          $a1, 0xA8($v1)
    ctx->pc = 0x41622cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 168)));
label_416230:
    // 0x416230: 0x8c6600ac  lw          $a2, 0xAC($v1)
    ctx->pc = 0x416230u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 172)));
label_416234:
    // 0x416234: 0xc0f809  jalr        $a2
label_416238:
    if (ctx->pc == 0x416238u) {
        ctx->pc = 0x416238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x416234u;
        // 0x416238: 0x452821  addu        $a1, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41623Cu;
        goto label_41623c;
    }
    ctx->pc = 0x416234u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x41623Cu);
        ctx->pc = 0x416238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x416234u;
        // 0x416238: 0x452821  addu        $a1, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x416234u, 0x41623Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x41623Cu;
label_41623c:
    // 0x41623c: 0x3a0102d  daddu       $v0, $sp, $zero
    ctx->pc = 0x41623cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_416240:
    // 0x416240: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x416240u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_416244:
    // 0x416244: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x416244u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_416248:
    // 0x416248: 0x3e00008  jr          $ra
label_41624c:
    if (ctx->pc == 0x41624Cu) {
        ctx->pc = 0x41624Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x416248u;
        // 0x41624c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x416250u;
        goto label_fallthrough_0x416248;
    }
    ctx->pc = 0x416248u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41624Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x416248u;
        // 0x41624c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x416248u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x416248:
    ctx->pc = 0x416250u;
}
