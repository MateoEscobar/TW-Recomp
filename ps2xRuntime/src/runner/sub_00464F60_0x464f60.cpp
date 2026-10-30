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

// Function: sub_00464F60
// Address: 0x464f60 - 0x4650c8
void sub_00464F60_0x464f60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00464F60_0x464f60");
#endif

    switch (ctx->pc) {
        case 0x464f60u: goto label_464f60;
        case 0x464f64u: goto label_464f64;
        case 0x464f68u: goto label_464f68;
        case 0x464f6cu: goto label_464f6c;
        case 0x464f70u: goto label_464f70;
        case 0x464f74u: goto label_464f74;
        case 0x464f78u: goto label_464f78;
        case 0x464f7cu: goto label_464f7c;
        case 0x464f80u: goto label_464f80;
        case 0x464f84u: goto label_464f84;
        case 0x464f88u: goto label_464f88;
        case 0x464f8cu: goto label_464f8c;
        case 0x464f90u: goto label_464f90;
        case 0x464f94u: goto label_464f94;
        case 0x464f98u: goto label_464f98;
        case 0x464f9cu: goto label_464f9c;
        case 0x464fa0u: goto label_464fa0;
        case 0x464fa4u: goto label_464fa4;
        case 0x464fa8u: goto label_464fa8;
        case 0x464facu: goto label_464fac;
        case 0x464fb0u: goto label_464fb0;
        case 0x464fb4u: goto label_464fb4;
        case 0x464fb8u: goto label_464fb8;
        case 0x464fbcu: goto label_464fbc;
        case 0x464fc0u: goto label_464fc0;
        case 0x464fc4u: goto label_464fc4;
        case 0x464fc8u: goto label_464fc8;
        case 0x464fccu: goto label_464fcc;
        case 0x464fd0u: goto label_464fd0;
        case 0x464fd4u: goto label_464fd4;
        case 0x464fd8u: goto label_464fd8;
        case 0x464fdcu: goto label_464fdc;
        case 0x464fe0u: goto label_464fe0;
        case 0x464fe4u: goto label_464fe4;
        case 0x464fe8u: goto label_464fe8;
        case 0x464fecu: goto label_464fec;
        case 0x464ff0u: goto label_464ff0;
        case 0x464ff4u: goto label_464ff4;
        case 0x464ff8u: goto label_464ff8;
        case 0x464ffcu: goto label_464ffc;
        case 0x465000u: goto label_465000;
        case 0x465004u: goto label_465004;
        case 0x465008u: goto label_465008;
        case 0x46500cu: goto label_46500c;
        case 0x465010u: goto label_465010;
        case 0x465014u: goto label_465014;
        case 0x465018u: goto label_465018;
        case 0x46501cu: goto label_46501c;
        case 0x465020u: goto label_465020;
        case 0x465024u: goto label_465024;
        case 0x465028u: goto label_465028;
        case 0x46502cu: goto label_46502c;
        case 0x465030u: goto label_465030;
        case 0x465034u: goto label_465034;
        case 0x465038u: goto label_465038;
        case 0x46503cu: goto label_46503c;
        case 0x465040u: goto label_465040;
        case 0x465044u: goto label_465044;
        case 0x465048u: goto label_465048;
        case 0x46504cu: goto label_46504c;
        case 0x465050u: goto label_465050;
        case 0x465054u: goto label_465054;
        case 0x465058u: goto label_465058;
        case 0x46505cu: goto label_46505c;
        case 0x465060u: goto label_465060;
        case 0x465064u: goto label_465064;
        case 0x465068u: goto label_465068;
        case 0x46506cu: goto label_46506c;
        case 0x465070u: goto label_465070;
        case 0x465074u: goto label_465074;
        case 0x465078u: goto label_465078;
        case 0x46507cu: goto label_46507c;
        case 0x465080u: goto label_465080;
        case 0x465084u: goto label_465084;
        case 0x465088u: goto label_465088;
        case 0x46508cu: goto label_46508c;
        case 0x465090u: goto label_465090;
        case 0x465094u: goto label_465094;
        case 0x465098u: goto label_465098;
        case 0x46509cu: goto label_46509c;
        case 0x4650a0u: goto label_4650a0;
        case 0x4650a4u: goto label_4650a4;
        case 0x4650a8u: goto label_4650a8;
        case 0x4650acu: goto label_4650ac;
        case 0x4650b0u: goto label_4650b0;
        case 0x4650b4u: goto label_4650b4;
        case 0x4650b8u: goto label_4650b8;
        case 0x4650bcu: goto label_4650bc;
        case 0x4650c0u: goto label_4650c0;
        case 0x4650c4u: goto label_4650c4;
        default: break;
    }

    ctx->pc = 0x464f60u;

