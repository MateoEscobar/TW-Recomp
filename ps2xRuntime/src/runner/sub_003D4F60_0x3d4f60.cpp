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

// Function: sub_003D4F60
// Address: 0x3d4f60 - 0x3d50c8
void sub_003D4F60_0x3d4f60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D4F60_0x3d4f60");
#endif

    switch (ctx->pc) {
        case 0x3d4f60u: goto label_3d4f60;
        case 0x3d4f64u: goto label_3d4f64;
        case 0x3d4f68u: goto label_3d4f68;
        case 0x3d4f6cu: goto label_3d4f6c;
        case 0x3d4f70u: goto label_3d4f70;
        case 0x3d4f74u: goto label_3d4f74;
        case 0x3d4f78u: goto label_3d4f78;
        case 0x3d4f7cu: goto label_3d4f7c;
        case 0x3d4f80u: goto label_3d4f80;
        case 0x3d4f84u: goto label_3d4f84;
        case 0x3d4f88u: goto label_3d4f88;
        case 0x3d4f8cu: goto label_3d4f8c;
        case 0x3d4f90u: goto label_3d4f90;
        case 0x3d4f94u: goto label_3d4f94;
        case 0x3d4f98u: goto label_3d4f98;
        case 0x3d4f9cu: goto label_3d4f9c;
        case 0x3d4fa0u: goto label_3d4fa0;
        case 0x3d4fa4u: goto label_3d4fa4;
        case 0x3d4fa8u: goto label_3d4fa8;
        case 0x3d4facu: goto label_3d4fac;
        case 0x3d4fb0u: goto label_3d4fb0;
        case 0x3d4fb4u: goto label_3d4fb4;
        case 0x3d4fb8u: goto label_3d4fb8;
        case 0x3d4fbcu: goto label_3d4fbc;
        case 0x3d4fc0u: goto label_3d4fc0;
        case 0x3d4fc4u: goto label_3d4fc4;
        case 0x3d4fc8u: goto label_3d4fc8;
        case 0x3d4fccu: goto label_3d4fcc;
        case 0x3d4fd0u: goto label_3d4fd0;
        case 0x3d4fd4u: goto label_3d4fd4;
        case 0x3d4fd8u: goto label_3d4fd8;
        case 0x3d4fdcu: goto label_3d4fdc;
        case 0x3d4fe0u: goto label_3d4fe0;
        case 0x3d4fe4u: goto label_3d4fe4;
        case 0x3d4fe8u: goto label_3d4fe8;
        case 0x3d4fecu: goto label_3d4fec;
        case 0x3d4ff0u: goto label_3d4ff0;
        case 0x3d4ff4u: goto label_3d4ff4;
        case 0x3d4ff8u: goto label_3d4ff8;
        case 0x3d4ffcu: goto label_3d4ffc;
        case 0x3d5000u: goto label_3d5000;
        case 0x3d5004u: goto label_3d5004;
        case 0x3d5008u: goto label_3d5008;
        case 0x3d500cu: goto label_3d500c;
        case 0x3d5010u: goto label_3d5010;
        case 0x3d5014u: goto label_3d5014;
        case 0x3d5018u: goto label_3d5018;
        case 0x3d501cu: goto label_3d501c;
        case 0x3d5020u: goto label_3d5020;
        case 0x3d5024u: goto label_3d5024;
        case 0x3d5028u: goto label_3d5028;
        case 0x3d502cu: goto label_3d502c;
        case 0x3d5030u: goto label_3d5030;
        case 0x3d5034u: goto label_3d5034;
        case 0x3d5038u: goto label_3d5038;
        case 0x3d503cu: goto label_3d503c;
        case 0x3d5040u: goto label_3d5040;
        case 0x3d5044u: goto label_3d5044;
        case 0x3d5048u: goto label_3d5048;
        case 0x3d504cu: goto label_3d504c;
        case 0x3d5050u: goto label_3d5050;
        case 0x3d5054u: goto label_3d5054;
        case 0x3d5058u: goto label_3d5058;
        case 0x3d505cu: goto label_3d505c;
        case 0x3d5060u: goto label_3d5060;
        case 0x3d5064u: goto label_3d5064;
        case 0x3d5068u: goto label_3d5068;
        case 0x3d506cu: goto label_3d506c;
        case 0x3d5070u: goto label_3d5070;
        case 0x3d5074u: goto label_3d5074;
        case 0x3d5078u: goto label_3d5078;
        case 0x3d507cu: goto label_3d507c;
        case 0x3d5080u: goto label_3d5080;
        case 0x3d5084u: goto label_3d5084;
        case 0x3d5088u: goto label_3d5088;
        case 0x3d508cu: goto label_3d508c;
        case 0x3d5090u: goto label_3d5090;
        case 0x3d5094u: goto label_3d5094;
        case 0x3d5098u: goto label_3d5098;
        case 0x3d509cu: goto label_3d509c;
        case 0x3d50a0u: goto label_3d50a0;
        case 0x3d50a4u: goto label_3d50a4;
        case 0x3d50a8u: goto label_3d50a8;
        case 0x3d50acu: goto label_3d50ac;
        case 0x3d50b0u: goto label_3d50b0;
        case 0x3d50b4u: goto label_3d50b4;
        case 0x3d50b8u: goto label_3d50b8;
        case 0x3d50bcu: goto label_3d50bc;
        case 0x3d50c0u: goto label_3d50c0;
        case 0x3d50c4u: goto label_3d50c4;
        default: break;
    }

    ctx->pc = 0x3d4f60u;

