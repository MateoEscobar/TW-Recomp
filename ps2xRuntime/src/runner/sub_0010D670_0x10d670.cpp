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

// Function: sub_0010D670
// Address: 0x10d670 - 0x10d738
void sub_0010D670_0x10d670(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010D670_0x10d670");
#endif

    ctx->pc = 0x10d670u;

    // 0x10d670: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x10d670u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x10d674: 0x14a2002e  bne         $a1, $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x10D674u;
    {
        const bool branch_taken_0x10d674 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x10d674) {
            ctx->pc = 0x10D730u;
            goto label_10d730;
        }
    }
    ctx->pc = 0x10D67Cu;
    // 0x10d67c: 0x1080002c  beqz        $a0, . + 4 + (0x2C << 2)
    ctx->pc = 0x10D67Cu;
    {
        const bool branch_taken_0x10d67c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x10D680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D67Cu;
        // 0x10d680: 0x3c020060  lui         $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d67c) {
            ctx->pc = 0x10D730u;
            goto label_10d730;
        }
    }
    ctx->pc = 0x10D684u;
    // 0x10d684: 0x3c04005a  lui         $a0, 0x5A
    ctx->pc = 0x10d684u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)90 << 16));
    // 0x10d688: 0x8c45d268  lw          $a1, -0x2D98($v0)
    ctx->pc = 0x10d688u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955624)));
    // 0x10d68c: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x10d68cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x10d690: 0x8c66d280  lw          $a2, -0x2D80($v1)
    ctx->pc = 0x10d690u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x5FD280u));
    // 0x10d694: 0x24828640  addiu       $v0, $a0, -0x79C0
    ctx->pc = 0x10d694u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936128));
    // 0x10d698: 0xac858640  sw          $a1, -0x79C0($a0)
    ctx->pc = 0x10d698u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x598640u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x598640u, _value); } while (0);
    // 0x10d69c: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x10d69cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x10d6a0: 0xac460000  sw          $a2, 0x0($v0)
    ctx->pc = 0x10d6a0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x598644u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x598644u, _value); } while (0);
    // 0x10d6a4: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x10d6a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x10d6a8: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x10d6a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x10d6ac: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x10d6acu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
    // 0x10d6b0: 0x8c64d288  lw          $a0, -0x2D78($v1)
    ctx->pc = 0x10d6b0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5FD288u));
    // 0x10d6b4: 0x3c070060  lui         $a3, 0x60
    ctx->pc = 0x10d6b4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)96 << 16));
    // 0x10d6b8: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x10d6b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x10d6bc: 0x3c080060  lui         $t0, 0x60
    ctx->pc = 0x10d6bcu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)96 << 16));
    // 0x10d6c0: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x10d6c0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x598648u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x598648u, _value); } while (0);
    // 0x10d6c4: 0x3c090060  lui         $t1, 0x60
    ctx->pc = 0x10d6c4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)96 << 16));
    // 0x10d6c8: 0x8c64d290  lw          $a0, -0x2D70($v1)
    ctx->pc = 0x10d6c8u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5FD290u));
    // 0x10d6cc: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x10d6ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x10d6d0: 0x8ca6d298  lw          $a2, -0x2D68($a1)
    ctx->pc = 0x10d6d0u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x5FD298u));
    // 0x10d6d4: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x10d6d4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x59864Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x59864Cu, _value); } while (0);
    // 0x10d6d8: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x10d6d8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
    // 0x10d6dc: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x10d6dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x10d6e0: 0x8ce3d2a0  lw          $v1, -0x2D60($a3)
    ctx->pc = 0x10d6e0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5FD2A0u));
    // 0x10d6e4: 0xac460000  sw          $a2, 0x0($v0)
    ctx->pc = 0x10d6e4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x598650u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x598650u, _value); } while (0);
    // 0x10d6e8: 0x3c070060  lui         $a3, 0x60
    ctx->pc = 0x10d6e8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)96 << 16));
    // 0x10d6ec: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x10d6ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x10d6f0: 0x3c060060  lui         $a2, 0x60
    ctx->pc = 0x10d6f0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)96 << 16));
    // 0x10d6f4: 0x8d04d2a8  lw          $a0, -0x2D58($t0)
    ctx->pc = 0x10d6f4u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5FD2A8u));
    // 0x10d6f8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x10d6f8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x598654u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x598654u, _value); } while (0);
    // 0x10d6fc: 0x8ca3d2b8  lw          $v1, -0x2D48($a1)
    ctx->pc = 0x10d6fcu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5FD2B8u));
    // 0x10d700: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x10d700u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x10d704: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x10d704u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x598658u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x598658u, _value); } while (0);
    // 0x10d708: 0x8d24d2c0  lw          $a0, -0x2D40($t1)
    ctx->pc = 0x10d708u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5FD2C0u));
    // 0x10d70c: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x10d70cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x10d710: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x10d710u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x59865Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x59865Cu, _value); } while (0);
    // 0x10d714: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x10d714u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x10d718: 0x8ce5d2c8  lw          $a1, -0x2D38($a3)
    ctx->pc = 0x10d718u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x5FD2C8u));
    // 0x10d71c: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x10d71cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x598660u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x598660u, _value); } while (0);
    // 0x10d720: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x10d720u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x10d724: 0x8cc3d278  lw          $v1, -0x2D88($a2)
    ctx->pc = 0x10d724u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5FD278u));
    // 0x10d728: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x10d728u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x598664u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x598664u, _value); } while (0);
    // 0x10d72c: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x10d72cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x598668u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x598668u, _value); } while (0);
label_10d730:
    // 0x10d730: 0x3e00008  jr          $ra
    ctx->pc = 0x10D730u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10D730u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10D738u;
}
