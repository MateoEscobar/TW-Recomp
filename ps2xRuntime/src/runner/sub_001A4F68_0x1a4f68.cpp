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

// Function: sub_001A4F68
// Address: 0x1a4f68 - 0x1a5070
void sub_001A4F68_0x1a4f68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A4F68_0x1a4f68");
#endif

    switch (ctx->pc) {
        case 0x1a4f68u: goto label_1a4f68;
        case 0x1a4f6cu: goto label_1a4f6c;
        case 0x1a4f70u: goto label_1a4f70;
        case 0x1a4f74u: goto label_1a4f74;
        case 0x1a4f78u: goto label_1a4f78;
        case 0x1a4f7cu: goto label_1a4f7c;
        case 0x1a4f80u: goto label_1a4f80;
        case 0x1a4f84u: goto label_1a4f84;
        case 0x1a4f88u: goto label_1a4f88;
        case 0x1a4f8cu: goto label_1a4f8c;
        case 0x1a4f90u: goto label_1a4f90;
        case 0x1a4f94u: goto label_1a4f94;
        case 0x1a4f98u: goto label_1a4f98;
        case 0x1a4f9cu: goto label_1a4f9c;
        case 0x1a4fa0u: goto label_1a4fa0;
        case 0x1a4fa4u: goto label_1a4fa4;
        case 0x1a4fa8u: goto label_1a4fa8;
        case 0x1a4facu: goto label_1a4fac;
        case 0x1a4fb0u: goto label_1a4fb0;
        case 0x1a4fb4u: goto label_1a4fb4;
        case 0x1a4fb8u: goto label_1a4fb8;
        case 0x1a4fbcu: goto label_1a4fbc;
        case 0x1a4fc0u: goto label_1a4fc0;
        case 0x1a4fc4u: goto label_1a4fc4;
        case 0x1a4fc8u: goto label_1a4fc8;
        case 0x1a4fccu: goto label_1a4fcc;
        case 0x1a4fd0u: goto label_1a4fd0;
        case 0x1a4fd4u: goto label_1a4fd4;
        case 0x1a4fd8u: goto label_1a4fd8;
        case 0x1a4fdcu: goto label_1a4fdc;
        case 0x1a4fe0u: goto label_1a4fe0;
        case 0x1a4fe4u: goto label_1a4fe4;
        case 0x1a4fe8u: goto label_1a4fe8;
        case 0x1a4fecu: goto label_1a4fec;
        case 0x1a4ff0u: goto label_1a4ff0;
        case 0x1a4ff4u: goto label_1a4ff4;
        case 0x1a4ff8u: goto label_1a4ff8;
        case 0x1a4ffcu: goto label_1a4ffc;
        case 0x1a5000u: goto label_1a5000;
        case 0x1a5004u: goto label_1a5004;
        case 0x1a5008u: goto label_1a5008;
        case 0x1a500cu: goto label_1a500c;
        case 0x1a5010u: goto label_1a5010;
        case 0x1a5014u: goto label_1a5014;
        case 0x1a5018u: goto label_1a5018;
        case 0x1a501cu: goto label_1a501c;
        case 0x1a5020u: goto label_1a5020;
        case 0x1a5024u: goto label_1a5024;
        case 0x1a5028u: goto label_1a5028;
        case 0x1a502cu: goto label_1a502c;
        case 0x1a5030u: goto label_1a5030;
        case 0x1a5034u: goto label_1a5034;
        case 0x1a5038u: goto label_1a5038;
        case 0x1a503cu: goto label_1a503c;
        case 0x1a5040u: goto label_1a5040;
        case 0x1a5044u: goto label_1a5044;
        case 0x1a5048u: goto label_1a5048;
        case 0x1a504cu: goto label_1a504c;
        case 0x1a5050u: goto label_1a5050;
        case 0x1a5054u: goto label_1a5054;
        case 0x1a5058u: goto label_1a5058;
        case 0x1a505cu: goto label_1a505c;
        case 0x1a5060u: goto label_1a5060;
        case 0x1a5064u: goto label_1a5064;
        case 0x1a5068u: goto label_1a5068;
        case 0x1a506cu: goto label_1a506c;
        default: break;
    }

    ctx->pc = 0x1a4f68u;

label_1a4f68:
    // 0x1a4f68: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x1a4f68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_1a4f6c:
    // 0x1a4f6c: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x1a4f6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
label_1a4f70:
    // 0x1a4f70: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x1a4f70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
label_1a4f74:
    // 0x1a4f74: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1a4f74u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1a4f78:
    // 0x1a4f78: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x1a4f78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
label_1a4f7c:
    // 0x1a4f7c: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x1a4f7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_1a4f80:
    // 0x1a4f80: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1a4f80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_1a4f84:
    // 0x1a4f84: 0x8e430350  lw          $v1, 0x350($s2)
    ctx->pc = 0x1a4f84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 848)));
label_1a4f88:
    // 0x1a4f88: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1a4f88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_1a4f8c:
    // 0x1a4f8c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1a4f8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1a4f90:
    // 0x1a4f90: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x1a4f90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