label_3d4f60:
    // 0x3d4f60: 0x27bdfb30  addiu       $sp, $sp, -0x4D0
    ctx->pc = 0x3d4f60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966064));
label_3d4f64:
    // 0x3d4f64: 0x7fb004c0  sq          $s0, 0x4C0($sp)
    ctx->pc = 0x3d4f64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1216), GPR_VEC(ctx, 16));
label_3d4f68:
    // 0x3d4f68: 0x7fb104b0  sq          $s1, 0x4B0($sp)
    ctx->pc = 0x3d4f68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1200), GPR_VEC(ctx, 17));
label_3d4f6c:
    // 0x3d4f6c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3d4f6cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3d4f70:
    // 0x3d4f70: 0x7fb204a0  sq          $s2, 0x4A0($sp)
    ctx->pc = 0x3d4f70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1184), GPR_VEC(ctx, 18));
label_3d4f74:
    // 0x3d4f74: 0x7fb30490  sq          $s3, 0x490($sp)
    ctx->pc = 0x3d4f74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1168), GPR_VEC(ctx, 19));
label_3d4f78:
    // 0x3d4f78: 0x7fb40480  sq          $s4, 0x480($sp)
    ctx->pc = 0x3d4f78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1152), GPR_VEC(ctx, 20));
label_3d4f7c:
    // 0x3d4f7c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x3d4f7cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3d4f80:
    // 0x3d4f80: 0x7fb50470  sq          $s5, 0x470($sp)
    ctx->pc = 0x3d4f80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1136), GPR_VEC(ctx, 21));
label_3d4f84:
    // 0x3d4f84: 0xffbf0460  sd          $ra, 0x460($sp)
    ctx->pc = 0x3d4f84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1120), GPR_U64(ctx, 31));
label_3d4f88:
    // 0x3d4f88: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x3d4f88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_3d4f8c:
    // 0x3d4f8c: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3d4f8cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3d4f90:
    // 0x3d4f90: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3d4f90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3d4f94:
    // 0x3d4f94: 0x40f809  jalr        $v0
label_3d4f98:
    if (ctx->pc == 0x3D4F98u) {
        ctx->pc = 0x3D4F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4F94u;
        // 0x3d4f98: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D4F9Cu;
        goto label_3d4f9c;
    }
    ctx->pc = 0x3D4F94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3D4F9Cu);
        ctx->pc = 0x3D4F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4F94u;
        // 0x3d4f98: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D4F94u, 0x3D4F9Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3D4F9Cu;
label_3d4f9c:
    // 0x3d4f9c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3d4f9cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3d4fa0:
    // 0x3d4fa0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x3d4fa0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3d4fa4:
    // 0x3d4fa4: 0xc0e858c  jal         func_3A1630
label_3d4fa8:
    if (ctx->pc == 0x3D4FA8u) {
        ctx->pc = 0x3D4FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4FA4u;
        // 0x3d4fa8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D4FACu;
        goto label_3d4fac;
    }
    ctx->pc = 0x3D4FA4u;
    SET_GPR_U32(ctx, 31, 0x3D4FACu);
    ctx->pc = 0x3D4FA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D4FA4u;
    // 0x3d4fa8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3D4FA4u, 0x3D4FACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D4FACu;