label_464f60:
    // 0x464f60: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x464f60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_464f64:
    // 0x464f64: 0x8f828490  lw          $v0, -0x7B70($gp)
    ctx->pc = 0x464f64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935696)));
label_464f68:
    // 0x464f68: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x464f68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_464f6c:
    // 0x464f6c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x464f6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_464f70:
    // 0x464f70: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x464f70u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_464f74:
    // 0x464f74: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x464f74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_464f78:
    // 0x464f78: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x464f78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_464f7c:
    // 0x464f7c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x464f7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_464f80:
    // 0x464f80: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x464f80u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_464f84:
    // 0x464f84: 0x16000013  bnez        $s0, . + 4 + (0x13 << 2)
label_464f88:
    if (ctx->pc == 0x464F88u) {
        ctx->pc = 0x464F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x464F84u;
        // 0x464f88: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x464F8Cu;
        goto label_464f8c;
    }
    ctx->pc = 0x464F84u;
    {
        const bool branch_taken_0x464f84 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x464F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x464F84u;
        // 0x464f88: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x464f84) {
            ctx->pc = 0x464FD4u;
            goto label_464fd4;
        }
    }
    ctx->pc = 0x464F8Cu;
label_464f8c:
    // 0x464f8c: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x464f8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
label_464f90:
    // 0x464f90: 0x3c060053  lui         $a2, 0x53
    ctx->pc = 0x464f90u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)83 << 16));
label_464f94:
    // 0x464f94: 0x8c62ae30  lw          $v0, -0x51D0($v1)
    ctx->pc = 0x464f94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294946352)));
label_464f98:
    // 0x464f98: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x464f98u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_464f9c:
    // 0x464f9c: 0x8cc4e618  lw          $a0, -0x19E8($a2)
    ctx->pc = 0x464f9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294960664)));
label_464fa0:
    // 0x464fa0: 0x40f809  jalr        $v0
label_464fa4:
    if (ctx->pc == 0x464FA4u) {
        ctx->pc = 0x464FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x464FA0u;
        // 0x464fa4: 0x34a50120  ori         $a1, $a1, 0x120 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)288);
        ctx->in_delay_slot = false;
        ctx->pc = 0x464FA8u;
        goto label_464fa8;
    }
    ctx->pc = 0x464FA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x464FA8u);
        ctx->pc = 0x464FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x464FA0u;
        // 0x464fa4: 0x34a50120  ori         $a1, $a1, 0x120 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)288);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x464FA0u, 0x464FA8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x464FA8u;
label_464fa8:
    // 0x464fa8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x464fa8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_464fac:
    // 0x464fac: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
label_464fb0:
    if (ctx->pc == 0x464FB0u) {
        ctx->pc = 0x464FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x464FACu;
        // 0x464fb0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x464FB4u;
        goto label_464fb4;
    }
    ctx->pc = 0x464FACu;
    {
        const bool branch_taken_0x464fac = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x464FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x464FACu;
        // 0x464fb0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x464fac) {
            ctx->pc = 0x464FBCu;
            goto label_464fbc;
        }
    }
    ctx->pc = 0x464FB4u;
label_464fb4:
    // 0x464fb4: 0x10000007  b           . + 4 + (0x7 << 2)
label_464fb8:
    if (ctx->pc == 0x464FB8u) {
        ctx->pc = 0x464FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x464FB4u;
        // 0x464fb8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x464FBCu;
        goto label_464fbc;
    }
    ctx->pc = 0x464FB4u;
    {
        const bool branch_taken_0x464fb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x464FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x464FB4u;
        // 0x464fb8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x464fb4) {
            ctx->pc = 0x464FD4u;
            goto label_464fd4;
        }
    }
    ctx->pc = 0x464FBCu;
