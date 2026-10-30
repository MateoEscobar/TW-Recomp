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

// Function: sub_00330F98
// Address: 0x330f98 - 0x3311a8
void sub_00330F98_0x330f98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00330F98_0x330f98");
#endif

    switch (ctx->pc) {
        case 0x330fc8u: goto label_330fc8;
        case 0x330fdcu: goto label_330fdc;
        case 0x330ff4u: goto label_330ff4;
        case 0x330ffcu: goto label_330ffc;
        case 0x331008u: goto label_331008;
        case 0x331034u: goto label_331034;
        case 0x33103cu: goto label_33103c;
        case 0x331054u: goto label_331054;
        case 0x331074u: goto label_331074;
        case 0x331084u: goto label_331084;
        case 0x331090u: goto label_331090;
        case 0x3310a0u: goto label_3310a0;
        case 0x3310b8u: goto label_3310b8;
        case 0x3310c4u: goto label_3310c4;
        case 0x3310e4u: goto label_3310e4;
        case 0x3310f0u: goto label_3310f0;
        case 0x3310fcu: goto label_3310fc;
        case 0x331104u: goto label_331104;
        case 0x331110u: goto label_331110;
        case 0x33111cu: goto label_33111c;
        case 0x331138u: goto label_331138;
        case 0x331158u: goto label_331158;
        case 0x33117cu: goto label_33117c;
        default: break;
    }

    ctx->pc = 0x330f98u;

    // 0x330f98: 0x27bdfe70  addiu       $sp, $sp, -0x190
    ctx->pc = 0x330f98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966896));
    // 0x330f9c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x330f9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x330fa0: 0x7fb30150  sq          $s3, 0x150($sp)
    ctx->pc = 0x330fa0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 19));
    // 0x330fa4: 0x27a60110  addiu       $a2, $sp, 0x110
    ctx->pc = 0x330fa4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x330fa8: 0x7fb10170  sq          $s1, 0x170($sp)
    ctx->pc = 0x330fa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 17));
    // 0x330fac: 0x7fb20160  sq          $s2, 0x160($sp)
    ctx->pc = 0x330facu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 18));
    // 0x330fb0: 0x7fb40140  sq          $s4, 0x140($sp)
    ctx->pc = 0x330fb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 20));
    // 0x330fb4: 0x7fb00180  sq          $s0, 0x180($sp)
    ctx->pc = 0x330fb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), GPR_VEC(ctx, 16));
    // 0x330fb8: 0x7fb50130  sq          $s5, 0x130($sp)
    ctx->pc = 0x330fb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 21));
    // 0x330fbc: 0xffbf0120  sd          $ra, 0x120($sp)
    ctx->pc = 0x330fbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 31));
    // 0x330fc0: 0xc0c9192  jal         func_324648
    ctx->pc = 0x330FC0u;
    SET_GPR_U32(ctx, 31, 0x330FC8u);
    ctx->pc = 0x330FC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x330FC0u;
    // 0x330fc4: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x324648u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x324648u, 0x330FC0u, 0x330FC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x330FC8u;
label_330fc8:
    // 0x330fc8: 0x27a60114  addiu       $a2, $sp, 0x114
    ctx->pc = 0x330fc8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 276));
    // 0x330fcc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x330fccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x330fd0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x330fd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x330fd4: 0xc0c9192  jal         func_324648
    ctx->pc = 0x330FD4u;
    SET_GPR_U32(ctx, 31, 0x330FDCu);
    ctx->pc = 0x330FD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x330FD4u;
    // 0x330fd8: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x324648u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x324648u, 0x330FD4u, 0x330FDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x330FDCu;
label_330fdc:
    // 0x330fdc: 0x3406ffc0  ori         $a2, $zero, 0xFFC0
    ctx->pc = 0x330fdcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
    // 0x330fe0: 0x633bc  dsll32      $a2, $a2, 14
    ctx->pc = 0x330fe0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 14));
    // 0x330fe4: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x330fe4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x330fe8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x330fe8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x330fec: 0xc0c91f2  jal         func_3247C8
    ctx->pc = 0x330FECu;
    SET_GPR_U32(ctx, 31, 0x330FF4u);
    ctx->pc = 0x330FF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x330FECu;
    // 0x330ff0: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3247C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3247C8u, 0x330FECu, 0x330FF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x330FF4u;
label_330ff4:
    // 0x330ff4: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x330FF4u;
    SET_GPR_U32(ctx, 31, 0x330FFCu);
    ctx->pc = 0x330FF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x330FF4u;
    // 0x330ff8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x330FF4u, 0x330FFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x330FFCu;
