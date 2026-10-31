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

// Function: sub_00236EC8
// Address: 0x236ec8 - 0x236fb8
void sub_00236EC8_0x236ec8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00236EC8_0x236ec8");
#endif

    switch (ctx->pc) {
        case 0x236ec8u: goto label_236ec8;
        case 0x236eccu: goto label_236ecc;
        case 0x236ed0u: goto label_236ed0;
        case 0x236ed4u: goto label_236ed4;
        case 0x236ed8u: goto label_236ed8;
        case 0x236edcu: goto label_236edc;
        case 0x236ee0u: goto label_236ee0;
        case 0x236ee4u: goto label_236ee4;
        case 0x236ee8u: goto label_236ee8;
        case 0x236eecu: goto label_236eec;
        case 0x236ef0u: goto label_236ef0;
        case 0x236ef4u: goto label_236ef4;
        case 0x236ef8u: goto label_236ef8;
        case 0x236efcu: goto label_236efc;
        case 0x236f00u: goto label_236f00;
        case 0x236f04u: goto label_236f04;
        case 0x236f08u: goto label_236f08;
        case 0x236f0cu: goto label_236f0c;
        case 0x236f10u: goto label_236f10;
        case 0x236f14u: goto label_236f14;
        case 0x236f18u: goto label_236f18;
        case 0x236f1cu: goto label_236f1c;
        case 0x236f20u: goto label_236f20;
        case 0x236f24u: goto label_236f24;
        case 0x236f28u: goto label_236f28;
        case 0x236f2cu: goto label_236f2c;
        case 0x236f30u: goto label_236f30;
        case 0x236f34u: goto label_236f34;
        case 0x236f38u: goto label_236f38;
        case 0x236f3cu: goto label_236f3c;
        case 0x236f40u: goto label_236f40;
        case 0x236f44u: goto label_236f44;
        case 0x236f48u: goto label_236f48;
        case 0x236f4cu: goto label_236f4c;
        case 0x236f50u: goto label_236f50;
        case 0x236f54u: goto label_236f54;
        case 0x236f58u: goto label_236f58;
        case 0x236f5cu: goto label_236f5c;
        case 0x236f60u: goto label_236f60;
        case 0x236f64u: goto label_236f64;
        case 0x236f68u: goto label_236f68;
        case 0x236f6cu: goto label_236f6c;
        case 0x236f70u: goto label_236f70;
        case 0x236f74u: goto label_236f74;
        case 0x236f78u: goto label_236f78;
        case 0x236f7cu: goto label_236f7c;
        case 0x236f80u: goto label_236f80;
        case 0x236f84u: goto label_236f84;
        case 0x236f88u: goto label_236f88;
        case 0x236f8cu: goto label_236f8c;
        case 0x236f90u: goto label_236f90;
        case 0x236f94u: goto label_236f94;
        case 0x236f98u: goto label_236f98;
        case 0x236f9cu: goto label_236f9c;
        case 0x236fa0u: goto label_236fa0;
        case 0x236fa4u: goto label_236fa4;
        case 0x236fa8u: goto label_236fa8;
        case 0x236facu: goto label_236fac;
        case 0x236fb0u: goto label_236fb0;
        case 0x236fb4u: goto label_236fb4;
        default: break;
    }

    ctx->pc = 0x236ec8u;

label_236ec8:
    // 0x236ec8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x236ec8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_236ecc:
    // 0x236ecc: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x236eccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_236ed0:
    // 0x236ed0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x236ed0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_236ed4:
    // 0x236ed4: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x236ed4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
label_236ed8:
    // 0x236ed8: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x236ed8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_236edc:
    // 0x236edc: 0x80436810  lb          $v1, 0x6810($v0)
    ctx->pc = 0x236edcu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 26640)));
label_236ee0:
    // 0x236ee0: 0x24446810  addiu       $a0, $v0, 0x6810
    ctx->pc = 0x236ee0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 26640));
label_236ee4:
    // 0x236ee4: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x236ee4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_236ee8:
    // 0x236ee8: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x236ee8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_236eec:
    // 0x236eec: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x236eecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_236ef0:
    // 0x236ef0: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x236ef0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_236ef4:
    // 0x236ef4: 0x10600027  beqz        $v1, . + 4 + (0x27 << 2)
label_236ef8:
    if (ctx->pc == 0x236EF8u) {
        ctx->pc = 0x236EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236EF4u;
        // 0x236ef8: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236EFCu;
        goto label_236efc;
    }
    ctx->pc = 0x236EF4u;
    {
        const bool branch_taken_0x236ef4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x236EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236EF4u;
        // 0x236ef8: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236ef4) {
            ctx->pc = 0x236F94u;
            goto label_236f94;
        }
    }
    ctx->pc = 0x236EFCu;
label_236efc:
    // 0x236efc: 0x3c120051  lui         $s2, 0x51
    ctx->pc = 0x236efcu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)81 << 16));
label_236f00:
    // 0x236f00: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x236f00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_236f04:
    // 0x236f04: 0x8e462b04  lw          $a2, 0x2B04($s2)
    ctx->pc = 0x236f04u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11012)));
label_236f08:
    // 0x236f08: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x236f08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_236f0c:
    // 0x236f0c: 0x84640048  lh          $a0, 0x48($v1)
    ctx->pc = 0x236f0cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 72)));
label_236f10:
    // 0x236f10: 0x8c62004c  lw          $v0, 0x4C($v1)
    ctx->pc = 0x236f10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
