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

// Function: sub_00208EB0
// Address: 0x208eb0 - 0x208f78
void sub_00208EB0_0x208eb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00208EB0_0x208eb0");
#endif

    switch (ctx->pc) {
        case 0x208eb0u: goto label_208eb0;
        case 0x208eb4u: goto label_208eb4;
        case 0x208eb8u: goto label_208eb8;
        case 0x208ebcu: goto label_208ebc;
        case 0x208ec0u: goto label_208ec0;
        case 0x208ec4u: goto label_208ec4;
        case 0x208ec8u: goto label_208ec8;
        case 0x208eccu: goto label_208ecc;
        case 0x208ed0u: goto label_208ed0;
        case 0x208ed4u: goto label_208ed4;
        case 0x208ed8u: goto label_208ed8;
        case 0x208edcu: goto label_208edc;
        case 0x208ee0u: goto label_208ee0;
        case 0x208ee4u: goto label_208ee4;
        case 0x208ee8u: goto label_208ee8;
        case 0x208eecu: goto label_208eec;
        case 0x208ef0u: goto label_208ef0;
        case 0x208ef4u: goto label_208ef4;
        case 0x208ef8u: goto label_208ef8;
        case 0x208efcu: goto label_208efc;
        case 0x208f00u: goto label_208f00;
        case 0x208f04u: goto label_208f04;
        case 0x208f08u: goto label_208f08;
        case 0x208f0cu: goto label_208f0c;
        case 0x208f10u: goto label_208f10;
        case 0x208f14u: goto label_208f14;
        case 0x208f18u: goto label_208f18;
        case 0x208f1cu: goto label_208f1c;
        case 0x208f20u: goto label_208f20;
        case 0x208f24u: goto label_208f24;
        case 0x208f28u: goto label_208f28;
        case 0x208f2cu: goto label_208f2c;
        case 0x208f30u: goto label_208f30;
        case 0x208f34u: goto label_208f34;
        case 0x208f38u: goto label_208f38;
        case 0x208f3cu: goto label_208f3c;
        case 0x208f40u: goto label_208f40;
        case 0x208f44u: goto label_208f44;
        case 0x208f48u: goto label_208f48;
        case 0x208f4cu: goto label_208f4c;
        case 0x208f50u: goto label_208f50;
        case 0x208f54u: goto label_208f54;
        case 0x208f58u: goto label_208f58;
        case 0x208f5cu: goto label_208f5c;
        case 0x208f60u: goto label_208f60;
        case 0x208f64u: goto label_208f64;
        case 0x208f68u: goto label_208f68;
        case 0x208f6cu: goto label_208f6c;
        case 0x208f70u: goto label_208f70;
        case 0x208f74u: goto label_208f74;
        default: break;
    }

    ctx->pc = 0x208eb0u;

label_208eb0:
    // 0x208eb0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x208eb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_208eb4:
    // 0x208eb4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x208eb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_208eb8:
    // 0x208eb8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x208eb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_208ebc:
    // 0x208ebc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x208ebcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_208ec0:
    // 0x208ec0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x208ec0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_208ec4:
    // 0x208ec4: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x208ec4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_208ec8:
    // 0x208ec8: 0x84640088  lh          $a0, 0x88($v1)
    ctx->pc = 0x208ec8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 136)));
label_208ecc:
    // 0x208ecc: 0x8c62008c  lw          $v0, 0x8C($v1)
    ctx->pc = 0x208eccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 140)));
label_208ed0:
    // 0x208ed0: 0x40f809  jalr        $v0
label_208ed4:
    if (ctx->pc == 0x208ED4u) {
        ctx->pc = 0x208ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208ED0u;
        // 0x208ed4: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x208ED8u;
        goto label_208ed8;
    }
    ctx->pc = 0x208ED0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x208ED8u);
        ctx->pc = 0x208ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208ED0u;
        // 0x208ed4: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x208ED0u, 0x208ED8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x208ED8u;
label_208ed8:
    // 0x208ed8: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
label_208edc:
    if (ctx->pc == 0x208EDCu) {
        ctx->pc = 0x208EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208ED8u;
        // 0x208edc: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x208EE0u;
        goto label_208ee0;
    }
    ctx->pc = 0x208ED8u;
    {
        const bool branch_taken_0x208ed8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x208EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208ED8u;
        // 0x208edc: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208ed8) {
            ctx->pc = 0x208F64u;
            goto label_208f64;
        }
    }
    ctx->pc = 0x208EE0u;
label_208ee0:
    // 0x208ee0: 0xc080ffa  jal         func_203FE8
label_208ee4:
    if (ctx->pc == 0x208EE4u) {
        ctx->pc = 0x208EE8u;
        goto label_208ee8;
    }
    ctx->pc = 0x208EE0u;
    SET_GPR_U32(ctx, 31, 0x208EE8u);
    ctx->pc = 0x203FE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203FE8u, 0x208EE0u, 0x208EE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208EE8u;
label_208ee8:
    // 0x208ee8: 0x1440001e  bnez        $v0, . + 4 + (0x1E << 2)
label_208eec:
    if (ctx->pc == 0x208EECu) {
        ctx->pc = 0x208EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208EE8u;
        // 0x208eec: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x208EF0u;
        goto label_208ef0;
    }
    ctx->pc = 0x208EE8u;
    {
        const bool branch_taken_0x208ee8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x208EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208EE8u;
        // 0x208eec: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208ee8) {
            ctx->pc = 0x208F64u;
            goto label_208f64;
        }
    }
    ctx->pc = 0x208EF0u;
label_208ef0:
    // 0x208ef0: 0x8e240050  lw          $a0, 0x50($s1)
    ctx->pc = 0x208ef0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_208ef4:
    // 0x208ef4: 0xc05181e  jal         func_146078