label_330ffc:
    // 0x330ffc: 0x8fa50110  lw          $a1, 0x110($sp)
    ctx->pc = 0x330ffcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x331000: 0xc0cbf9c  jal         func_32FE70
    ctx->pc = 0x331000u;
    SET_GPR_U32(ctx, 31, 0x331008u);
    ctx->pc = 0x331004u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x331000u;
    // 0x331004: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32FE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32FE70u, 0x331000u, 0x331008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x331008u;
label_331008:
    // 0x331008: 0x2451ffff  addiu       $s1, $v0, -0x1
    ctx->pc = 0x331008u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x33100c: 0x6200004  bltz        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x33100Cu;
    {
        const bool branch_taken_0x33100c = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x331010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33100Cu;
        // 0x331010: 0x8fa20110  lw          $v0, 0x110($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33100c) {
            ctx->pc = 0x331020u;
            goto label_331020;
        }
    }
    ctx->pc = 0x331014u;
    // 0x331014: 0x51102b  sltu        $v0, $v0, $s1
    ctx->pc = 0x331014u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x331018: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x331018u;
    {
        const bool branch_taken_0x331018 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x331018) {
            ctx->pc = 0x331034u;
            goto label_331034;
        }
    }
    ctx->pc = 0x331020u;
label_331020:
    // 0x331020: 0x3c060057  lui         $a2, 0x57
    ctx->pc = 0x331020u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)87 << 16));
    // 0x331024: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x331024u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x331028: 0x24c65f08  addiu       $a2, $a2, 0x5F08
    ctx->pc = 0x331028u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 24328));
    // 0x33102c: 0xc0c910e  jal         func_324438
    ctx->pc = 0x33102Cu;
    SET_GPR_U32(ctx, 31, 0x331034u);
    ctx->pc = 0x331030u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33102Cu;
    // 0x331030: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x324438u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x324438u, 0x33102Cu, 0x331034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x331034u;
label_331034:
    // 0x331034: 0xc0c8cc6  jal         func_323318
    ctx->pc = 0x331034u;
    SET_GPR_U32(ctx, 31, 0x33103Cu);
    ctx->pc = 0x331038u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x331034u;
    // 0x331038: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323318u, 0x331034u, 0x33103Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33103Cu;
label_33103c:
    // 0x33103c: 0x28420004  slti        $v0, $v0, 0x4
    ctx->pc = 0x33103cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x331040: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x331040u;
    {
        const bool branch_taken_0x331040 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x331044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x331040u;
        // 0x331044: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x331040) {
            ctx->pc = 0x33105Cu;
            goto label_33105c;
        }
    }
    ctx->pc = 0x331048u;
    // 0x331048: 0x3c050057  lui         $a1, 0x57
    ctx->pc = 0x331048u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)87 << 16));
    // 0x33104c: 0xc10d72c  jal         func_435CB0
    ctx->pc = 0x33104Cu;
    SET_GPR_U32(ctx, 31, 0x331054u);
    ctx->pc = 0x331050u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33104Cu;
    // 0x331050: 0x24a56100  addiu       $a1, $a1, 0x6100 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24832));
    ctx->in_delay_slot = false;
    ctx->pc = 0x435CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x435CB0u, 0x33104Cu, 0x331054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x331054u;
label_331054:
    // 0x331054: 0x5440001d  bnel        $v0, $zero, . + 4 + (0x1D << 2)
    ctx->pc = 0x331054u;
    {
        const bool branch_taken_0x331054 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x331054) {
            ctx->pc = 0x331058u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x331054u;
            // 0x331058: 0x82430000  lb          $v1, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3310CCu;
            goto label_3310cc;
        }
    }
    ctx->pc = 0x33105Cu;
label_33105c:
    // 0x33105c: 0x8fa50110  lw          $a1, 0x110($sp)
    ctx->pc = 0x33105cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x331060: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x331060u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x331064: 0x8fa70114  lw          $a3, 0x114($sp)
    ctx->pc = 0x331064u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 276)));
    // 0x331068: 0x2912021  addu        $a0, $s4, $s1
    ctx->pc = 0x331068u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 17)));
    // 0x33106c: 0xc0cc384  jal         func_330E10
    ctx->pc = 0x33106Cu;
    SET_GPR_U32(ctx, 31, 0x331074u);
    ctx->pc = 0x331070u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33106Cu;
    // 0x331070: 0xb12823  subu        $a1, $a1, $s1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x330E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x330E10u, 0x33106Cu, 0x331074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x331074u;
label_331074:
    // 0x331074: 0x1040003f  beqz        $v0, . + 4 + (0x3F << 2)
    ctx->pc = 0x331074u;
    {
        const bool branch_taken_0x331074 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x331078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x331074u;
        // 0x331078: 0x548023  subu        $s0, $v0, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x331074) {
            ctx->pc = 0x331174u;
            goto label_331174;
        }
    }
    ctx->pc = 0x33107Cu;
    // 0x33107c: 0xc10b0b4  jal         func_42C2D0
    ctx->pc = 0x33107Cu;
    SET_GPR_U32(ctx, 31, 0x331084u);
    ctx->pc = 0x331080u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33107Cu;
    // 0x331080: 0x26040001  addiu       $a0, $s0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C2D0u, 0x33107Cu, 0x331084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x331084u;
