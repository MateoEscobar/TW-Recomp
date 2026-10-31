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

// Function: sub_00264FA0
// Address: 0x264fa0 - 0x2653d8
void sub_00264FA0_0x264fa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00264FA0_0x264fa0");
#endif

    switch (ctx->pc) {
        case 0x264fccu: goto label_264fcc;
        case 0x2652c0u: goto label_2652c0;
        case 0x2652e0u: goto label_2652e0;
        case 0x265318u: goto label_265318;
        case 0x265338u: goto label_265338;
        case 0x265358u: goto label_265358;
        case 0x26537cu: goto label_26537c;
        case 0x26538cu: goto label_26538c;
        case 0x2653acu: goto label_2653ac;
        case 0x2653bcu: goto label_2653bc;
        default: break;
    }

    ctx->pc = 0x264fa0u;

    // 0x264fa0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x264fa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x264fa4: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x264fa4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x264fa8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x264fa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x264fac: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x264facu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x264fb0: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x264fb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x264fb4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x264fb4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x264fb8: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x264fb8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x264fbc: 0x1240000c  beqz        $s2, . + 4 + (0xC << 2)
    ctx->pc = 0x264FBCu;
    {
        const bool branch_taken_0x264fbc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x264FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264FBCu;
        // 0x264fc0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264fbc) {
            ctx->pc = 0x264FF0u;
            goto label_264ff0;
        }
    }
    ctx->pc = 0x264FC4u;
    // 0x264fc4: 0xc08a200  jal         func_228800
    ctx->pc = 0x264FC4u;
    SET_GPR_U32(ctx, 31, 0x264FCCu);
    ctx->pc = 0x264FC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x264FC4u;
    // 0x264fc8: 0x8e4400cc  lw          $a0, 0xCC($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 204)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228800u, 0x264FC4u, 0x264FCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x264FCCu;
label_264fcc:
    // 0x264fcc: 0x9043011b  lbu         $v1, 0x11B($v0)
    ctx->pc = 0x264fccu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 283)));
    // 0x264fd0: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x264fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x264fd4: 0x54620007  bnel        $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x264FD4u;
    {
        const bool branch_taken_0x264fd4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x264fd4) {
            ctx->pc = 0x264FD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x264FD4u;
            // 0x264fd8: 0x822201b0  lb          $v0, 0x1B0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 432)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x264FF4u;
            goto label_264ff4;
        }
    }
    ctx->pc = 0x264FDCu;
    // 0x264fdc: 0xde4200e0  ld          $v0, 0xE0($s2)
    ctx->pc = 0x264fdcu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 224)));
    // 0x264fe0: 0x2113a  dsrl        $v0, $v0, 4
    ctx->pc = 0x264fe0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 4);
    // 0x264fe4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x264fe4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x264fe8: 0x544000f5  bnel        $v0, $zero, . + 4 + (0xF5 << 2)
    ctx->pc = 0x264FE8u;
    {
        const bool branch_taken_0x264fe8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x264fe8) {
            ctx->pc = 0x264FECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x264FE8u;
            // 0x264fec: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2653C0u;
            goto label_2653c0;
        }
    }
    ctx->pc = 0x264FF0u;
label_264ff0:
    // 0x264ff0: 0x822201b0  lb          $v0, 0x1B0($s1)
    ctx->pc = 0x264ff0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 432)));
