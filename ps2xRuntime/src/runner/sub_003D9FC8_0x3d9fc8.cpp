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

// Function: sub_003D9FC8
// Address: 0x3d9fc8 - 0x3da078
void sub_003D9FC8_0x3d9fc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D9FC8_0x3d9fc8");
#endif

    switch (ctx->pc) {
        case 0x3d9fc8u: goto label_3d9fc8;
        case 0x3d9fccu: goto label_3d9fcc;
        case 0x3d9fd0u: goto label_3d9fd0;
        case 0x3d9fd4u: goto label_3d9fd4;
        case 0x3d9fd8u: goto label_3d9fd8;
        case 0x3d9fdcu: goto label_3d9fdc;
        case 0x3d9fe0u: goto label_3d9fe0;
        case 0x3d9fe4u: goto label_3d9fe4;
        case 0x3d9fe8u: goto label_3d9fe8;
        case 0x3d9fecu: goto label_3d9fec;
        case 0x3d9ff0u: goto label_3d9ff0;
        case 0x3d9ff4u: goto label_3d9ff4;
        case 0x3d9ff8u: goto label_3d9ff8;
        case 0x3d9ffcu: goto label_3d9ffc;
        case 0x3da000u: goto label_3da000;
        case 0x3da004u: goto label_3da004;
        case 0x3da008u: goto label_3da008;
        case 0x3da00cu: goto label_3da00c;
        case 0x3da010u: goto label_3da010;
        case 0x3da014u: goto label_3da014;
        case 0x3da018u: goto label_3da018;
        case 0x3da01cu: goto label_3da01c;
        case 0x3da020u: goto label_3da020;
        case 0x3da024u: goto label_3da024;
        case 0x3da028u: goto label_3da028;
        case 0x3da02cu: goto label_3da02c;
        case 0x3da030u: goto label_3da030;
        case 0x3da034u: goto label_3da034;
        case 0x3da038u: goto label_3da038;
        case 0x3da03cu: goto label_3da03c;
        case 0x3da040u: goto label_3da040;
        case 0x3da044u: goto label_3da044;
        case 0x3da048u: goto label_3da048;
        case 0x3da04cu: goto label_3da04c;
        case 0x3da050u: goto label_3da050;
        case 0x3da054u: goto label_3da054;
        case 0x3da058u: goto label_3da058;
        case 0x3da05cu: goto label_3da05c;
        case 0x3da060u: goto label_3da060;
        case 0x3da064u: goto label_3da064;
        case 0x3da068u: goto label_3da068;
        case 0x3da06cu: goto label_3da06c;
        case 0x3da070u: goto label_3da070;
        case 0x3da074u: goto label_3da074;
        default: break;
    }

    ctx->pc = 0x3d9fc8u;

label_3d9fc8:
    // 0x3d9fc8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x3d9fc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_3d9fcc:
    // 0x3d9fcc: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x3d9fccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_3d9fd0:
    // 0x3d9fd0: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x3d9fd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_3d9fd4:
    // 0x3d9fd4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3d9fd4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3d9fd8:
    // 0x3d9fd8: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x3d9fd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_3d9fdc:
    // 0x3d9fdc: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3d9fdcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3d9fe0:
    // 0x3d9fe0: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3d9fe0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_3d9fe4:
    // 0x3d9fe4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3d9fe4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3d9fe8:
    // 0x3d9fe8: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3d9fe8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3d9fec:
    // 0x3d9fec: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3d9fecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3d9ff0:
    // 0x3d9ff0: 0x40f809  jalr        $v0
label_3d9ff4:
    if (ctx->pc == 0x3D9FF4u) {
        ctx->pc = 0x3D9FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D9FF0u;
        // 0x3d9ff4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D9FF8u;
        goto label_3d9ff8;
    }
    ctx->pc = 0x3D9FF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3D9FF8u);
        ctx->pc = 0x3D9FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D9FF0u;
        // 0x3d9ff4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D9FF0u, 0x3D9FF8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3D9FF8u;
label_3d9ff8:
    // 0x3d9ff8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3d9ff8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3d9ffc:
    // 0x3d9ffc: 0x240500e1  addiu       $a1, $zero, 0xE1
    ctx->pc = 0x3d9ffcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 225));
label_3da000:
    // 0x3da000: 0xc0e858c  jal         func_3A1630
