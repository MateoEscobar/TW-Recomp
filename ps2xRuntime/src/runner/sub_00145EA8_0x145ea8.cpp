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

// Function: sub_00145EA8
// Address: 0x145ea8 - 0x145f60
void sub_00145EA8_0x145ea8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00145EA8_0x145ea8");
#endif

    switch (ctx->pc) {
        case 0x145ea8u: goto label_145ea8;
        case 0x145eacu: goto label_145eac;
        case 0x145eb0u: goto label_145eb0;
        case 0x145eb4u: goto label_145eb4;
        case 0x145eb8u: goto label_145eb8;
        case 0x145ebcu: goto label_145ebc;
        case 0x145ec0u: goto label_145ec0;
        case 0x145ec4u: goto label_145ec4;
        case 0x145ec8u: goto label_145ec8;
        case 0x145eccu: goto label_145ecc;
        case 0x145ed0u: goto label_145ed0;
        case 0x145ed4u: goto label_145ed4;
        case 0x145ed8u: goto label_145ed8;
        case 0x145edcu: goto label_145edc;
        case 0x145ee0u: goto label_145ee0;
        case 0x145ee4u: goto label_145ee4;
        case 0x145ee8u: goto label_145ee8;
        case 0x145eecu: goto label_145eec;
        case 0x145ef0u: goto label_145ef0;
        case 0x145ef4u: goto label_145ef4;
        case 0x145ef8u: goto label_145ef8;
        case 0x145efcu: goto label_145efc;
        case 0x145f00u: goto label_145f00;
        case 0x145f04u: goto label_145f04;
        case 0x145f08u: goto label_145f08;
        case 0x145f0cu: goto label_145f0c;
        case 0x145f10u: goto label_145f10;
        case 0x145f14u: goto label_145f14;
        case 0x145f18u: goto label_145f18;
        case 0x145f1cu: goto label_145f1c;
        case 0x145f20u: goto label_145f20;
        case 0x145f24u: goto label_145f24;
        case 0x145f28u: goto label_145f28;
        case 0x145f2cu: goto label_145f2c;
        case 0x145f30u: goto label_145f30;
        case 0x145f34u: goto label_145f34;
        case 0x145f38u: goto label_145f38;
        case 0x145f3cu: goto label_145f3c;
        case 0x145f40u: goto label_145f40;
        case 0x145f44u: goto label_145f44;
        case 0x145f48u: goto label_145f48;
        case 0x145f4cu: goto label_145f4c;
        case 0x145f50u: goto label_145f50;
        case 0x145f54u: goto label_145f54;
        case 0x145f58u: goto label_145f58;
        case 0x145f5cu: goto label_145f5c;
        default: break;
    }

    ctx->pc = 0x145ea8u;

label_145ea8:
    // 0x145ea8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x145ea8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_145eac:
    // 0x145eac: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x145eacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_145eb0:
    // 0x145eb0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x145eb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_145eb4:
    // 0x145eb4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x145eb4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_145eb8:
    // 0x145eb8: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x145eb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_145ebc:
    // 0x145ebc: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x145ebcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_145ec0:
    // 0x145ec0: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x145ec0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_145ec4:
    // 0x145ec4: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x145ec4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_145ec8:
    // 0x145ec8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x145ec8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_145ecc:
    // 0x145ecc: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x145eccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_145ed0:
    // 0x145ed0: 0x84640020  lh          $a0, 0x20($v1)
    ctx->pc = 0x145ed0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 32)));
label_145ed4:
    // 0x145ed4: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x145ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_145ed8:
    // 0x145ed8: 0x40f809  jalr        $v0
label_145edc:
    if (ctx->pc == 0x145EDCu) {
        ctx->pc = 0x145EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145ED8u;
        // 0x145edc: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x145EE0u;
        goto label_145ee0;
    }
    ctx->pc = 0x145ED8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x145EE0u);
        ctx->pc = 0x145EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145ED8u;
        // 0x145edc: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x145ED8u, 0x145EE0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x145EE0u;
label_145ee0:
    // 0x145ee0: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