label_264ff4:
    // 0x264ff4: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x264ff4u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x264ff8: 0x104000f0  beqz        $v0, . + 4 + (0xF0 << 2)
    ctx->pc = 0x264FF8u;
    {
        const bool branch_taken_0x264ff8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x264FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264FF8u;
        // 0x264ffc: 0x240200ab  addiu       $v0, $zero, 0xAB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 171));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264ff8) {
            ctx->pc = 0x2653BCu;
            goto label_2653bc;
        }
    }
    ctx->pc = 0x265000u;
    // 0x265000: 0x120200b1  beq         $s0, $v0, . + 4 + (0xB1 << 2)
    ctx->pc = 0x265000u;
    {
        const bool branch_taken_0x265000 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x265004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265000u;
        // 0x265004: 0x2a0200ac  slti        $v0, $s0, 0xAC (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)172) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x265000) {
            ctx->pc = 0x2652C8u;
            goto label_2652c8;
        }
    }
    ctx->pc = 0x265008u;
    // 0x265008: 0x10400047  beqz        $v0, . + 4 + (0x47 << 2)
    ctx->pc = 0x265008u;
    {
        const bool branch_taken_0x265008 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26500Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265008u;
        // 0x26500c: 0x2402004c  addiu       $v0, $zero, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265008) {
            ctx->pc = 0x265128u;
            goto label_265128;
        }
    }
    ctx->pc = 0x265010u;
    // 0x265010: 0x120200bb  beq         $s0, $v0, . + 4 + (0xBB << 2)
    ctx->pc = 0x265010u;
    {
        const bool branch_taken_0x265010 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x265014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265010u;
        // 0x265014: 0x2a02004d  slti        $v0, $s0, 0x4D (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)77) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x265010) {
            ctx->pc = 0x265300u;
            goto label_265300;
        }
    }
    ctx->pc = 0x265018u;
    // 0x265018: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x265018u;
    {
        const bool branch_taken_0x265018 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26501Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265018u;
        // 0x26501c: 0x2402003d  addiu       $v0, $zero, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 61));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265018) {
            ctx->pc = 0x265088u;
            goto label_265088;
        }
    }
    ctx->pc = 0x265020u;
    // 0x265020: 0x1202009b  beq         $s0, $v0, . + 4 + (0x9B << 2)
    ctx->pc = 0x265020u;
    {
        const bool branch_taken_0x265020 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x265024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265020u;
        // 0x265024: 0x2a02003e  slti        $v0, $s0, 0x3E (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)62) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x265020) {
            ctx->pc = 0x265290u;
            goto label_265290;
        }
    }
    ctx->pc = 0x265028u;
    // 0x265028: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x265028u;
    {
        const bool branch_taken_0x265028 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26502Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265028u;
        // 0x26502c: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265028) {
            ctx->pc = 0x26505Cu;
            goto label_26505c;
        }
    }
    ctx->pc = 0x265030u;
    // 0x265030: 0x120200b3  beq         $s0, $v0, . + 4 + (0xB3 << 2)
    ctx->pc = 0x265030u;
    {
        const bool branch_taken_0x265030 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x265034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265030u;
        // 0x265034: 0x2a02000a  slti        $v0, $s0, 0xA (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)10) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x265030) {
            ctx->pc = 0x265300u;
            goto label_265300;
        }
    }
    ctx->pc = 0x265038u;
    // 0x265038: 0x544000e1  bnel        $v0, $zero, . + 4 + (0xE1 << 2)
    ctx->pc = 0x265038u;
    {
        const bool branch_taken_0x265038 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x265038) {
            ctx->pc = 0x26503Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x265038u;
            // 0x26503c: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2653C0u;
            goto label_2653c0;
        }
    }
    ctx->pc = 0x265040u;
    // 0x265040: 0x24020039  addiu       $v0, $zero, 0x39
    ctx->pc = 0x265040u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
    // 0x265044: 0x12020092  beq         $s0, $v0, . + 4 + (0x92 << 2)
    ctx->pc = 0x265044u;
    {
        const bool branch_taken_0x265044 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x265048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265044u;
        // 0x265048: 0x2402003b  addiu       $v0, $zero, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265044) {
            ctx->pc = 0x265290u;
            goto label_265290;
        }
    }
    ctx->pc = 0x26504Cu;
    // 0x26504c: 0x12020090  beq         $s0, $v0, . + 4 + (0x90 << 2)
    ctx->pc = 0x26504Cu;
    {
        const bool branch_taken_0x26504c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x265050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26504Cu;
        // 0x265050: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26504c) {
            ctx->pc = 0x265290u;
            goto label_265290;
        }
    }
    ctx->pc = 0x265054u;
    // 0x265054: 0x100000db  b           . + 4 + (0xDB << 2)
    ctx->pc = 0x265054u;
    {
        const bool branch_taken_0x265054 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x265058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265054u;
        // 0x265058: 0x7bb10020  lq          $s1, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265054) {
            ctx->pc = 0x2653C4u;
            goto label_2653c4;
        }
    }
    ctx->pc = 0x26505Cu;
label_26505c:
    // 0x26505c: 0x24020043  addiu       $v0, $zero, 0x43
    ctx->pc = 0x26505cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
    // 0x265060: 0x1202008b  beq         $s0, $v0, . + 4 + (0x8B << 2)
    ctx->pc = 0x265060u;
    {
        const bool branch_taken_0x265060 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x265064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265060u;
        // 0x265064: 0x2a020044  slti        $v0, $s0, 0x44 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)68) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x265060) {
            ctx->pc = 0x265290u;
            goto label_265290;
        }
    }
    ctx->pc = 0x265068u;
    // 0x265068: 0x104000d4  beqz        $v0, . + 4 + (0xD4 << 2)
    ctx->pc = 0x265068u;
    {
        const bool branch_taken_0x265068 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26506Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265068u;
        // 0x26506c: 0x2402003f  addiu       $v0, $zero, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265068) {
            ctx->pc = 0x2653BCu;
            goto label_2653bc;
        }
    }
    ctx->pc = 0x265070u;
    // 0x265070: 0x12020087  beq         $s0, $v0, . + 4 + (0x87 << 2)
    ctx->pc = 0x265070u;
    {
        const bool branch_taken_0x265070 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x265074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265070u;
        // 0x265074: 0x24020041  addiu       $v0, $zero, 0x41 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265070) {
            ctx->pc = 0x265290u;
            goto label_265290;
        }
    }
    ctx->pc = 0x265078u;
    // 0x265078: 0x12020085  beq         $s0, $v0, . + 4 + (0x85 << 2)
    ctx->pc = 0x265078u;
    {
        const bool branch_taken_0x265078 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x26507Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265078u;
        // 0x26507c: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265078) {
            ctx->pc = 0x265290u;
            goto label_265290;
        }
    }
    ctx->pc = 0x265080u;
    // 0x265080: 0x100000d0  b           . + 4 + (0xD0 << 2)
    ctx->pc = 0x265080u;
    {
        const bool branch_taken_0x265080 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x265084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265080u;
        // 0x265084: 0x7bb10020  lq          $s1, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265080) {
            ctx->pc = 0x2653C4u;
            goto label_2653c4;
        }
    }
    ctx->pc = 0x265088u;
