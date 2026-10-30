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

// Function: sub_004AF690
// Address: 0x4af690 - 0x4af710
void sub_004AF690_0x4af690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004AF690_0x4af690");
#endif

    ctx->pc = 0x4af690u;

    // 0x4af690: 0x3c0a0053  lui         $t2, 0x53
    ctx->pc = 0x4af690u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)83 << 16));
    // 0x4af694: 0x80482d  daddu       $t1, $a0, $zero
    ctx->pc = 0x4af694u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4af698: 0x8d420ea8  lw          $v0, 0xEA8($t2)
    ctx->pc = 0x4af698u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x530EA8u));
    // 0x4af69c: 0x1122001a  beq         $t1, $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x4AF69Cu;
    {
        const bool branch_taken_0x4af69c = (GPR_U64(ctx, 9) == GPR_U64(ctx, 2));
        ctx->pc = 0x4AF6A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AF69Cu;
        // 0x4af6a0: 0x120102d  daddu       $v0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4af69c) {
            ctx->pc = 0x4AF708u;
            goto label_4af708;
        }
    }
    ctx->pc = 0x4AF6A4u;
    // 0x4af6a4: 0x11200007  beqz        $t1, . + 4 + (0x7 << 2)
    ctx->pc = 0x4AF6A4u;
    {
        const bool branch_taken_0x4af6a4 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AF6A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AF6A4u;
        // 0x4af6a8: 0x3c030053  lui         $v1, 0x53 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)83 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4af6a4) {
            ctx->pc = 0x4AF6C4u;
            goto label_4af6c4;
        }
    }
    ctx->pc = 0x4AF6ACu;
    // 0x4af6ac: 0x3c040053  lui         $a0, 0x53
    ctx->pc = 0x4af6acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)83 << 16));
    // 0x4af6b0: 0x3c020053  lui         $v0, 0x53
    ctx->pc = 0x4af6b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)83 << 16));
    // 0x4af6b4: 0x24632168  addiu       $v1, $v1, 0x2168
    ctx->pc = 0x4af6b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8552));
    // 0x4af6b8: 0x24422228  addiu       $v0, $v0, 0x2228
    ctx->pc = 0x4af6b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8744));
    // 0x4af6bc: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x4AF6BCu;
    {
        const bool branch_taken_0x4af6bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AF6C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AF6BCu;
        // 0x4af6c0: 0x248421c8  addiu       $a0, $a0, 0x21C8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8648));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4af6bc) {
            ctx->pc = 0x4AF6DCu;
            goto label_4af6dc;
        }
    }
    ctx->pc = 0x4AF6C4u;
label_4af6c4:
    // 0x4af6c4: 0x3c030053  lui         $v1, 0x53
    ctx->pc = 0x4af6c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)83 << 16));
    // 0x4af6c8: 0x3c040053  lui         $a0, 0x53
    ctx->pc = 0x4af6c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)83 << 16));
    // 0x4af6cc: 0x3c020053  lui         $v0, 0x53
    ctx->pc = 0x4af6ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)83 << 16));
    // 0x4af6d0: 0x24632060  addiu       $v1, $v1, 0x2060
    ctx->pc = 0x4af6d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8288));
    // 0x4af6d4: 0x24422110  addiu       $v0, $v0, 0x2110
    ctx->pc = 0x4af6d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8464));
    // 0x4af6d8: 0x248420b8  addiu       $a0, $a0, 0x20B8
    ctx->pc = 0x4af6d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8376));
label_4af6dc:
    // 0x4af6dc: 0x3c060053  lui         $a2, 0x53
    ctx->pc = 0x4af6dcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)83 << 16));
    // 0x4af6e0: 0x3c070053  lui         $a3, 0x53
    ctx->pc = 0x4af6e0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)83 << 16));
    // 0x4af6e4: 0x3c080053  lui         $t0, 0x53
    ctx->pc = 0x4af6e4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)83 << 16));
    // 0x4af6e8: 0x3c050053  lui         $a1, 0x53
    ctx->pc = 0x4af6e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)83 << 16));
    // 0x4af6ec: 0xacc30f40  sw          $v1, 0xF40($a2)
    ctx->pc = 0x4af6ecu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x530F40u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x530F40u, _value); } while (0);
    // 0x4af6f0: 0xace40eb8  sw          $a0, 0xEB8($a3)
    ctx->pc = 0x4af6f0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x530EB8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x530EB8u, _value); } while (0);
    // 0x4af6f4: 0xaca20f80  sw          $v0, 0xF80($a1)
    ctx->pc = 0x4af6f4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x530F80u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x530F80u, _value); } while (0);
    // 0x4af6f8: 0xad020ef8  sw          $v0, 0xEF8($t0)
    ctx->pc = 0x4af6f8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x530EF8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x530EF8u, _value); } while (0);
    // 0x4af6fc: 0x8d420ea8  lw          $v0, 0xEA8($t2)
    ctx->pc = 0x4af6fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 3752)));
    // 0x4af700: 0x3e00008  jr          $ra
    ctx->pc = 0x4AF700u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4AF704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AF700u;
        // 0x4af704: 0xad490ea8  sw          $t1, 0xEA8($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 3752), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AF700u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4AF708u;
label_4af708:
    // 0x4af708: 0x3e00008  jr          $ra
    ctx->pc = 0x4AF708u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AF708u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4AF710u;
}
