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

// Function: sub_004D0198
// Address: 0x4d0198 - 0x4d0240
void sub_004D0198_0x4d0198(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004D0198_0x4d0198");
#endif

    switch (ctx->pc) {
        case 0x4d01c8u: goto label_4d01c8;
        default: break;
    }

    ctx->pc = 0x4d0198u;

    // 0x4d0198: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x4d0198u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
    // 0x4d019c: 0x3c02004d  lui         $v0, 0x4D
    ctx->pc = 0x4d019cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)77 << 16));
    // 0x4d01a0: 0xac644ae0  sw          $a0, 0x4AE0($v1)
    ctx->pc = 0x4d01a0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x714AE0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x714AE0u, _value); } while (0);
    // 0x4d01a4: 0x3e00008  jr          $ra
    ctx->pc = 0x4D01A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4D01A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D01A4u;
        // 0x4d01a8: 0x244202f0  addiu       $v0, $v0, 0x2F0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 752));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4D01A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4D01ACu;
    // 0x4d01ac: 0x0  nop
    ctx->pc = 0x4d01acu;
    // NOP
    // 0x4d01b0: 0x3c0903ff  lui         $t1, 0x3FF
    ctx->pc = 0x4d01b0u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)1023 << 16));
    // 0x4d01b4: 0x3c08fc00  lui         $t0, 0xFC00
    ctx->pc = 0x4d01b4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)64512 << 16));
    // 0x4d01b8: 0x248a0200  addiu       $t2, $a0, 0x200
    ctx->pc = 0x4d01b8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 4), 512));
    // 0x4d01bc: 0x3529f7ff  ori         $t1, $t1, 0xF7FF
    ctx->pc = 0x4d01bcu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)63487);
    // 0x4d01c0: 0x35080800  ori         $t0, $t0, 0x800
    ctx->pc = 0x4d01c0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)2048);
    // 0x4d01c4: 0x240b00ff  addiu       $t3, $zero, 0xFF
    ctx->pc = 0x4d01c4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_4d01c8:
    // 0x4d01c8: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x4d01c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4d01cc: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x4d01ccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d01d0: 0x123102a  slt         $v0, $t1, $v1
    ctx->pc = 0x4d01d0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x4d01d4: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x4D01D4u;
    {
        const bool branch_taken_0x4d01d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4D01D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D01D4u;
        // 0x4d01d8: 0x24e40002  addiu       $a0, $a3, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d01d4) {
            ctx->pc = 0x4D01F0u;
            goto label_4d01f0;
        }
    }
    ctx->pc = 0x4D01DCu;
    // 0x4d01dc: 0x103102a  slt         $v0, $t0, $v1
    ctx->pc = 0x4d01dcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x4d01e0: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4D01E0u;
    {
        const bool branch_taken_0x4d01e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4D01E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D01E0u;
        // 0x4d01e4: 0x312c2  srl         $v0, $v1, 11 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d01e0) {
            ctx->pc = 0x4D01F4u;
            goto label_4d01f4;
        }
    }
    ctx->pc = 0x4D01E8u;
    // 0x4d01e8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x4D01E8u;
    {
        const bool branch_taken_0x4d01e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D01ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D01E8u;
        // 0x4d01ec: 0x24028001  addiu       $v0, $zero, -0x7FFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294934529));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d01e8) {
            ctx->pc = 0x4D01F4u;
            goto label_4d01f4;
        }
    }
    ctx->pc = 0x4D01F0u;
label_4d01f0:
    // 0x4d01f0: 0x24027fff  addiu       $v0, $zero, 0x7FFF
    ctx->pc = 0x4d01f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32767));
label_4d01f4:
    // 0x4d01f4: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x4d01f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x4d01f8: 0x140302d  daddu       $a2, $t2, $zero
    ctx->pc = 0x4d01f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d01fc: 0xa4e20000  sh          $v0, 0x0($a3)
    ctx->pc = 0x4d01fcu;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4d0200: 0x123102a  slt         $v0, $t1, $v1
    ctx->pc = 0x4d0200u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x4d0204: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x4D0204u;
    {
        const bool branch_taken_0x4d0204 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4D0208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D0204u;
        // 0x4d0208: 0x24ca0002  addiu       $t2, $a2, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d0204) {
            ctx->pc = 0x4D0220u;
            goto label_4d0220;
        }
    }
    ctx->pc = 0x4D020Cu;
    // 0x4d020c: 0x103102a  slt         $v0, $t0, $v1
    ctx->pc = 0x4d020cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x4d0210: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4D0210u;
    {
        const bool branch_taken_0x4d0210 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4D0214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D0210u;
        // 0x4d0214: 0x312c2  srl         $v0, $v1, 11 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d0210) {
            ctx->pc = 0x4D0224u;
            goto label_4d0224;
        }
    }
    ctx->pc = 0x4D0218u;
    // 0x4d0218: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x4D0218u;
    {
        const bool branch_taken_0x4d0218 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D021Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D0218u;
        // 0x4d021c: 0x24028001  addiu       $v0, $zero, -0x7FFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294934529));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d0218) {
            ctx->pc = 0x4D0224u;
            goto label_4d0224;
        }
    }
    ctx->pc = 0x4D0220u;
label_4d0220:
    // 0x4d0220: 0x24027fff  addiu       $v0, $zero, 0x7FFF
    ctx->pc = 0x4d0220u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32767));
label_4d0224:
    // 0x4d0224: 0xa4c20000  sh          $v0, 0x0($a2)
    ctx->pc = 0x4d0224u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4d0228: 0x256bffff  addiu       $t3, $t3, -0x1
    ctx->pc = 0x4d0228u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967295));
    // 0x4d022c: 0x561ffe6  bgez        $t3, . + 4 + (-0x1A << 2)
    ctx->pc = 0x4D022Cu;
    {
        const bool branch_taken_0x4d022c = (GPR_S32(ctx, 11) >= 0);
        ctx->pc = 0x4D0230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D022Cu;
        // 0x4d0230: 0x24a50008  addiu       $a1, $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d022c) {
            ctx->pc = 0x4D01C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4d01c8;
        }
    }
    ctx->pc = 0x4D0234u;
    // 0x4d0234: 0x3e00008  jr          $ra
    ctx->pc = 0x4D0234u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4D0234u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4D023Cu;
    // 0x4d023c: 0x0  nop
    ctx->pc = 0x4d023cu;
    // NOP
    ctx->pc = 0x4d0240u;
}