label_331084:
    // 0x331084: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x331084u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x331088: 0xc0c8e38  jal         func_3238E0
    ctx->pc = 0x331088u;
    SET_GPR_U32(ctx, 31, 0x331090u);
    ctx->pc = 0x33108Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x331088u;
    // 0x33108c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3238E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3238E0u, 0x331088u, 0x331090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x331090u;
label_331090:
    // 0x331090: 0x8fa20114  lw          $v0, 0x114($sp)
    ctx->pc = 0x331090u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 276)));
    // 0x331094: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x331094u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x331098: 0xc10b0b4  jal         func_42C2D0
    ctx->pc = 0x331098u;
    SET_GPR_U32(ctx, 31, 0x3310A0u);
    ctx->pc = 0x33109Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x331098u;
    // 0x33109c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C2D0u, 0x331098u, 0x3310A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3310A0u;
label_3310a0:
    // 0x3310a0: 0x6010006  bgez        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3310A0u;
    {
        const bool branch_taken_0x3310a0 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x3310A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3310A0u;
        // 0x3310a4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3310a0) {
            ctx->pc = 0x3310BCu;
            goto label_3310bc;
        }
    }
    ctx->pc = 0x3310A8u;
    // 0x3310a8: 0x340583e0  ori         $a1, $zero, 0x83E0
    ctx->pc = 0x3310a8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33760);
    // 0x3310ac: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x3310acu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x3310b0: 0xc10af26  jal         func_42BC98
    ctx->pc = 0x3310B0u;
    SET_GPR_U32(ctx, 31, 0x3310B8u);
    ctx->pc = 0x3310B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3310B0u;
    // 0x3310b4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BC98u, 0x3310B0u, 0x3310B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3310B8u;
label_3310b8:
    // 0x3310b8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3310b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3310bc:
    // 0x3310bc: 0xc0c8e38  jal         func_3238E0
    ctx->pc = 0x3310BCu;
    SET_GPR_U32(ctx, 31, 0x3310C4u);
    ctx->pc = 0x3310C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3310BCu;
    // 0x3310c0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3238E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3238E0u, 0x3310BCu, 0x3310C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3310C4u;
label_3310c4:
    // 0x3310c4: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x3310C4u;
    {
        const bool branch_taken_0x3310c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3310C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3310C4u;
        // 0x3310c8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3310c4) {
            ctx->pc = 0x331180u;
            goto label_331180;
        }
    }
    ctx->pc = 0x3310CCu;
label_3310cc:
    // 0x3310cc: 0x2402005e  addiu       $v0, $zero, 0x5E
    ctx->pc = 0x3310ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 94));
    // 0x3310d0: 0x14620014  bne         $v1, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x3310D0u;
    {
        const bool branch_taken_0x3310d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3310D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3310D0u;
        // 0x3310d4: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3310d0) {
            ctx->pc = 0x331124u;
            goto label_331124;
        }
    }
    ctx->pc = 0x3310D8u;
    // 0x3310d8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x3310d8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x3310dc: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x3310DCu;
    {
        const bool branch_taken_0x3310dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3310E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3310DCu;
        // 0x3310e0: 0x24150001  addiu       $s5, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3310dc) {
            ctx->pc = 0x331124u;
            goto label_331124;
        }
    }
    ctx->pc = 0x3310E4u;
label_3310e4:
    // 0x3310e4: 0x2142023  subu        $a0, $s0, $s4
    ctx->pc = 0x3310e4u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 20)));
    // 0x3310e8: 0xc10b0b4  jal         func_42C2D0
    ctx->pc = 0x3310E8u;
    SET_GPR_U32(ctx, 31, 0x3310F0u);
    ctx->pc = 0x3310ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3310E8u;
    // 0x3310ec: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C2D0u, 0x3310E8u, 0x3310F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3310F0u;
label_3310f0:
    // 0x3310f0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3310f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3310f4: 0xc0c8e38  jal         func_3238E0
    ctx->pc = 0x3310F4u;
    SET_GPR_U32(ctx, 31, 0x3310FCu);
    ctx->pc = 0x3310F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3310F4u;
    // 0x3310f8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3238E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3238E0u, 0x3310F4u, 0x3310FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3310FCu;
label_3310fc:
    // 0x3310fc: 0xc10b0b4  jal         func_42C2D0
    ctx->pc = 0x3310FCu;
    SET_GPR_U32(ctx, 31, 0x331104u);
    ctx->pc = 0x331100u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3310FCu;
    // 0x331100: 0x2342023  subu        $a0, $s1, $s4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C2D0u, 0x3310FCu, 0x331104u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x331104u;