label_265088:
    // 0x265088: 0x2402009d  addiu       $v0, $zero, 0x9D
    ctx->pc = 0x265088u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 157));
    // 0x26508c: 0x12020086  beq         $s0, $v0, . + 4 + (0x86 << 2)
    ctx->pc = 0x26508Cu;
    {
        const bool branch_taken_0x26508c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x265090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26508Cu;
        // 0x265090: 0x2a02009e  slti        $v0, $s0, 0x9E (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)158) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26508c) {
            ctx->pc = 0x2652A8u;
            goto label_2652a8;
        }
    }
    ctx->pc = 0x265094u;
    // 0x265094: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x265094u;
    {
        const bool branch_taken_0x265094 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x265098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265094u;
        // 0x265098: 0x24020097  addiu       $v0, $zero, 0x97 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 151));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265094) {
            ctx->pc = 0x2650E0u;
            goto label_2650e0;
        }
    }
    ctx->pc = 0x26509Cu;
    // 0x26509c: 0x12020076  beq         $s0, $v0, . + 4 + (0x76 << 2)
    ctx->pc = 0x26509Cu;
    {
        const bool branch_taken_0x26509c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x2650A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26509Cu;
        // 0x2650a0: 0x2a020098  slti        $v0, $s0, 0x98 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)152) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26509c) {
            ctx->pc = 0x265278u;
            goto label_265278;
        }
    }
    ctx->pc = 0x2650A4u;
    // 0x2650a4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2650A4u;
    {
        const bool branch_taken_0x2650a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2650A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2650A4u;
        // 0x2650a8: 0x24020093  addiu       $v0, $zero, 0x93 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 147));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2650a4) {
            ctx->pc = 0x2650C4u;
            goto label_2650c4;
        }
    }
    ctx->pc = 0x2650ACu;
    // 0x2650ac: 0x12020072  beq         $s0, $v0, . + 4 + (0x72 << 2)
    ctx->pc = 0x2650ACu;
    {
        const bool branch_taken_0x2650ac = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x2650B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2650ACu;
        // 0x2650b0: 0x24020095  addiu       $v0, $zero, 0x95 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 149));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2650ac) {
            ctx->pc = 0x265278u;
            goto label_265278;
        }
    }
    ctx->pc = 0x2650B4u;
    // 0x2650b4: 0x12020070  beq         $s0, $v0, . + 4 + (0x70 << 2)
    ctx->pc = 0x2650B4u;
    {
        const bool branch_taken_0x2650b4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x2650B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2650B4u;
        // 0x2650b8: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2650b4) {
            ctx->pc = 0x265278u;
            goto label_265278;
        }
    }
    ctx->pc = 0x2650BCu;
    // 0x2650bc: 0x100000c1  b           . + 4 + (0xC1 << 2)
    ctx->pc = 0x2650BCu;
    {
        const bool branch_taken_0x2650bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2650C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2650BCu;
        // 0x2650c0: 0x7bb10020  lq          $s1, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2650bc) {
            ctx->pc = 0x2653C4u;
            goto label_2653c4;
        }
    }
    ctx->pc = 0x2650C4u;
label_2650c4:
    // 0x2650c4: 0x24020099  addiu       $v0, $zero, 0x99
    ctx->pc = 0x2650c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 153));
    // 0x2650c8: 0x1202006b  beq         $s0, $v0, . + 4 + (0x6B << 2)
    ctx->pc = 0x2650C8u;
    {
        const bool branch_taken_0x2650c8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x2650CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2650C8u;
        // 0x2650cc: 0x2402009b  addiu       $v0, $zero, 0x9B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 155));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2650c8) {
            ctx->pc = 0x265278u;
            goto label_265278;
        }
    }
    ctx->pc = 0x2650D0u;
    // 0x2650d0: 0x12020075  beq         $s0, $v0, . + 4 + (0x75 << 2)
    ctx->pc = 0x2650D0u;
    {
        const bool branch_taken_0x2650d0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x2650D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2650D0u;
        // 0x2650d4: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2650d0) {
            ctx->pc = 0x2652A8u;
            goto label_2652a8;
        }
    }
    ctx->pc = 0x2650D8u;
    // 0x2650d8: 0x100000ba  b           . + 4 + (0xBA << 2)
    ctx->pc = 0x2650D8u;
    {
        const bool branch_taken_0x2650d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2650DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2650D8u;
        // 0x2650dc: 0x7bb10020  lq          $s1, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2650d8) {
            ctx->pc = 0x2653C4u;
            goto label_2653c4;
        }
    }
    ctx->pc = 0x2650E0u;
label_2650e0:
    // 0x2650e0: 0x240200a3  addiu       $v0, $zero, 0xA3
    ctx->pc = 0x2650e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 163));
    // 0x2650e4: 0x12020078  beq         $s0, $v0, . + 4 + (0x78 << 2)
    ctx->pc = 0x2650E4u;
    {
        const bool branch_taken_0x2650e4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x2650E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2650E4u;
        // 0x2650e8: 0x2a0200a4  slti        $v0, $s0, 0xA4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)164) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2650e4) {
            ctx->pc = 0x2652C8u;
            goto label_2652c8;
        }
    }
    ctx->pc = 0x2650ECu;
    // 0x2650ec: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2650ECu;
    {
        const bool branch_taken_0x2650ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2650F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2650ECu;
        // 0x2650f0: 0x2402009f  addiu       $v0, $zero, 0x9F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 159));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2650ec) {
            ctx->pc = 0x26510Cu;
            goto label_26510c;
        }
    }
    ctx->pc = 0x2650F4u;
    // 0x2650f4: 0x1202006c  beq         $s0, $v0, . + 4 + (0x6C << 2)
    ctx->pc = 0x2650F4u;
    {
        const bool branch_taken_0x2650f4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x2650F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2650F4u;
        // 0x2650f8: 0x240200a1  addiu       $v0, $zero, 0xA1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 161));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2650f4) {
            ctx->pc = 0x2652A8u;
            goto label_2652a8;
        }
    }
    ctx->pc = 0x2650FCu;
    // 0x2650fc: 0x1202006a  beq         $s0, $v0, . + 4 + (0x6A << 2)
    ctx->pc = 0x2650FCu;
    {
        const bool branch_taken_0x2650fc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x265100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2650FCu;
        // 0x265100: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2650fc) {
            ctx->pc = 0x2652A8u;
            goto label_2652a8;
        }
    }
    ctx->pc = 0x265104u;
    // 0x265104: 0x100000af  b           . + 4 + (0xAF << 2)
    ctx->pc = 0x265104u;
    {
        const bool branch_taken_0x265104 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x265108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265104u;
        // 0x265108: 0x7bb10020  lq          $s1, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265104) {
            ctx->pc = 0x2653C4u;
            goto label_2653c4;
        }
    }
    ctx->pc = 0x26510Cu;