label_3da004:
    if (ctx->pc == 0x3DA004u) {
        ctx->pc = 0x3DA004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DA000u;
        // 0x3da004: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DA008u;
        goto label_3da008;
    }
    ctx->pc = 0x3DA000u;
    SET_GPR_U32(ctx, 31, 0x3DA008u);
    ctx->pc = 0x3DA004u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DA000u;
    // 0x3da004: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3DA000u, 0x3DA008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DA008u;
label_3da008:
    // 0x3da008: 0xae0000bc  sw          $zero, 0xBC($s0)
    ctx->pc = 0x3da008u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 188), GPR_U32(ctx, 0));
label_3da00c:
    // 0x3da00c: 0xc0ea14c  jal         func_3A8530
label_3da010:
    if (ctx->pc == 0x3DA010u) {
        ctx->pc = 0x3DA010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DA00Cu;
        // 0x3da010: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DA014u;
        goto label_3da014;
    }
    ctx->pc = 0x3DA00Cu;
    SET_GPR_U32(ctx, 31, 0x3DA014u);
    ctx->pc = 0x3DA010u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DA00Cu;
    // 0x3da010: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8530u, 0x3DA00Cu, 0x3DA014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DA014u;
label_3da014:
    // 0x3da014: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3da014u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3da018:
    // 0x3da018: 0xc0ea12a  jal         func_3A84A8
label_3da01c:
    if (ctx->pc == 0x3DA01Cu) {
        ctx->pc = 0x3DA01Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DA018u;
        // 0x3da01c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DA020u;
        goto label_3da020;
    }
    ctx->pc = 0x3DA018u;
    SET_GPR_U32(ctx, 31, 0x3DA020u);
    ctx->pc = 0x3DA01Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DA018u;
    // 0x3da01c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3DA018u, 0x3DA020u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DA020u;
label_3da020:
    // 0x3da020: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3da020u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3da024:
    // 0x3da024: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3da024u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3da028:
    // 0x3da028: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3da028u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3da02c:
    // 0x3da02c: 0xc0ea12a  jal         func_3A84A8
label_3da030:
    if (ctx->pc == 0x3DA030u) {
        ctx->pc = 0x3DA030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DA02Cu;
        // 0x3da030: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DA034u;
        goto label_3da034;
    }
    ctx->pc = 0x3DA02Cu;
    SET_GPR_U32(ctx, 31, 0x3DA034u);
    ctx->pc = 0x3DA030u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DA02Cu;
    // 0x3da030: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3DA02Cu, 0x3DA034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DA034u;
label_3da034:
    // 0x3da034: 0x7ba30020  lq          $v1, 0x20($sp)
    ctx->pc = 0x3da034u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3da038:
    // 0x3da038: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x3da038u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
label_3da03c:
    // 0x3da03c: 0x248416c0  addiu       $a0, $a0, 0x16C0
    ctx->pc = 0x3da03cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5824));
label_3da040:
    // 0x3da040: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x3da040u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3da044:
    // 0x3da044: 0x7e030030  sq          $v1, 0x30($s0)
    ctx->pc = 0x3da044u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 48), GPR_VEC(ctx, 3));
label_3da048:
    // 0x3da048: 0x7e030010  sq          $v1, 0x10($s0)
    ctx->pc = 0x3da048u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 3));
label_3da04c:
    // 0x3da04c: 0x7fa30000  sq          $v1, 0x0($sp)
    ctx->pc = 0x3da04cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
label_3da050:
    // 0x3da050: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x3da050u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3da054:
    // 0x3da054: 0x78820000  lq          $v0, 0x0($a0)
    ctx->pc = 0x3da054u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_3da058:
    // 0x3da058: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3da058u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_3da05c:
    // 0x3da05c: 0x7e020030  sq          $v0, 0x30($s0)
    ctx->pc = 0x3da05cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 48), GPR_VEC(ctx, 2));
label_3da060:
    // 0x3da060: 0xae450000  sw          $a1, 0x0($s2)
    ctx->pc = 0x3da060u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 5));
label_3da064:
    // 0x3da064: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x3da064u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3da068:
    // 0x3da068: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x3da068u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3da06c:
    // 0x3da06c: 0x3e00008  jr          $ra
label_3da070:
    if (ctx->pc == 0x3DA070u) {
        ctx->pc = 0x3DA070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DA06Cu;
        // 0x3da070: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DA074u;
        goto label_3da074;
    }
    ctx->pc = 0x3DA06Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DA070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DA06Cu;
        // 0x3da070: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DA06Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DA074u;
label_3da074:
    // 0x3da074: 0x0  nop
    ctx->pc = 0x3da074u;
    // NOP
    ctx->pc = 0x3da078u;
}