label_145ee4:
    if (ctx->pc == 0x145EE4u) {
        ctx->pc = 0x145EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145EE0u;
        // 0x145ee4: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x145EE8u;
        goto label_145ee8;
    }
    ctx->pc = 0x145EE0u;
    {
        const bool branch_taken_0x145ee0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x145EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145EE0u;
        // 0x145ee4: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145ee0) {
            ctx->pc = 0x145F44u;
            goto label_145f44;
        }
    }
    ctx->pc = 0x145EE8u;
label_145ee8:
    // 0x145ee8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x145ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_145eec:
    // 0x145eec: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x145eecu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_145ef0:
    // 0x145ef0: 0x84440018  lh          $a0, 0x18($v0)
    ctx->pc = 0x145ef0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 24)));
label_145ef4:
    // 0x145ef4: 0x8c43001c  lw          $v1, 0x1C($v0)
    ctx->pc = 0x145ef4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_145ef8:
    // 0x145ef8: 0x60f809  jalr        $v1
label_145efc:
    if (ctx->pc == 0x145EFCu) {
        ctx->pc = 0x145EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145EF8u;
        // 0x145efc: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x145F00u;
        goto label_145f00;
    }
    ctx->pc = 0x145EF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x145F00u);
        ctx->pc = 0x145EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145EF8u;
        // 0x145efc: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x145EF8u, 0x145F00u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x145F00u;
label_145f00:
    // 0x145f00: 0x8e05b8b8  lw          $a1, -0x4748($s0)
    ctx->pc = 0x145f00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294949048)));
label_145f04:
    // 0x145f04: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x145f04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_145f08:
    // 0x145f08: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x145f08u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_145f0c:
    // 0x145f0c: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x145f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_145f10:
    // 0x145f10: 0x40f809  jalr        $v0
label_145f14:
    if (ctx->pc == 0x145F14u) {
        ctx->pc = 0x145F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145F10u;
        // 0x145f14: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x145F18u;
        goto label_145f18;
    }
    ctx->pc = 0x145F10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x145F18u);
        ctx->pc = 0x145F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145F10u;
        // 0x145f14: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x145F10u, 0x145F18u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x145F18u;
label_145f18:
    // 0x145f18: 0x8e05b8b8  lw          $a1, -0x4748($s0)
    ctx->pc = 0x145f18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294949048)));
label_145f1c:
    // 0x145f1c: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x145f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_145f20:
    // 0x145f20: 0xae220060  sw          $v0, 0x60($s1)
    ctx->pc = 0x145f20u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 96), GPR_U32(ctx, 2));
label_145f24:
    // 0x145f24: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x145f24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_145f28:
    // 0x145f28: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x145f28u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_145f2c:
    // 0x145f2c: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x145f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_145f30:
    // 0x145f30: 0x40f809  jalr        $v0
label_145f34:
    if (ctx->pc == 0x145F34u) {
        ctx->pc = 0x145F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145F30u;
        // 0x145f34: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x145F38u;
        goto label_145f38;
    }
    ctx->pc = 0x145F30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x145F38u);
        ctx->pc = 0x145F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145F30u;
        // 0x145f34: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x145F30u, 0x145F38u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x145F38u;
label_145f38:
    // 0x145f38: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x145f38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_145f3c:
    // 0x145f3c: 0xae220064  sw          $v0, 0x64($s1)
    ctx->pc = 0x145f3cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
label_145f40:
    // 0x145f40: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x145f40u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_145f44:
    // 0x145f44: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x145f44u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_145f48:
    // 0x145f48: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x145f48u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_145f4c:
    // 0x145f4c: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x145f4cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_145f50:
    // 0x145f50: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x145f50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_145f54:
    // 0x145f54: 0x3e00008  jr          $ra
label_145f58:
    if (ctx->pc == 0x145F58u) {
        ctx->pc = 0x145F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145F54u;
        // 0x145f58: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x145F5Cu;
        goto label_145f5c;
    }
    ctx->pc = 0x145F54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x145F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145F54u;
        // 0x145f58: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x145F54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x145F5Cu;
label_145f5c:
    // 0x145f5c: 0x0  nop
    ctx->pc = 0x145f5cu;
    // NOP
    ctx->pc = 0x145f60u;
}