label_26510c:
    // 0x26510c: 0x240200a5  addiu       $v0, $zero, 0xA5
    ctx->pc = 0x26510cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 165));
    // 0x265110: 0x1202006d  beq         $s0, $v0, . + 4 + (0x6D << 2)
    ctx->pc = 0x265110u;
    {
        const bool branch_taken_0x265110 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x265114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265110u;
        // 0x265114: 0x240200a9  addiu       $v0, $zero, 0xA9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 169));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265110) {
            ctx->pc = 0x2652C8u;
            goto label_2652c8;
        }
    }
    ctx->pc = 0x265118u;
    // 0x265118: 0x1202006b  beq         $s0, $v0, . + 4 + (0x6B << 2)
    ctx->pc = 0x265118u;
    {
        const bool branch_taken_0x265118 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x26511Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265118u;
        // 0x26511c: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265118) {
            ctx->pc = 0x2652C8u;
            goto label_2652c8;
        }
    }
    ctx->pc = 0x265120u;
    // 0x265120: 0x100000a8  b           . + 4 + (0xA8 << 2)
    ctx->pc = 0x265120u;
    {
        const bool branch_taken_0x265120 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x265124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265120u;
        // 0x265124: 0x7bb10020  lq          $s1, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265120) {
            ctx->pc = 0x2653C4u;
            goto label_2653c4;
        }
    }
    ctx->pc = 0x265128u;
label_265128:
    // 0x265128: 0x240200eb  addiu       $v0, $zero, 0xEB
    ctx->pc = 0x265128u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 235));
    // 0x26512c: 0x12020058  beq         $s0, $v0, . + 4 + (0x58 << 2)
    ctx->pc = 0x26512Cu;
    {
        const bool branch_taken_0x26512c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x265130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26512Cu;
        // 0x265130: 0x2a0200ec  slti        $v0, $s0, 0xEC (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)236) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26512c) {
            ctx->pc = 0x265290u;
            goto label_265290;
        }
    }
    ctx->pc = 0x265134u;
    // 0x265134: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x265134u;
    {
        const bool branch_taken_0x265134 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x265138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265134u;
        // 0x265138: 0x240200bd  addiu       $v0, $zero, 0xBD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 189));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265134) {
            ctx->pc = 0x2651D8u;
            goto label_2651d8;
        }
    }
    ctx->pc = 0x26513Cu;
    // 0x26513c: 0x12020062  beq         $s0, $v0, . + 4 + (0x62 << 2)
    ctx->pc = 0x26513Cu;
    {
        const bool branch_taken_0x26513c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x265140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26513Cu;
        // 0x265140: 0x2a0200be  slti        $v0, $s0, 0xBE (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)190) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26513c) {
            ctx->pc = 0x2652C8u;
            goto label_2652c8;
        }
    }
    ctx->pc = 0x265144u;
    // 0x265144: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x265144u;
    {
        const bool branch_taken_0x265144 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x265148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265144u;
        // 0x265148: 0x240200b5  addiu       $v0, $zero, 0xB5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 181));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265144) {
            ctx->pc = 0x265190u;
            goto label_265190;
        }
    }
    ctx->pc = 0x26514Cu;
    // 0x26514c: 0x1202005e  beq         $s0, $v0, . + 4 + (0x5E << 2)
    ctx->pc = 0x26514Cu;
    {
        const bool branch_taken_0x26514c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x265150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26514Cu;
        // 0x265150: 0x2a0200b6  slti        $v0, $s0, 0xB6 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)182) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26514c) {
            ctx->pc = 0x2652C8u;
            goto label_2652c8;
        }
    }
    ctx->pc = 0x265154u;
    // 0x265154: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x265154u;
    {
        const bool branch_taken_0x265154 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x265158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265154u;
        // 0x265158: 0x240200af  addiu       $v0, $zero, 0xAF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 175));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265154) {
            ctx->pc = 0x265174u;
            goto label_265174;
        }
    }
    ctx->pc = 0x26515Cu;
    // 0x26515c: 0x1202005a  beq         $s0, $v0, . + 4 + (0x5A << 2)
    ctx->pc = 0x26515Cu;
    {
        const bool branch_taken_0x26515c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x265160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26515Cu;
        // 0x265160: 0x240200b1  addiu       $v0, $zero, 0xB1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 177));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26515c) {
            ctx->pc = 0x2652C8u;
            goto label_2652c8;
        }
    }
    ctx->pc = 0x265164u;
    // 0x265164: 0x12020058  beq         $s0, $v0, . + 4 + (0x58 << 2)
    ctx->pc = 0x265164u;
    {
        const bool branch_taken_0x265164 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x265168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265164u;
        // 0x265168: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265164) {
            ctx->pc = 0x2652C8u;
            goto label_2652c8;
        }
    }
    ctx->pc = 0x26516Cu;
    // 0x26516c: 0x10000095  b           . + 4 + (0x95 << 2)
    ctx->pc = 0x26516Cu;
    {
        const bool branch_taken_0x26516c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x265170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26516Cu;
        // 0x265170: 0x7bb10020  lq          $s1, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26516c) {
            ctx->pc = 0x2653C4u;
            goto label_2653c4;
        }
    }
    ctx->pc = 0x265174u;