label_331104:
    // 0x331104: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x331104u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x331108: 0xc0c8e38  jal         func_3238E0
    ctx->pc = 0x331108u;
    SET_GPR_U32(ctx, 31, 0x331110u);
    ctx->pc = 0x33110Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x331108u;
    // 0x33110c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3238E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3238E0u, 0x331108u, 0x331110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x331110u;
label_331110:
    // 0x331110: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x331110u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x331114: 0xc0cc3b6  jal         func_330ED8
    ctx->pc = 0x331114u;
    SET_GPR_U32(ctx, 31, 0x33111Cu);
    ctx->pc = 0x331118u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x331114u;
    // 0x331118: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x330ED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x330ED8u, 0x331114u, 0x33111Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33111Cu;
label_33111c:
    // 0x33111c: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x33111Cu;
    {
        const bool branch_taken_0x33111c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x331120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33111Cu;
        // 0x331120: 0x24420002  addiu       $v0, $v0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33111c) {
            ctx->pc = 0x331180u;
            goto label_331180;
        }
    }
    ctx->pc = 0x331124u;
label_331124:
    // 0x331124: 0x8fa20110  lw          $v0, 0x110($sp)
    ctx->pc = 0x331124u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x331128: 0x2918021  addu        $s0, $s4, $s1
    ctx->pc = 0x331128u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 17)));
    // 0x33112c: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x33112cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x331130: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x331130u;
    {
        const bool branch_taken_0x331130 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x331134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x331130u;
        // 0x331134: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x331130) {
            ctx->pc = 0x331140u;
            goto label_331140;
        }
    }
    ctx->pc = 0x331138u;
label_331138:
    // 0x331138: 0x16a0000e  bnez        $s5, . + 4 + (0xE << 2)
    ctx->pc = 0x331138u;
    {
        const bool branch_taken_0x331138 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        if (branch_taken_0x331138) {
            ctx->pc = 0x331174u;
            goto label_331174;
        }
    }
    ctx->pc = 0x331140u;
label_331140:
    // 0x331140: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x331140u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x331144: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x331144u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x331148: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x331148u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33114c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x33114cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x331150: 0xc0cc2f0  jal         func_330BC0
    ctx->pc = 0x331150u;
    SET_GPR_U32(ctx, 31, 0x331158u);
    ctx->pc = 0x331154u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x331150u;
    // 0x331154: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x330BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x330BC0u, 0x331150u, 0x331158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x331158u;
label_331158:
    // 0x331158: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x331158u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33115c: 0x1620ffe1  bnez        $s1, . + 4 + (-0x1F << 2)
    ctx->pc = 0x33115Cu;
    {
        const bool branch_taken_0x33115c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x331160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33115Cu;
        // 0x331160: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33115c) {
            ctx->pc = 0x3310E4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3310e4;
        }
    }
    ctx->pc = 0x331164u;
    // 0x331164: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x331164u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x331168: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x331168u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x33116c: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x33116Cu;
    {
        const bool branch_taken_0x33116c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x331170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33116Cu;
        // 0x331170: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33116c) {
            ctx->pc = 0x331138u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_331138;
        }
    }
    ctx->pc = 0x331174u;
label_331174:
    // 0x331174: 0xc0c8e22  jal         func_323888
    ctx->pc = 0x331174u;
    SET_GPR_U32(ctx, 31, 0x33117Cu);
    ctx->pc = 0x331178u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x331174u;
    // 0x331178: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323888u, 0x331174u, 0x33117Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33117Cu;
label_33117c:
    // 0x33117c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x33117cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_331180:
    // 0x331180: 0x7bb00180  lq          $s0, 0x180($sp)
    ctx->pc = 0x331180u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x331184: 0x7bb10170  lq          $s1, 0x170($sp)
    ctx->pc = 0x331184u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x331188: 0x7bb20160  lq          $s2, 0x160($sp)
    ctx->pc = 0x331188u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x33118c: 0x7bb30150  lq          $s3, 0x150($sp)
    ctx->pc = 0x33118cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x331190: 0x7bb40140  lq          $s4, 0x140($sp)
    ctx->pc = 0x331190u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x331194: 0x7bb50130  lq          $s5, 0x130($sp)
    ctx->pc = 0x331194u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x331198: 0xdfbf0120  ld          $ra, 0x120($sp)
    ctx->pc = 0x331198u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x33119c: 0x3e00008  jr          $ra
    ctx->pc = 0x33119Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3311A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33119Cu;
        // 0x3311a0: 0x27bd0190  addiu       $sp, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33119Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3311A4u;
    // 0x3311a4: 0x0  nop
    ctx->pc = 0x3311a4u;
    // NOP
    ctx->pc = 0x3311a8u;
}