label_464fbc:
    // 0x464fbc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x464fbcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_464fc0:
    // 0x464fc0: 0xc10c1fa  jal         func_4307E8
label_464fc4:
    if (ctx->pc == 0x464FC4u) {
        ctx->pc = 0x464FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x464FC0u;
        // 0x464fc4: 0x24060090  addiu       $a2, $zero, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x464FC8u;
        goto label_464fc8;
    }
    ctx->pc = 0x464FC0u;
    SET_GPR_U32(ctx, 31, 0x464FC8u);
    ctx->pc = 0x464FC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x464FC0u;
    // 0x464fc4: 0x24060090  addiu       $a2, $zero, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4307E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4307E8u, 0x464FC0u, 0x464FC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x464FC8u;
label_464fc8:
    // 0x464fc8: 0x8f838490  lw          $v1, -0x7B70($gp)
    ctx->pc = 0x464fc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935696)));
label_464fcc:
    // 0x464fcc: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x464fccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
label_464fd0:
    // 0x464fd0: 0xac700000  sw          $s0, 0x0($v1)
    ctx->pc = 0x464fd0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 16));
label_464fd4:
    // 0x464fd4: 0x12000035  beqz        $s0, . + 4 + (0x35 << 2)
label_464fd8:
    if (ctx->pc == 0x464FD8u) {
        ctx->pc = 0x464FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x464FD4u;
        // 0x464fd8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x464FDCu;
        goto label_464fdc;
    }
    ctx->pc = 0x464FD4u;
    {
        const bool branch_taken_0x464fd4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x464FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x464FD4u;
        // 0x464fd8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x464fd4) {
            ctx->pc = 0x4650ACu;
            goto label_4650ac;
        }
    }
    ctx->pc = 0x464FDCu;
label_464fdc:
    // 0x464fdc: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
label_464fe0:
    if (ctx->pc == 0x464FE0u) {
        ctx->pc = 0x464FE4u;
        goto label_464fe4;
    }
    ctx->pc = 0x464FDCu;
    {
        const bool branch_taken_0x464fdc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x464fdc) {
            ctx->pc = 0x464FF8u;
            goto label_464ff8;
        }
    }
    ctx->pc = 0x464FE4u;
label_464fe4:
    // 0x464fe4: 0x8e020080  lw          $v0, 0x80($s0)
    ctx->pc = 0x464fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
label_464fe8:
    // 0x464fe8: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
label_464fec:
    if (ctx->pc == 0x464FECu) {
        ctx->pc = 0x464FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x464FE8u;
        // 0x464fec: 0x2e220007  sltiu       $v0, $s1, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x464FF0u;
        goto label_464ff0;
    }
    ctx->pc = 0x464FE8u;
    {
        const bool branch_taken_0x464fe8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x464fe8) {
            ctx->pc = 0x464FECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x464FE8u;
            // 0x464fec: 0x2e220007  sltiu       $v0, $s1, 0x7 (Delay Slot)
            SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x465004u;
            goto label_465004;
        }
    }
    ctx->pc = 0x464FF0u;
label_464ff0:
    // 0x464ff0: 0x10510004  beq         $v0, $s1, . + 4 + (0x4 << 2)
label_464ff4:
    if (ctx->pc == 0x464FF4u) {
        ctx->pc = 0x464FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x464FF0u;
        // 0x464ff4: 0x2e220007  sltiu       $v0, $s1, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x464FF8u;
        goto label_464ff8;
    }
    ctx->pc = 0x464FF0u;
    {
        const bool branch_taken_0x464ff0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x464FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x464FF0u;
        // 0x464ff4: 0x2e220007  sltiu       $v0, $s1, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x464ff0) {
            ctx->pc = 0x465004u;
            goto label_465004;
        }
    }
    ctx->pc = 0x464FF8u;
label_464ff8:
    // 0x464ff8: 0xc118fa4  jal         func_463E90
label_464ffc:
    if (ctx->pc == 0x464FFCu) {
        ctx->pc = 0x464FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x464FF8u;
        // 0x464ffc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x465000u;
        goto label_465000;
    }
    ctx->pc = 0x464FF8u;
    SET_GPR_U32(ctx, 31, 0x465000u);
    ctx->pc = 0x464FFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x464FF8u;
    // 0x464ffc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x463E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x463E90u, 0x464FF8u, 0x465000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x465000u;