label_265174:
    // 0x265174: 0x240200b7  addiu       $v0, $zero, 0xB7
    ctx->pc = 0x265174u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 183));
    // 0x265178: 0x12020053  beq         $s0, $v0, . + 4 + (0x53 << 2)
    ctx->pc = 0x265178u;
    {
        const bool branch_taken_0x265178 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x26517Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265178u;
        // 0x26517c: 0x240200bb  addiu       $v0, $zero, 0xBB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 187));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265178) {
            ctx->pc = 0x2652C8u;
            goto label_2652c8;
        }
    }
    ctx->pc = 0x265180u;
    // 0x265180: 0x12020051  beq         $s0, $v0, . + 4 + (0x51 << 2)
    ctx->pc = 0x265180u;
    {
        const bool branch_taken_0x265180 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x265184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265180u;
        // 0x265184: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265180) {
            ctx->pc = 0x2652C8u;
            goto label_2652c8;
        }
    }
    ctx->pc = 0x265188u;
    // 0x265188: 0x1000008e  b           . + 4 + (0x8E << 2)
    ctx->pc = 0x265188u;
    {
        const bool branch_taken_0x265188 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26518Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265188u;
        // 0x26518c: 0x7bb10020  lq          $s1, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265188) {
            ctx->pc = 0x2653C4u;
            goto label_2653c4;
        }
    }
    ctx->pc = 0x265190u;
label_265190:
    // 0x265190: 0x240200e5  addiu       $v0, $zero, 0xE5
    ctx->pc = 0x265190u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 229));
    // 0x265194: 0x1202003e  beq         $s0, $v0, . + 4 + (0x3E << 2)
    ctx->pc = 0x265194u;
    {
        const bool branch_taken_0x265194 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x265198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265194u;
        // 0x265198: 0x2a0200e6  slti        $v0, $s0, 0xE6 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)230) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x265194) {
            ctx->pc = 0x265290u;
            goto label_265290;
        }
    }
    ctx->pc = 0x26519Cu;
    // 0x26519c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x26519Cu;
    {
        const bool branch_taken_0x26519c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2651A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26519Cu;
        // 0x2651a0: 0x240200e1  addiu       $v0, $zero, 0xE1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 225));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26519c) {
            ctx->pc = 0x2651BCu;
            goto label_2651bc;
        }
    }
    ctx->pc = 0x2651A4u;
    // 0x2651a4: 0x1202003a  beq         $s0, $v0, . + 4 + (0x3A << 2)
    ctx->pc = 0x2651A4u;
    {
        const bool branch_taken_0x2651a4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x2651A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2651A4u;
        // 0x2651a8: 0x240200e3  addiu       $v0, $zero, 0xE3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 227));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2651a4) {
            ctx->pc = 0x265290u;
            goto label_265290;
        }
    }
    ctx->pc = 0x2651ACu;
    // 0x2651ac: 0x12020038  beq         $s0, $v0, . + 4 + (0x38 << 2)
    ctx->pc = 0x2651ACu;
    {
        const bool branch_taken_0x2651ac = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x2651B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2651ACu;
        // 0x2651b0: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2651ac) {
            ctx->pc = 0x265290u;
            goto label_265290;
        }
    }
    ctx->pc = 0x2651B4u;
    // 0x2651b4: 0x10000083  b           . + 4 + (0x83 << 2)
    ctx->pc = 0x2651B4u;
    {
        const bool branch_taken_0x2651b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2651B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2651B4u;
        // 0x2651b8: 0x7bb10020  lq          $s1, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2651b4) {
            ctx->pc = 0x2653C4u;
            goto label_2653c4;
        }
    }
    ctx->pc = 0x2651BCu;
label_2651bc:
    // 0x2651bc: 0x240200e7  addiu       $v0, $zero, 0xE7
    ctx->pc = 0x2651bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 231));
    // 0x2651c0: 0x12020033  beq         $s0, $v0, . + 4 + (0x33 << 2)
    ctx->pc = 0x2651C0u;
    {
        const bool branch_taken_0x2651c0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x2651C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2651C0u;
        // 0x2651c4: 0x240200e9  addiu       $v0, $zero, 0xE9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 233));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2651c0) {
            ctx->pc = 0x265290u;
            goto label_265290;
        }
    }
    ctx->pc = 0x2651C8u;
    // 0x2651c8: 0x12020031  beq         $s0, $v0, . + 4 + (0x31 << 2)
    ctx->pc = 0x2651C8u;
    {
        const bool branch_taken_0x2651c8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x2651CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2651C8u;
        // 0x2651cc: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2651c8) {
            ctx->pc = 0x265290u;
            goto label_265290;
        }
    }
    ctx->pc = 0x2651D0u;
    // 0x2651d0: 0x1000007c  b           . + 4 + (0x7C << 2)
    ctx->pc = 0x2651D0u;
    {
        const bool branch_taken_0x2651d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2651D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2651D0u;
        // 0x2651d4: 0x7bb10020  lq          $s1, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2651d0) {
            ctx->pc = 0x2653C4u;
            goto label_2653c4;
        }
    }
    ctx->pc = 0x2651D8u;