label_3d4fac:
    // 0x3d4fac: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x3d4facu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_3d4fb0:
    // 0x3d4fb0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3d4fb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3d4fb4:
    // 0x3d4fb4: 0xc0ea14c  jal         func_3A8530
label_3d4fb8:
    if (ctx->pc == 0x3D4FB8u) {
        ctx->pc = 0x3D4FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4FB4u;
        // 0x3d4fb8: 0xae620054  sw          $v0, 0x54($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D4FBCu;
        goto label_3d4fbc;
    }
    ctx->pc = 0x3D4FB4u;
    SET_GPR_U32(ctx, 31, 0x3D4FBCu);
    ctx->pc = 0x3D4FB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D4FB4u;
    // 0x3d4fb8: 0xae620054  sw          $v0, 0x54($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 84), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8530u, 0x3D4FB4u, 0x3D4FBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D4FBCu;
label_3d4fbc:
    // 0x3d4fbc: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3d4fbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3d4fc0:
    // 0x3d4fc0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3d4fc0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3d4fc4:
    // 0x3d4fc4: 0xc0ea12a  jal         func_3A84A8
label_3d4fc8:
    if (ctx->pc == 0x3D4FC8u) {
        ctx->pc = 0x3D4FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4FC4u;
        // 0x3d4fc8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D4FCCu;
        goto label_3d4fcc;
    }
    ctx->pc = 0x3D4FC4u;
    SET_GPR_U32(ctx, 31, 0x3D4FCCu);
    ctx->pc = 0x3D4FC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D4FC4u;
    // 0x3d4fc8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3D4FC4u, 0x3D4FCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D4FCCu;
label_3d4fcc:
    // 0x3d4fcc: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3d4fccu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3d4fd0:
    // 0x3d4fd0: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3d4fd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3d4fd4:
    // 0x3d4fd4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3d4fd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3d4fd8:
    // 0x3d4fd8: 0xc0ea12a  jal         func_3A84A8
label_3d4fdc:
    if (ctx->pc == 0x3D4FDCu) {
        ctx->pc = 0x3D4FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4FD8u;
        // 0x3d4fdc: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D4FE0u;
        goto label_3d4fe0;
    }
    ctx->pc = 0x3D4FD8u;
    SET_GPR_U32(ctx, 31, 0x3D4FE0u);
    ctx->pc = 0x3D4FDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D4FD8u;
    // 0x3d4fdc: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3D4FD8u, 0x3D4FE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D4FE0u;
label_3d4fe0:
    // 0x3d4fe0: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3d4fe0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3d4fe4:
    // 0x3d4fe4: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x3d4fe4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_3d4fe8:
    // 0x3d4fe8: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x3d4fe8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_3d4fec:
    // 0x3d4fec: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x3d4fecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_3d4ff0:
    // 0x3d4ff0: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x3d4ff0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_3d4ff4:
    // 0x3d4ff4: 0x26104558  addiu       $s0, $s0, 0x4558
    ctx->pc = 0x3d4ff4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 17752));
label_3d4ff8:
    // 0x3d4ff8: 0xc0cd4ee  jal         func_3353B8
label_3d4ffc:
    if (ctx->pc == 0x3D4FFCu) {
        ctx->pc = 0x3D4FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4FF8u;
        // 0x3d4ffc: 0x2484b8b8  addiu       $a0, $a0, -0x4748 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949048));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D5000u;
        goto label_3d5000;
    }
    ctx->pc = 0x3D4FF8u;
    SET_GPR_U32(ctx, 31, 0x3D5000u);
    ctx->pc = 0x3D4FFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D4FF8u;
    // 0x3d4ffc: 0x2484b8b8  addiu       $a0, $a0, -0x4748 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949048));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x3D4FF8u, 0x3D5000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D5000u;
label_3d5000:
    // 0x3d5000: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3d5000u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_3d5004:
    // 0x3d5004: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3d5004u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3d5008:
    // 0x3d5008: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x3d5008u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_3d500c:
    // 0x3d500c: 0xc0e896e  jal         func_3A25B8
label_3d5010:
    if (ctx->pc == 0x3D5010u) {
        ctx->pc = 0x3D5010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D500Cu;
        // 0x3d5010: 0x8c540000  lw          $s4, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D5014u;
        goto label_3d5014;
    }
    ctx->pc = 0x3D500Cu;
    SET_GPR_U32(ctx, 31, 0x3D5014u);
    ctx->pc = 0x3D5010u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D500Cu;
    // 0x3d5010: 0x8c540000  lw          $s4, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A25B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A25B8u, 0x3D500Cu, 0x3D5014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D5014u;