label_465000:
    // 0x465000: 0x2e220007  sltiu       $v0, $s1, 0x7
    ctx->pc = 0x465000u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
label_465004:
    // 0x465004: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
label_465008:
    if (ctx->pc == 0x465008u) {
        ctx->pc = 0x465008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x465004u;
        // 0x465008: 0xae110080  sw          $s1, 0x80($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46500Cu;
        goto label_46500c;
    }
    ctx->pc = 0x465004u;
    {
        const bool branch_taken_0x465004 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x465008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x465004u;
        // 0x465008: 0xae110080  sw          $s1, 0x80($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x465004) {
            ctx->pc = 0x4650A0u;
            goto label_4650a0;
        }
    }
    ctx->pc = 0x46500Cu;
label_46500c:
    // 0x46500c: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x46500cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
label_465010:
    // 0x465010: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x465010u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_465014:
    // 0x465014: 0x2442e8e0  addiu       $v0, $v0, -0x1720
    ctx->pc = 0x465014u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961376));
label_465018:
    // 0x465018: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x465018u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_46501c:
    // 0x46501c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x46501cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_465020:
    // 0x465020: 0x800008  jr          $a0
label_465024:
    if (ctx->pc == 0x465024u) {
        ctx->pc = 0x465028u;
        goto label_465028;
    }
    ctx->pc = 0x465020u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x465028u: goto label_465028;
            case 0x465034u: goto label_465034;
            case 0x465040u: goto label_465040;
            case 0x465054u: goto label_465054;
            case 0x465074u: goto label_465074;
            case 0x465080u: goto label_465080;
            case 0x4650A0u: goto label_4650a0;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x465020u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x465028u;
label_465028:
    // 0x465028: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x465028u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_46502c:
    // 0x46502c: 0x1000001c  b           . + 4 + (0x1C << 2)
label_465030:
    if (ctx->pc == 0x465030u) {
        ctx->pc = 0x465030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46502Cu;
        // 0x465030: 0xae020020  sw          $v0, 0x20($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x465034u;
        goto label_465034;
    }
    ctx->pc = 0x46502Cu;
    {
        const bool branch_taken_0x46502c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x465030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46502Cu;
        // 0x465030: 0xae020020  sw          $v0, 0x20($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46502c) {
            ctx->pc = 0x4650A0u;
            goto label_4650a0;
        }
    }
    ctx->pc = 0x465034u;
label_465034:
    // 0x465034: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x465034u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_465038:
    // 0x465038: 0x10000019  b           . + 4 + (0x19 << 2)
label_46503c:
    if (ctx->pc == 0x46503Cu) {
        ctx->pc = 0x46503Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x465038u;
        // 0x46503c: 0xae020020  sw          $v0, 0x20($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x465040u;
        goto label_465040;
    }
    ctx->pc = 0x465038u;
    {
        const bool branch_taken_0x465038 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x46503Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x465038u;
        // 0x46503c: 0xae020020  sw          $v0, 0x20($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x465038) {
            ctx->pc = 0x4650A0u;
            goto label_4650a0;
        }
    }
    ctx->pc = 0x465040u;
label_465040:
    // 0x465040: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x465040u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_465044:
    // 0x465044: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x465044u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_465048:
    // 0x465048: 0xae020060  sw          $v0, 0x60($s0)
    ctx->pc = 0x465048u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 2));
label_46504c:
    // 0x46504c: 0x10000014  b           . + 4 + (0x14 << 2)
label_465050:
    if (ctx->pc == 0x465050u) {
        ctx->pc = 0x465050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46504Cu;
        // 0x465050: 0xae030020  sw          $v1, 0x20($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x465054u;
        goto label_465054;
    }
    ctx->pc = 0x46504Cu;
    {
        const bool branch_taken_0x46504c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x465050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46504Cu;
        // 0x465050: 0xae030020  sw          $v1, 0x20($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46504c) {
            ctx->pc = 0x4650A0u;
            goto label_4650a0;
        }
    }
    ctx->pc = 0x465054u;
label_465054:
    // 0x465054: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x465054u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_465058:
    // 0x465058: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x465058u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_46505c:
    // 0x46505c: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x46505cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
label_465060:
    // 0x465060: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x465060u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_465064:
    // 0x465064: 0xc119634  jal         func_4658D0