label_2651d8:
    // 0x2651d8: 0x2402027f  addiu       $v0, $zero, 0x27F
    ctx->pc = 0x2651d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 639));
    // 0x2651dc: 0x12020050  beq         $s0, $v0, . + 4 + (0x50 << 2)
    ctx->pc = 0x2651DCu;
    {
        const bool branch_taken_0x2651dc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x2651E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2651DCu;
        // 0x2651e0: 0x2a020280  slti        $v0, $s0, 0x280 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)640) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2651dc) {
            ctx->pc = 0x265320u;
            goto label_265320;
        }
    }
    ctx->pc = 0x2651E4u;
    // 0x2651e4: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x2651E4u;
    {
        const bool branch_taken_0x2651e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2651E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2651E4u;
        // 0x2651e8: 0x240201db  addiu       $v0, $zero, 0x1DB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 475));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2651e4) {
            ctx->pc = 0x265230u;
            goto label_265230;
        }
    }
    ctx->pc = 0x2651ECu;
    // 0x2651ec: 0x12020069  beq         $s0, $v0, . + 4 + (0x69 << 2)
    ctx->pc = 0x2651ECu;
    {
        const bool branch_taken_0x2651ec = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x2651F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2651ECu;
        // 0x2651f0: 0x2a0201dc  slti        $v0, $s0, 0x1DC (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)476) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2651ec) {
            ctx->pc = 0x265394u;
            goto label_265394;
        }
    }
    ctx->pc = 0x2651F4u;
    // 0x2651f4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2651F4u;
    {
        const bool branch_taken_0x2651f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2651F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2651F4u;
        // 0x2651f8: 0x240201d3  addiu       $v0, $zero, 0x1D3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 467));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2651f4) {
            ctx->pc = 0x265214u;
            goto label_265214;
        }
    }
    ctx->pc = 0x2651FCu;
    // 0x2651fc: 0x12020058  beq         $s0, $v0, . + 4 + (0x58 << 2)
    ctx->pc = 0x2651FCu;
    {
        const bool branch_taken_0x2651fc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x265200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2651FCu;
        // 0x265200: 0x240201d9  addiu       $v0, $zero, 0x1D9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 473));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2651fc) {
            ctx->pc = 0x265360u;
            goto label_265360;
        }
    }
    ctx->pc = 0x265204u;
    // 0x265204: 0x12020063  beq         $s0, $v0, . + 4 + (0x63 << 2)
    ctx->pc = 0x265204u;
    {
        const bool branch_taken_0x265204 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x265208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265204u;
        // 0x265208: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265204) {
            ctx->pc = 0x265394u;
            goto label_265394;
        }
    }
    ctx->pc = 0x26520Cu;
    // 0x26520c: 0x1000006d  b           . + 4 + (0x6D << 2)
    ctx->pc = 0x26520Cu;
    {
        const bool branch_taken_0x26520c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x265210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26520Cu;
        // 0x265210: 0x7bb10020  lq          $s1, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26520c) {
            ctx->pc = 0x2653C4u;
            goto label_2653c4;
        }
    }
    ctx->pc = 0x265214u;
label_265214:
    // 0x265214: 0x240201eb  addiu       $v0, $zero, 0x1EB
    ctx->pc = 0x265214u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 491));
    // 0x265218: 0x12020049  beq         $s0, $v0, . + 4 + (0x49 << 2)
    ctx->pc = 0x265218u;
    {
        const bool branch_taken_0x265218 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x26521Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265218u;
        // 0x26521c: 0x2402027d  addiu       $v0, $zero, 0x27D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 637));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265218) {
            ctx->pc = 0x265340u;
            goto label_265340;
        }
    }
    ctx->pc = 0x265220u;
    // 0x265220: 0x1202003f  beq         $s0, $v0, . + 4 + (0x3F << 2)
    ctx->pc = 0x265220u;
    {
        const bool branch_taken_0x265220 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x265224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265220u;
        // 0x265224: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265220) {
            ctx->pc = 0x265320u;
            goto label_265320;
        }
    }
    ctx->pc = 0x265228u;
    // 0x265228: 0x10000066  b           . + 4 + (0x66 << 2)
    ctx->pc = 0x265228u;
    {
        const bool branch_taken_0x265228 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26522Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265228u;
        // 0x26522c: 0x7bb10020  lq          $s1, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265228) {
            ctx->pc = 0x2653C4u;
            goto label_2653c4;
        }
    }
    ctx->pc = 0x265230u;
label_265230:
    // 0x265230: 0x2402028b  addiu       $v0, $zero, 0x28B
    ctx->pc = 0x265230u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 651));
    // 0x265234: 0x1202002c  beq         $s0, $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x265234u;
    {
        const bool branch_taken_0x265234 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x265238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265234u;
        // 0x265238: 0x2a02028c  slti        $v0, $s0, 0x28C (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)652) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x265234) {
            ctx->pc = 0x2652E8u;
            goto label_2652e8;
        }
    }
    ctx->pc = 0x26523Cu;
    // 0x26523c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x26523Cu;
    {
        const bool branch_taken_0x26523c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x265240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26523Cu;
        // 0x265240: 0x24020281  addiu       $v0, $zero, 0x281 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 641));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26523c) {
            ctx->pc = 0x26525Cu;
            goto label_26525c;
        }
    }
    ctx->pc = 0x265244u;
    // 0x265244: 0x12020036  beq         $s0, $v0, . + 4 + (0x36 << 2)
    ctx->pc = 0x265244u;
    {
        const bool branch_taken_0x265244 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x265248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265244u;
        // 0x265248: 0x24020289  addiu       $v0, $zero, 0x289 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 649));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265244) {
            ctx->pc = 0x265320u;
            goto label_265320;
        }
    }
    ctx->pc = 0x26524Cu;
    // 0x26524c: 0x12020026  beq         $s0, $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x26524Cu;
    {
        const bool branch_taken_0x26524c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x265250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26524Cu;
        // 0x265250: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26524c) {
            ctx->pc = 0x2652E8u;
            goto label_2652e8;
        }
    }
    ctx->pc = 0x265254u;
    // 0x265254: 0x1000005b  b           . + 4 + (0x5B << 2)
    ctx->pc = 0x265254u;
    {
        const bool branch_taken_0x265254 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x265258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265254u;
        // 0x265258: 0x7bb10020  lq          $s1, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265254) {
            ctx->pc = 0x2653C4u;
            goto label_2653c4;
        }
    }
    ctx->pc = 0x26525Cu;