label_3d5014:
    // 0x3d5014: 0xae620058  sw          $v0, 0x58($s3)
    ctx->pc = 0x3d5014u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 88), GPR_U32(ctx, 2));
label_3d5018:
    // 0x3d5018: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3d5018u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3d501c:
    // 0x3d501c: 0xc0e896c  jal         func_3A25B0
label_3d5020:
    if (ctx->pc == 0x3D5020u) {
        ctx->pc = 0x3D5020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D501Cu;
        // 0x3d5020: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D5024u;
        goto label_3d5024;
    }
    ctx->pc = 0x3D501Cu;
    SET_GPR_U32(ctx, 31, 0x3D5024u);
    ctx->pc = 0x3D5020u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D501Cu;
    // 0x3d5020: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A25B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A25B0u, 0x3D501Cu, 0x3D5024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D5024u;
label_3d5024:
    // 0x3d5024: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x3d5024u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_3d5028:
    // 0x3d5028: 0x27b50020  addiu       $s5, $sp, 0x20
    ctx->pc = 0x3d5028u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3d502c:
    // 0x3d502c: 0x244216c0  addiu       $v0, $v0, 0x16C0
    ctx->pc = 0x3d502cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5824));
label_3d5030:
    // 0x3d5030: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3d5030u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3d5034:
    // 0x3d5034: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x3d5034u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_3d5038:
    // 0x3d5038: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x3d5038u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3d503c:
    // 0x3d503c: 0xc0e90ca  jal         func_3A4328
label_3d5040:
    if (ctx->pc == 0x3D5040u) {
        ctx->pc = 0x3D5040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D503Cu;
        // 0x3d5040: 0x7e630010  sq          $v1, 0x10($s3) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 19), 16), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D5044u;
        goto label_3d5044;
    }
    ctx->pc = 0x3D503Cu;
    SET_GPR_U32(ctx, 31, 0x3D5044u);
    ctx->pc = 0x3D5040u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D503Cu;
    // 0x3d5040: 0x7e630010  sq          $v1, 0x10($s3) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 19), 16), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4328u, 0x3D503Cu, 0x3D5044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D5044u;
label_3d5044:
    // 0x3d5044: 0x7ba60020  lq          $a2, 0x20($sp)
    ctx->pc = 0x3d5044u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3d5048:
    // 0x3d5048: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x3d5048u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_3d504c:
    // 0x3d504c: 0x8c43489c  lw          $v1, 0x489C($v0)
    ctx->pc = 0x3d504cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
label_3d5050:
    // 0x3d5050: 0xae400014  sw          $zero, 0x14($s2)
    ctx->pc = 0x3d5050u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 0));
label_3d5054:
    // 0x3d5054: 0x7e460000  sq          $a2, 0x0($s2)
    ctx->pc = 0x3d5054u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), GPR_VEC(ctx, 6));
label_3d5058:
    // 0x3d5058: 0x84620454  lh          $v0, 0x454($v1)
    ctx->pc = 0x3d5058u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 1108)));
label_3d505c:
    // 0x3d505c: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
label_3d5060:
    if (ctx->pc == 0x3D5060u) {
        ctx->pc = 0x3D5060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D505Cu;
        // 0x3d5060: 0x7bb004c0  lq          $s0, 0x4C0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D5064u;
        goto label_3d5064;
    }
    ctx->pc = 0x3D505Cu;
    {
        const bool branch_taken_0x3d505c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D5060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D505Cu;
        // 0x3d5060: 0x7bb004c0  lq          $s0, 0x4C0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1216)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d505c) {
            ctx->pc = 0x3D50A4u;
            goto label_3d50a4;
        }
    }
    ctx->pc = 0x3D5064u;
label_3d5064:
    // 0x3d5064: 0x8e620058  lw          $v0, 0x58($s3)
    ctx->pc = 0x3d5064u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
label_3d5068:
    // 0x3d5068: 0x27b10030  addiu       $s1, $sp, 0x30
    ctx->pc = 0x3d5068u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_3d506c:
    // 0x3d506c: 0x7fa60020  sq          $a2, 0x20($sp)
    ctx->pc = 0x3d506cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 6));
