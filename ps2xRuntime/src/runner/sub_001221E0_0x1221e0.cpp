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

// Function: sub_001221E0
// Address: 0x1221e0 - 0x122248
void sub_001221E0_0x1221e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001221E0_0x1221e0");
#endif

    switch (ctx->pc) {
        case 0x1221e0u: goto label_1221e0;
        case 0x1221e4u: goto label_1221e4;
        case 0x1221e8u: goto label_1221e8;
        case 0x1221ecu: goto label_1221ec;
        case 0x1221f0u: goto label_1221f0;
        case 0x1221f4u: goto label_1221f4;
        case 0x1221f8u: goto label_1221f8;
        case 0x1221fcu: goto label_1221fc;
        case 0x122200u: goto label_122200;
        case 0x122204u: goto label_122204;
        case 0x122208u: goto label_122208;
        case 0x12220cu: goto label_12220c;
        case 0x122210u: goto label_122210;
        case 0x122214u: goto label_122214;
        case 0x122218u: goto label_122218;
        case 0x12221cu: goto label_12221c;
        case 0x122220u: goto label_122220;
        case 0x122224u: goto label_122224;
        case 0x122228u: goto label_122228;
        case 0x12222cu: goto label_12222c;
        case 0x122230u: goto label_122230;
        case 0x122234u: goto label_122234;
        case 0x122238u: goto label_122238;
        case 0x12223cu: goto label_12223c;
        case 0x122240u: goto label_122240;
        case 0x122244u: goto label_122244;
        default: break;
    }

    ctx->pc = 0x1221e0u;

label_1221e0:
    // 0x1221e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1221e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1221e4:
    // 0x1221e4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1221e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_1221e8:
    // 0x1221e8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1221e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1221ec:
    // 0x1221ec: 0x8c8501cc  lw          $a1, 0x1CC($a0)
    ctx->pc = 0x1221ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 460)));
label_1221f0:
    // 0x1221f0: 0x10a00010  beqz        $a1, . + 4 + (0x10 << 2)
label_1221f4:
    if (ctx->pc == 0x1221F4u) {
        ctx->pc = 0x1221F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1221F0u;
        // 0x1221f4: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1221F8u;
        goto label_1221f8;
    }
    ctx->pc = 0x1221F0u;
    {
        const bool branch_taken_0x1221f0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1221F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1221F0u;
        // 0x1221f4: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1221f0) {
            ctx->pc = 0x122234u;
            goto label_122234;
        }
    }
    ctx->pc = 0x1221F8u;
label_1221f8:
    // 0x1221f8: 0x8e062b04  lw          $a2, 0x2B04($s0)
    ctx->pc = 0x1221f8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11012)));
label_1221fc:
    // 0x1221fc: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x1221fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_122200:
    // 0x122200: 0x84640048  lh          $a0, 0x48($v1)
    ctx->pc = 0x122200u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 72)));
label_122204:
    // 0x122204: 0x8c62004c  lw          $v0, 0x4C($v1)
    ctx->pc = 0x122204u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
label_122208:
    // 0x122208: 0x40f809  jalr        $v0
label_12220c:
    if (ctx->pc == 0x12220Cu) {
        ctx->pc = 0x12220Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122208u;
        // 0x12220c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x122210u;
        goto label_122210;
    }
    ctx->pc = 0x122208u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x122210u);
        ctx->pc = 0x12220Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122208u;
        // 0x12220c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x122208u, 0x122210u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x122210u;
label_122210:
    // 0x122210: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_122214:
    if (ctx->pc == 0x122214u) {
        ctx->pc = 0x122214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122210u;
        // 0x122214: 0x8e072b04  lw          $a3, 0x2B04($s0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11012)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x122218u;
        goto label_122218;
    }
    ctx->pc = 0x122210u;
    {
        const bool branch_taken_0x122210 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x122214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122210u;
        // 0x122214: 0x8e072b04  lw          $a3, 0x2B04($s0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11012)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122210) {
            ctx->pc = 0x122234u;
            goto label_122234;
        }
    }
    ctx->pc = 0x122218u;
label_122218:
    // 0x122218: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x122218u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_12221c:
    // 0x12221c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x12221cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_122220:
    // 0x122220: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x122220u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_122224:
    // 0x122224: 0x84440088  lh          $a0, 0x88($v0)
    ctx->pc = 0x122224u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 136)));
label_122228:
    // 0x122228: 0x8c43008c  lw          $v1, 0x8C($v0)
    ctx->pc = 0x122228u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 140)));
label_12222c:
    // 0x12222c: 0x60f809  jalr        $v1
label_122230:
    if (ctx->pc == 0x122230u) {
        ctx->pc = 0x122230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12222Cu;
        // 0x122230: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x122234u;
        goto label_122234;
    }
    ctx->pc = 0x12222Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x122234u);
        ctx->pc = 0x122230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12222Cu;
        // 0x122230: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12222Cu, 0x122234u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x122234u;
label_122234:
    // 0x122234: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x122234u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_122238:
    // 0x122238: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x122238u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_12223c:
    // 0x12223c: 0x3e00008  jr          $ra
label_122240:
    if (ctx->pc == 0x122240u) {
        ctx->pc = 0x122240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12223Cu;
        // 0x122240: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x122244u;
        goto label_122244;
    }
    ctx->pc = 0x12223Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x122240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12223Cu;
        // 0x122240: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12223Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x122244u;
label_122244:
    // 0x122244: 0x0  nop
    ctx->pc = 0x122244u;
    // NOP
    ctx->pc = 0x122248u;
}