label_1a4f94:
    // 0x1a4f94: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1a4f94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_1a4f98:
    // 0x1a4f98: 0x1082002d  beq         $a0, $v0, . + 4 + (0x2D << 2)
label_1a4f9c:
    if (ctx->pc == 0x1A4F9Cu) {
        ctx->pc = 0x1A4F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4F98u;
        // 0x1a4f9c: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4FA0u;
        goto label_1a4fa0;
    }
    ctx->pc = 0x1A4F98u;
    {
        const bool branch_taken_0x1a4f98 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x1A4F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4F98u;
        // 0x1a4f9c: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4f98) {
            ctx->pc = 0x1A5050u;
            goto label_1a5050;
        }
    }
    ctx->pc = 0x1A4FA0u;
label_1a4fa0:
    // 0x1a4fa0: 0x3c08006f  lui         $t0, 0x6F
    ctx->pc = 0x1a4fa0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)111 << 16));
label_1a4fa4:
    // 0x1a4fa4: 0x3c060055  lui         $a2, 0x55
    ctx->pc = 0x1a4fa4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)85 << 16));
label_1a4fa8:
    // 0x1a4fa8: 0x3c130055  lui         $s3, 0x55
    ctx->pc = 0x1a4fa8u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)85 << 16));
label_1a4fac:
    // 0x1a4fac: 0x0  nop
    ctx->pc = 0x1a4facu;
    // NOP
label_1a4fb0:
    // 0x1a4fb0: 0x8fa70000  lw          $a3, 0x0($sp)
    ctx->pc = 0x1a4fb0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_1a4fb4:
    // 0x1a4fb4: 0x8cf10008  lw          $s1, 0x8($a3)
    ctx->pc = 0x1a4fb4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
label_1a4fb8:
    // 0x1a4fb8: 0x8e220068  lw          $v0, 0x68($s1)
    ctx->pc = 0x1a4fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
label_1a4fbc:
    // 0x1a4fbc: 0x5445001d  bnel        $v0, $a1, . + 4 + (0x1D << 2)
label_1a4fc0:
    if (ctx->pc == 0x1A4FC0u) {
        ctx->pc = 0x1A4FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4FBCu;
        // 0x1a4fc0: 0xafa70030  sw          $a3, 0x30($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4FC4u;
        goto label_1a4fc4;
    }
    ctx->pc = 0x1A4FBCu;
    {
        const bool branch_taken_0x1a4fbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x1a4fbc) {
            ctx->pc = 0x1A4FC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A4FBCu;
            // 0x1a4fc0: 0xafa70030  sw          $a3, 0x30($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 7));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A5034u;
            goto label_1a5034;
        }
    }
    ctx->pc = 0x1A4FC4u;
label_1a4fc4:
    // 0x1a4fc4: 0xafa70020  sw          $a3, 0x20($sp)
    ctx->pc = 0x1a4fc4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 7));
label_1a4fc8:
    // 0x1a4fc8: 0x8cf00000  lw          $s0, 0x0($a3)
    ctx->pc = 0x1a4fc8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_1a4fcc:
    // 0x1a4fcc: 0x8ce20004  lw          $v0, 0x4($a3)
    ctx->pc = 0x1a4fccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
label_1a4fd0:
    // 0x1a4fd0: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x1a4fd0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
label_1a4fd4:
    // 0x1a4fd4: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x1a4fd4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_1a4fd8:
    // 0x1a4fd8: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x1a4fd8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_1a4fdc:
    // 0x1a4fdc: 0x10a00008  beqz        $a1, . + 4 + (0x8 << 2)
label_1a4fe0:
    if (ctx->pc == 0x1A4FE0u) {
        ctx->pc = 0x1A4FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4FDCu;
        // 0x1a4fe0: 0x8d08b9c0  lw          $t0, -0x4640($t0) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4294949312)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4FE4u;
        goto label_1a4fe4;
    }
    ctx->pc = 0x1A4FDCu;
    {
        const bool branch_taken_0x1a4fdc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A4FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4FDCu;
        // 0x1a4fe0: 0x8d08b9c0  lw          $t0, -0x4640($t0) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4294949312)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4fdc) {
            ctx->pc = 0x1A5000u;
            goto label_1a5000;
        }
    }
    ctx->pc = 0x1A4FE4u;
label_1a4fe4:
    // 0x1a4fe4: 0x24c63ee0  addiu       $a2, $a2, 0x3EE0
    ctx->pc = 0x1a4fe4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16096));
label_1a4fe8:
    // 0x1a4fe8: 0x24070054  addiu       $a3, $zero, 0x54
    ctx->pc = 0x1a4fe8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
label_1a4fec:
    // 0x1a4fec: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x1a4fecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_1a4ff0:
    // 0x1a4ff0: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x1a4ff0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_1a4ff4:
    // 0x1a4ff4: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x1a4ff4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_1a4ff8:
    // 0x1a4ff8: 0x60f809  jalr        $v1