label_236f14:
    // 0x236f14: 0x40f809  jalr        $v0
label_236f18:
    if (ctx->pc == 0x236F18u) {
        ctx->pc = 0x236F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236F14u;
        // 0x236f18: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236F1Cu;
        goto label_236f1c;
    }
    ctx->pc = 0x236F14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x236F1Cu);
        ctx->pc = 0x236F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236F14u;
        // 0x236f18: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x236F14u, 0x236F1Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x236F1Cu;
label_236f1c:
    // 0x236f1c: 0x8e502b04  lw          $s0, 0x2B04($s2)
    ctx->pc = 0x236f1cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11012)));
label_236f20:
    // 0x236f20: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x236f20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_236f24:
    // 0x236f24: 0x8e110000  lw          $s1, 0x0($s0)
    ctx->pc = 0x236f24u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_236f28:
    // 0x236f28: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x236f28u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_236f2c:
    // 0x236f2c: 0x86250058  lh          $a1, 0x58($s1)
    ctx->pc = 0x236f2cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 88)));
label_236f30:
    // 0x236f30: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x236f30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_236f34:
    // 0x236f34: 0x26310058  addiu       $s1, $s1, 0x58
    ctx->pc = 0x236f34u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 88));
label_236f38:
    // 0x236f38: 0x2058021  addu        $s0, $s0, $a1
    ctx->pc = 0x236f38u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
label_236f3c:
    // 0x236f3c: 0x40f809  jalr        $v0
label_236f40:
    if (ctx->pc == 0x236F40u) {
        ctx->pc = 0x236F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236F3Cu;
        // 0x236f40: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236F44u;
        goto label_236f44;
    }
    ctx->pc = 0x236F3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x236F44u);
        ctx->pc = 0x236F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236F3Cu;
        // 0x236f40: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x236F3Cu, 0x236F44u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x236F44u;
label_236f44:
    // 0x236f44: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x236f44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_236f48:
    // 0x236f48: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x236f48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_236f4c:
    // 0x236f4c: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x236f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_236f50:
    // 0x236f50: 0x40f809  jalr        $v0
label_236f54:
    if (ctx->pc == 0x236F54u) {
        ctx->pc = 0x236F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236F50u;
        // 0x236f54: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236F58u;
        goto label_236f58;
    }
    ctx->pc = 0x236F50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x236F58u);
        ctx->pc = 0x236F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236F50u;
        // 0x236f54: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x236F50u, 0x236F58u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x236F58u;
label_236f58:
    // 0x236f58: 0x8e462b04  lw          $a2, 0x2B04($s2)
    ctx->pc = 0x236f58u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11012)));
label_236f5c:
    // 0x236f5c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x236f5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_236f60:
    // 0x236f60: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x236f60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_236f64:
    // 0x236f64: 0x84440050  lh          $a0, 0x50($v0)
    ctx->pc = 0x236f64u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 80)));
label_236f68:
    // 0x236f68: 0x8c430054  lw          $v1, 0x54($v0)
    ctx->pc = 0x236f68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
label_236f6c:
    // 0x236f6c: 0x60f809  jalr        $v1
label_236f70:
    if (ctx->pc == 0x236F70u) {
        ctx->pc = 0x236F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236F6Cu;
        // 0x236f70: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236F74u;
        goto label_236f74;
    }
    ctx->pc = 0x236F6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x236F74u);
        ctx->pc = 0x236F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236F6Cu;
        // 0x236f70: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x236F6Cu, 0x236F74u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x236F74u;
label_236f74:
    // 0x236f74: 0x8e472b04  lw          $a3, 0x2B04($s2)
    ctx->pc = 0x236f74u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11012)));
label_236f78:
    // 0x236f78: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x236f78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_236f7c:
    // 0x236f7c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x236f7cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_236f80:
    // 0x236f80: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x236f80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_236f84:
    // 0x236f84: 0x84440088  lh          $a0, 0x88($v0)
    ctx->pc = 0x236f84u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 136)));
label_236f88:
    // 0x236f88: 0x8c43008c  lw          $v1, 0x8C($v0)
    ctx->pc = 0x236f88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 140)));
label_236f8c:
    // 0x236f8c: 0x60f809  jalr        $v1
label_236f90:
    if (ctx->pc == 0x236F90u) {
        ctx->pc = 0x236F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236F8Cu;
        // 0x236f90: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236F94u;
        goto label_236f94;
    }
    ctx->pc = 0x236F8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x236F94u);
        ctx->pc = 0x236F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236F8Cu;
        // 0x236f90: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x236F8Cu, 0x236F94u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x236F94u;
label_236f94:
    // 0x236f94: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x236f94u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_236f98:
    // 0x236f98: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x236f98u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_236f9c:
    // 0x236f9c: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x236f9cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_236fa0:
    // 0x236fa0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x236fa0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_236fa4:
    // 0x236fa4: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x236fa4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_236fa8:
    // 0x236fa8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x236fa8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_236fac:
    // 0x236fac: 0x3e00008  jr          $ra
label_236fb0:
    if (ctx->pc == 0x236FB0u) {
        ctx->pc = 0x236FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236FACu;
        // 0x236fb0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236FB4u;
        goto label_236fb4;
    }
    ctx->pc = 0x236FACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x236FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236FACu;
        // 0x236fb0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x236FACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x236FB4u;
label_236fb4:
    // 0x236fb4: 0x0  nop
    ctx->pc = 0x236fb4u;
    // NOP
    ctx->pc = 0x236fb8u;
}