label_3d5070:
    // 0x3d5070: 0x3c100058  lui         $s0, 0x58
    ctx->pc = 0x3d5070u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
label_3d5074:
    // 0x3d5074: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x3d5074u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3d5078:
    // 0x3d5078: 0x26104f08  addiu       $s0, $s0, 0x4F08
    ctx->pc = 0x3d5078u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 20232));
label_3d507c:
    // 0x3d507c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3d507cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3d5080:
    // 0x3d5080: 0xafa20440  sw          $v0, 0x440($sp)
    ctx->pc = 0x3d5080u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1088), GPR_U32(ctx, 2));
label_3d5084:
    // 0x3d5084: 0xafb40450  sw          $s4, 0x450($sp)
    ctx->pc = 0x3d5084u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1104), GPR_U32(ctx, 20));
label_3d5088:
    // 0x3d5088: 0x27a60440  addiu       $a2, $sp, 0x440
    ctx->pc = 0x3d5088u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1088));
label_3d508c:
    // 0x3d508c: 0xc0e9fa6  jal         func_3A7E98
label_3d5090:
    if (ctx->pc == 0x3D5090u) {
        ctx->pc = 0x3D5090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D508Cu;
        // 0x3d5090: 0x27a70450  addiu       $a3, $sp, 0x450 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 1104));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D5094u;
        goto label_3d5094;
    }
    ctx->pc = 0x3D508Cu;
    SET_GPR_U32(ctx, 31, 0x3D5094u);
    ctx->pc = 0x3D5090u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D508Cu;
    // 0x3d5090: 0x27a70450  addiu       $a3, $sp, 0x450 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 1104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7E98u, 0x3D508Cu, 0x3D5094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D5094u;
label_3d5094:
    // 0x3d5094: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3d5094u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3d5098:
    // 0x3d5098: 0xc0f15bc  jal         func_3C56F0
label_3d509c:
    if (ctx->pc == 0x3D509Cu) {
        ctx->pc = 0x3D509Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5098u;
        // 0x3d509c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D50A0u;
        goto label_3d50a0;
    }
    ctx->pc = 0x3D5098u;
    SET_GPR_U32(ctx, 31, 0x3D50A0u);
    ctx->pc = 0x3D509Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D5098u;
    // 0x3d509c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C56F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C56F0u, 0x3D5098u, 0x3D50A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D50A0u;
label_3d50a0:
    // 0x3d50a0: 0x7bb004c0  lq          $s0, 0x4C0($sp)
    ctx->pc = 0x3d50a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1216)));
label_3d50a4:
    // 0x3d50a4: 0x7bb104b0  lq          $s1, 0x4B0($sp)
    ctx->pc = 0x3d50a4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 1200)));
label_3d50a8:
    // 0x3d50a8: 0x7bb204a0  lq          $s2, 0x4A0($sp)
    ctx->pc = 0x3d50a8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 1184)));
label_3d50ac:
    // 0x3d50ac: 0x7bb30490  lq          $s3, 0x490($sp)
    ctx->pc = 0x3d50acu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 1168)));
label_3d50b0:
    // 0x3d50b0: 0x7bb40480  lq          $s4, 0x480($sp)
    ctx->pc = 0x3d50b0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 1152)));
label_3d50b4:
    // 0x3d50b4: 0x7bb50470  lq          $s5, 0x470($sp)
    ctx->pc = 0x3d50b4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 1136)));
label_3d50b8:
    // 0x3d50b8: 0xdfbf0460  ld          $ra, 0x460($sp)
    ctx->pc = 0x3d50b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 1120)));
label_3d50bc:
    // 0x3d50bc: 0x3e00008  jr          $ra
label_3d50c0:
    if (ctx->pc == 0x3D50C0u) {
        ctx->pc = 0x3D50C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D50BCu;
        // 0x3d50c0: 0x27bd04d0  addiu       $sp, $sp, 0x4D0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1232));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D50C4u;
        goto label_3d50c4;
    }
    ctx->pc = 0x3D50BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D50C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D50BCu;
        // 0x3d50c0: 0x27bd04d0  addiu       $sp, $sp, 0x4D0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1232));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D50BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D50C4u;
label_3d50c4:
    // 0x3d50c4: 0x0  nop
    ctx->pc = 0x3d50c4u;
    // NOP
    ctx->pc = 0x3d50c8u;
}