label_465068:
    if (ctx->pc == 0x465068u) {
        ctx->pc = 0x465068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x465064u;
        // 0x465068: 0x24060006  addiu       $a2, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46506Cu;
        goto label_46506c;
    }
    ctx->pc = 0x465064u;
    SET_GPR_U32(ctx, 31, 0x46506Cu);
    ctx->pc = 0x465068u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x465064u;
    // 0x465068: 0x24060006  addiu       $a2, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4658D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4658D0u, 0x465064u, 0x46506Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46506Cu;
label_46506c:
    // 0x46506c: 0x1000000c  b           . + 4 + (0xC << 2)
label_465070:
    if (ctx->pc == 0x465070u) {
        ctx->pc = 0x465074u;
        goto label_465074;
    }
    ctx->pc = 0x46506Cu;
    {
        const bool branch_taken_0x46506c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x46506c) {
            ctx->pc = 0x4650A0u;
            goto label_4650a0;
        }
    }
    ctx->pc = 0x465074u;
label_465074:
    // 0x465074: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x465074u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_465078:
    // 0x465078: 0x10000009  b           . + 4 + (0x9 << 2)
label_46507c:
    if (ctx->pc == 0x46507Cu) {
        ctx->pc = 0x46507Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x465078u;
        // 0x46507c: 0xae020020  sw          $v0, 0x20($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x465080u;
        goto label_465080;
    }
    ctx->pc = 0x465078u;
    {
        const bool branch_taken_0x465078 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x46507Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x465078u;
        // 0x46507c: 0xae020020  sw          $v0, 0x20($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x465078) {
            ctx->pc = 0x4650A0u;
            goto label_4650a0;
        }
    }
    ctx->pc = 0x465080u;
label_465080:
    // 0x465080: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x465080u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_465084:
    // 0x465084: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x465084u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_465088:
    // 0x465088: 0xae020060  sw          $v0, 0x60($s0)
    ctx->pc = 0x465088u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 2));
label_46508c:
    // 0x46508c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x46508cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_465090:
    // 0x465090: 0xae030020  sw          $v1, 0x20($s0)
    ctx->pc = 0x465090u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 3));
label_465094:
    // 0x465094: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x465094u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_465098:
    // 0x465098: 0xc119634  jal         func_4658D0
label_46509c:
    if (ctx->pc == 0x46509Cu) {
        ctx->pc = 0x46509Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x465098u;
        // 0x46509c: 0x24060006  addiu       $a2, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4650A0u;
        goto label_4650a0;
    }
    ctx->pc = 0x465098u;
    SET_GPR_U32(ctx, 31, 0x4650A0u);
    ctx->pc = 0x46509Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x465098u;
    // 0x46509c: 0x24060006  addiu       $a2, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4658D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4658D0u, 0x465098u, 0x4650A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4650A0u;
label_4650a0:
    // 0x4650a0: 0xc1197e2  jal         func_465F88
label_4650a4:
    if (ctx->pc == 0x4650A4u) {
        ctx->pc = 0x4650A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4650A0u;
        // 0x4650a4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4650A8u;
        goto label_4650a8;
    }
    ctx->pc = 0x4650A0u;
    SET_GPR_U32(ctx, 31, 0x4650A8u);
    ctx->pc = 0x4650A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4650A0u;
    // 0x4650a4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x465F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x465F88u, 0x4650A0u, 0x4650A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4650A8u;
label_4650a8:
    // 0x4650a8: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x4650a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4650ac:
    // 0x4650ac: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x4650acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4650b0:
    // 0x4650b0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x4650b0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4650b4:
    // 0x4650b4: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x4650b4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4650b8:
    // 0x4650b8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4650b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4650bc:
    // 0x4650bc: 0x3e00008  jr          $ra
label_4650c0:
    if (ctx->pc == 0x4650C0u) {
        ctx->pc = 0x4650C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4650BCu;
        // 0x4650c0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4650C4u;
        goto label_4650c4;
    }
    ctx->pc = 0x4650BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4650C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4650BCu;
        // 0x4650c0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4650BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4650C4u;
label_4650c4:
    // 0x4650c4: 0x0  nop
    ctx->pc = 0x4650c4u;
    // NOP
    ctx->pc = 0x4650c8u;
}