label_208ef8:
    if (ctx->pc == 0x208EF8u) {
        ctx->pc = 0x208EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208EF4u;
        // 0x208ef8: 0x26300050  addiu       $s0, $s1, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x208EFCu;
        goto label_208efc;
    }
    ctx->pc = 0x208EF4u;
    SET_GPR_U32(ctx, 31, 0x208EFCu);
    ctx->pc = 0x208EF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x208EF4u;
    // 0x208ef8: 0x26300050  addiu       $s0, $s1, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x146078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x146078u, 0x208EF4u, 0x208EFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208EFCu;
label_208efc:
    // 0x208efc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x208efcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_208f00:
    // 0x208f00: 0xc07a4f0  jal         func_1E93C0
label_208f04:
    if (ctx->pc == 0x208F04u) {
        ctx->pc = 0x208F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208F00u;
        // 0x208f04: 0x3405f000  ori         $a1, $zero, 0xF000 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)61440);
        ctx->in_delay_slot = false;
        ctx->pc = 0x208F08u;
        goto label_208f08;
    }
    ctx->pc = 0x208F00u;
    SET_GPR_U32(ctx, 31, 0x208F08u);
    ctx->pc = 0x208F04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x208F00u;
    // 0x208f04: 0x3405f000  ori         $a1, $zero, 0xF000 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)61440);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E93C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E93C0u, 0x208F00u, 0x208F08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208F08u;
label_208f08:
    // 0x208f08: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x208f08u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
label_208f0c:
    // 0x208f0c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x208f0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_208f10:
    // 0x208f10: 0xc07a51a  jal         func_1E9468
label_208f14:
    if (ctx->pc == 0x208F14u) {
        ctx->pc = 0x208F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208F10u;
        // 0x208f14: 0x34a50fff  ori         $a1, $a1, 0xFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)4095);
        ctx->in_delay_slot = false;
        ctx->pc = 0x208F18u;
        goto label_208f18;
    }
    ctx->pc = 0x208F10u;
    SET_GPR_U32(ctx, 31, 0x208F18u);
    ctx->pc = 0x208F14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x208F10u;
    // 0x208f14: 0x34a50fff  ori         $a1, $a1, 0xFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)4095);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9468u, 0x208F10u, 0x208F18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208F18u;
label_208f18:
    // 0x208f18: 0x8e250090  lw          $a1, 0x90($s1)
    ctx->pc = 0x208f18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 144)));
label_208f1c:
    // 0x208f1c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x208f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_208f20:
    // 0x208f20: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x208f20u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
label_208f24:
    // 0x208f24: 0x8c430034  lw          $v1, 0x34($v0)
    ctx->pc = 0x208f24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_208f28:
    // 0x208f28: 0x60f809  jalr        $v1
label_208f2c:
    if (ctx->pc == 0x208F2Cu) {
        ctx->pc = 0x208F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208F28u;
        // 0x208f2c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x208F30u;
        goto label_208f30;
    }
    ctx->pc = 0x208F28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x208F30u);
        ctx->pc = 0x208F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208F28u;
        // 0x208f2c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x208F28u, 0x208F30u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x208F30u;
label_208f30:
    // 0x208f30: 0x8e250094  lw          $a1, 0x94($s1)
    ctx->pc = 0x208f30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 148)));
label_208f34:
    // 0x208f34: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x208f34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_208f38:
    // 0x208f38: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x208f38u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
label_208f3c:
    // 0x208f3c: 0x8c430034  lw          $v1, 0x34($v0)
    ctx->pc = 0x208f3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_208f40:
    // 0x208f40: 0x60f809  jalr        $v1
label_208f44:
    if (ctx->pc == 0x208F44u) {
        ctx->pc = 0x208F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208F40u;
        // 0x208f44: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x208F48u;
        goto label_208f48;
    }
    ctx->pc = 0x208F40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x208F48u);
        ctx->pc = 0x208F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208F40u;
        // 0x208f44: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x208F40u, 0x208F48u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x208F48u;
label_208f48:
    // 0x208f48: 0x8e250098  lw          $a1, 0x98($s1)
    ctx->pc = 0x208f48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 152)));
label_208f4c:
    // 0x208f4c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x208f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_208f50:
    // 0x208f50: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x208f50u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
label_208f54:
    // 0x208f54: 0x8c430034  lw          $v1, 0x34($v0)
    ctx->pc = 0x208f54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_208f58:
    // 0x208f58: 0x60f809  jalr        $v1
label_208f5c:
    if (ctx->pc == 0x208F5Cu) {
        ctx->pc = 0x208F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208F58u;
        // 0x208f5c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x208F60u;
        goto label_208f60;
    }
    ctx->pc = 0x208F58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x208F60u);
        ctx->pc = 0x208F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208F58u;
        // 0x208f5c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x208F58u, 0x208F60u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x208F60u;
label_208f60:
    // 0x208f60: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x208f60u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_208f64:
    // 0x208f64: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x208f64u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_208f68:
    // 0x208f68: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x208f68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_208f6c:
    // 0x208f6c: 0x3e00008  jr          $ra
label_208f70:
    if (ctx->pc == 0x208F70u) {
        ctx->pc = 0x208F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208F6Cu;
        // 0x208f70: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x208F74u;
        goto label_208f74;
    }
    ctx->pc = 0x208F6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x208F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208F6Cu;
        // 0x208f70: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x208F6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x208F74u;
label_208f74:
    // 0x208f74: 0x0  nop
    ctx->pc = 0x208f74u;
    // NOP
    ctx->pc = 0x208f78u;
}