label_26525c:
    // 0x26525c: 0x24020291  addiu       $v0, $zero, 0x291
    ctx->pc = 0x26525cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 657));
    // 0x265260: 0x12020021  beq         $s0, $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x265260u;
    {
        const bool branch_taken_0x265260 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x265264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265260u;
        // 0x265264: 0x24020293  addiu       $v0, $zero, 0x293 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 659));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265260) {
            ctx->pc = 0x2652E8u;
            goto label_2652e8;
        }
    }
    ctx->pc = 0x265268u;
    // 0x265268: 0x1202001f  beq         $s0, $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x265268u;
    {
        const bool branch_taken_0x265268 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x26526Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265268u;
        // 0x26526c: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265268) {
            ctx->pc = 0x2652E8u;
            goto label_2652e8;
        }
    }
    ctx->pc = 0x265270u;
    // 0x265270: 0x10000054  b           . + 4 + (0x54 << 2)
    ctx->pc = 0x265270u;
    {
        const bool branch_taken_0x265270 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x265274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265270u;
        // 0x265274: 0x7bb10020  lq          $s1, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265270) {
            ctx->pc = 0x2653C4u;
            goto label_2653c4;
        }
    }
    ctx->pc = 0x265278u;
label_265278:
    // 0x265278: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x265278u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
    // 0x26527c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x26527cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x265280: 0x2484e490  addiu       $a0, $a0, -0x1B70
    ctx->pc = 0x265280u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960272));
    // 0x265284: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x265284u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x265288: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x265288u;
    {
        const bool branch_taken_0x265288 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26528Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265288u;
        // 0x26528c: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265288) {
            ctx->pc = 0x265374u;
            goto label_265374;
        }
    }
    ctx->pc = 0x265290u;
label_265290:
    // 0x265290: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x265290u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
    // 0x265294: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x265294u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x265298: 0x2484e490  addiu       $a0, $a0, -0x1B70
    ctx->pc = 0x265298u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960272));
    // 0x26529c: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x26529cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2652a0: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x2652A0u;
    {
        const bool branch_taken_0x2652a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2652A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2652A0u;
        // 0x2652a4: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2652a0) {
            ctx->pc = 0x265374u;
            goto label_265374;
        }
    }
    ctx->pc = 0x2652A8u;
label_2652a8:
    // 0x2652a8: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x2652a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
    // 0x2652ac: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2652acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2652b0: 0x2484e490  addiu       $a0, $a0, -0x1B70
    ctx->pc = 0x2652b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960272));
    // 0x2652b4: 0x24060009  addiu       $a2, $zero, 0x9
    ctx->pc = 0x2652b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x2652b8: 0xc13b662  jal         func_4ED988
    ctx->pc = 0x2652B8u;
    SET_GPR_U32(ctx, 31, 0x2652C0u);
    ctx->pc = 0x2652BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2652B8u;
    // 0x2652bc: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4ED988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4ED988u, 0x2652B8u, 0x2652C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2652C0u;
label_2652c0:
    // 0x2652c0: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x2652C0u;
    {
        const bool branch_taken_0x2652c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2652C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2652C0u;
        // 0x2652c4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2652c0) {
            ctx->pc = 0x265380u;
            goto label_265380;
        }
    }
    ctx->pc = 0x2652C8u;
label_2652c8:
    // 0x2652c8: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x2652c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
    // 0x2652cc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2652ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2652d0: 0x2484e490  addiu       $a0, $a0, -0x1B70
    ctx->pc = 0x2652d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960272));
    // 0x2652d4: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x2652d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2652d8: 0xc13b662  jal         func_4ED988
    ctx->pc = 0x2652D8u;
    SET_GPR_U32(ctx, 31, 0x2652E0u);
    ctx->pc = 0x2652DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2652D8u;
    // 0x2652dc: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4ED988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4ED988u, 0x2652D8u, 0x2652E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2652E0u;
label_2652e0:
    // 0x2652e0: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x2652E0u;
    {
        const bool branch_taken_0x2652e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2652E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2652E0u;
        // 0x2652e4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2652e0) {
            ctx->pc = 0x265380u;
            goto label_265380;
        }
    }
    ctx->pc = 0x2652E8u;
label_2652e8:
    // 0x2652e8: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x2652e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
    // 0x2652ec: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2652ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2652f0: 0x2484e490  addiu       $a0, $a0, -0x1B70
    ctx->pc = 0x2652f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960272));
    // 0x2652f4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2652f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2652f8: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x2652F8u;
    {
        const bool branch_taken_0x2652f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2652FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2652F8u;
        // 0x2652fc: 0x24070003  addiu       $a3, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2652f8) {
            ctx->pc = 0x265374u;
            goto label_265374;
        }
    }
    ctx->pc = 0x265300u;