label_1a4ffc:
    if (ctx->pc == 0x1A4FFCu) {
        ctx->pc = 0x1A4FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4FF8u;
        // 0x1a4ffc: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5000u;
        goto label_1a5000;
    }
    ctx->pc = 0x1A4FF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1A5000u);
        ctx->pc = 0x1A4FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4FF8u;
        // 0x1a4ffc: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A4FF8u, 0x1A5000u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A5000u;
label_1a5000:
    // 0x1a5000: 0xafb00010  sw          $s0, 0x10($sp)
    ctx->pc = 0x1a5000u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 16));
label_1a5004:
    // 0x1a5004: 0x26653ea0  addiu       $a1, $s3, 0x3EA0
    ctx->pc = 0x1a5004u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 16032));
label_1a5008:
    // 0x1a5008: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a5008u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a500c:
    // 0x1a500c: 0xc139068  jal         func_4E41A0
label_1a5010:
    if (ctx->pc == 0x1A5010u) {
        ctx->pc = 0x1A5010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A500Cu;
        // 0x1a5010: 0x2406015f  addiu       $a2, $zero, 0x15F (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 351));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5014u;
        goto label_1a5014;
    }
    ctx->pc = 0x1A500Cu;
    SET_GPR_U32(ctx, 31, 0x1A5014u);
    ctx->pc = 0x1A5010u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A500Cu;
    // 0x1a5010: 0x2406015f  addiu       $a2, $zero, 0x15F (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 351));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E41A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E41A0u, 0x1A500Cu, 0x1A5014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5014u;
label_1a5014:
    // 0x1a5014: 0x8e2201f0  lw          $v0, 0x1F0($s1)
    ctx->pc = 0x1a5014u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 496)));
label_1a5018:
    // 0x1a5018: 0x5440000e  bnel        $v0, $zero, . + 4 + (0xE << 2)
label_1a501c:
    if (ctx->pc == 0x1A501Cu) {
        ctx->pc = 0x1A501Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5018u;
        // 0x1a501c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5020u;
        goto label_1a5020;
    }
    ctx->pc = 0x1A5018u;
    {
        const bool branch_taken_0x1a5018 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a5018) {
            ctx->pc = 0x1A501Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A5018u;
            // 0x1a501c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A5054u;
            goto label_1a5054;
        }
    }
    ctx->pc = 0x1A5020u;
label_1a5020:
    // 0x1a5020: 0x8e420158  lw          $v0, 0x158($s2)
    ctx->pc = 0x1a5020u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 344)));
label_1a5024:
    // 0x1a5024: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1a5024u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1a5028:
    // 0x1a5028: 0xae420158  sw          $v0, 0x158($s2)
    ctx->pc = 0x1a5028u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 344), GPR_U32(ctx, 2));
label_1a502c:
    // 0x1a502c: 0x10000009  b           . + 4 + (0x9 << 2)
label_1a5030:
    if (ctx->pc == 0x1A5030u) {
        ctx->pc = 0x1A5030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A502Cu;
        // 0x1a5030: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5034u;
        goto label_1a5034;
    }
    ctx->pc = 0x1A502Cu;
    {
        const bool branch_taken_0x1a502c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A502Cu;
        // 0x1a5030: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a502c) {
            ctx->pc = 0x1A5054u;
            goto label_1a5054;
        }
    }
    ctx->pc = 0x1A5034u;
label_1a5034:
    // 0x1a5034: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x1a5034u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_1a5038:
    // 0x1a5038: 0x8e440350  lw          $a0, 0x350($s2)
    ctx->pc = 0x1a5038u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 848)));
label_1a503c:
    // 0x1a503c: 0xafa70010  sw          $a3, 0x10($sp)
    ctx->pc = 0x1a503cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 7));
label_1a5040:
    // 0x1a5040: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x1a5040u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
label_1a5044:
    // 0x1a5044: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x1a5044u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_1a5048:
    // 0x1a5048: 0x1462ffd9  bne         $v1, $v0, . + 4 + (-0x27 << 2)
label_1a504c:
    if (ctx->pc == 0x1A504Cu) {
        ctx->pc = 0x1A504Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5048u;
        // 0x1a504c: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5050u;
        goto label_1a5050;
    }
    ctx->pc = 0x1A5048u;
    {
        const bool branch_taken_0x1a5048 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1A504Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5048u;
        // 0x1a504c: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5048) {
            ctx->pc = 0x1A4FB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a4fb0;
        }
    }
    ctx->pc = 0x1A5050u;
label_1a5050:
    // 0x1a5050: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1a5050u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a5054:
    // 0x1a5054: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x1a5054u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_1a5058:
    // 0x1a5058: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x1a5058u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1a505c:
    // 0x1a505c: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x1a505cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1a5060:
    // 0x1a5060: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x1a5060u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1a5064:
    // 0x1a5064: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1a5064u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1a5068:
    // 0x1a5068: 0x3e00008  jr          $ra
label_1a506c:
    if (ctx->pc == 0x1A506Cu) {
        ctx->pc = 0x1A506Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5068u;
        // 0x1a506c: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5070u;
        goto label_fallthrough_0x1a5068;
    }
    ctx->pc = 0x1A5068u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A506Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5068u;
        // 0x1a506c: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A5068u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1a5068:
    ctx->pc = 0x1A5070u;
}