label_265300:
    // 0x265300: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x265300u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
    // 0x265304: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x265304u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x265308: 0x2484e490  addiu       $a0, $a0, -0x1B70
    ctx->pc = 0x265308u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960272));
    // 0x26530c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x26530cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x265310: 0xc13b662  jal         func_4ED988
    ctx->pc = 0x265310u;
    SET_GPR_U32(ctx, 31, 0x265318u);
    ctx->pc = 0x265314u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x265310u;
    // 0x265314: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4ED988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4ED988u, 0x265310u, 0x265318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x265318u;
label_265318:
    // 0x265318: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x265318u;
    {
        const bool branch_taken_0x265318 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26531Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265318u;
        // 0x26531c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265318) {
            ctx->pc = 0x265380u;
            goto label_265380;
        }
    }
    ctx->pc = 0x265320u;
label_265320:
    // 0x265320: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x265320u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
    // 0x265324: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x265324u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x265328: 0x2484e490  addiu       $a0, $a0, -0x1B70
    ctx->pc = 0x265328u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960272));
    // 0x26532c: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x26532cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x265330: 0xc13b662  jal         func_4ED988
    ctx->pc = 0x265330u;
    SET_GPR_U32(ctx, 31, 0x265338u);
    ctx->pc = 0x265334u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x265330u;
    // 0x265334: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4ED988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4ED988u, 0x265330u, 0x265338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x265338u;
label_265338:
    // 0x265338: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x265338u;
    {
        const bool branch_taken_0x265338 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26533Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265338u;
        // 0x26533c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265338) {
            ctx->pc = 0x265380u;
            goto label_265380;
        }
    }
    ctx->pc = 0x265340u;
label_265340:
    // 0x265340: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x265340u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
    // 0x265344: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x265344u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x265348: 0x2484e490  addiu       $a0, $a0, -0x1B70
    ctx->pc = 0x265348u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960272));
    // 0x26534c: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x26534cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x265350: 0xc13b662  jal         func_4ED988
    ctx->pc = 0x265350u;
    SET_GPR_U32(ctx, 31, 0x265358u);
    ctx->pc = 0x265354u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x265350u;
    // 0x265354: 0x24070005  addiu       $a3, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4ED988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4ED988u, 0x265350u, 0x265358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x265358u;
label_265358:
    // 0x265358: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x265358u;
    {
        const bool branch_taken_0x265358 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26535Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265358u;
        // 0x26535c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265358) {
            ctx->pc = 0x265380u;
            goto label_265380;
        }
    }
    ctx->pc = 0x265360u;
label_265360:
    // 0x265360: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x265360u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
    // 0x265364: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x265364u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x265368: 0x2484e490  addiu       $a0, $a0, -0x1B70
    ctx->pc = 0x265368u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960272));
    // 0x26536c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x26536cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x265370: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x265370u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_265374:
    // 0x265374: 0xc13b632  jal         func_4ED8C8
    ctx->pc = 0x265374u;
    SET_GPR_U32(ctx, 31, 0x26537Cu);
    ctx->pc = 0x4ED8C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4ED8C8u, 0x265374u, 0x26537Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26537Cu;
label_26537c:
    // 0x26537c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x26537cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_265380:
    // 0x265380: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x265380u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x265384: 0xc09933e  jal         func_264CF8
    ctx->pc = 0x265384u;
    SET_GPR_U32(ctx, 31, 0x26538Cu);
    ctx->pc = 0x265388u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x265384u;
    // 0x265388: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x264CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264CF8u, 0x265384u, 0x26538Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26538Cu;
label_26538c:
    // 0x26538c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x26538Cu;
    {
        const bool branch_taken_0x26538c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x265390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26538Cu;
        // 0x265390: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26538c) {
            ctx->pc = 0x2653C0u;
            goto label_2653c0;
        }
    }
    ctx->pc = 0x265394u;
label_265394:
    // 0x265394: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x265394u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
    // 0x265398: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x265398u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26539c: 0x2484e490  addiu       $a0, $a0, -0x1B70
    ctx->pc = 0x26539cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960272));
    // 0x2653a0: 0x2406000b  addiu       $a2, $zero, 0xB
    ctx->pc = 0x2653a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x2653a4: 0xc13b662  jal         func_4ED988
    ctx->pc = 0x2653A4u;
    SET_GPR_U32(ctx, 31, 0x2653ACu);
    ctx->pc = 0x2653A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2653A4u;
    // 0x2653a8: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4ED988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4ED988u, 0x2653A4u, 0x2653ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2653ACu;
label_2653ac:
    // 0x2653ac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2653acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2653b0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2653b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2653b4: 0xc09933e  jal         func_264CF8
    ctx->pc = 0x2653B4u;
    SET_GPR_U32(ctx, 31, 0x2653BCu);
    ctx->pc = 0x2653B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2653B4u;
    // 0x2653b8: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x264CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264CF8u, 0x2653B4u, 0x2653BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2653BCu;
label_2653bc:
    // 0x2653bc: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x2653bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2653c0:
    // 0x2653c0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2653c0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2653c4:
    // 0x2653c4: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x2653c4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2653c8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2653c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2653cc: 0x3e00008  jr          $ra
    ctx->pc = 0x2653CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2653D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2653CCu;
        // 0x2653d0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2653CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2653D4u;
    // 0x2653d4: 0x0  nop
    ctx->pc = 0x2653d4u;
    // NOP
    ctx->pc = 0x2653d8u;
}
