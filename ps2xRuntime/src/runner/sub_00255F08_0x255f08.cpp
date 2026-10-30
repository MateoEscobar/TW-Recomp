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

// Function: sub_00255F08
// Address: 0x255f08 - 0x2562d0
void sub_00255F08_0x255f08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00255F08_0x255f08");
#endif

    switch (ctx->pc) {
        case 0x255f28u: goto label_255f28;
        case 0x255f38u: goto label_255f38;
        case 0x255f40u: goto label_255f40;
        case 0x255f54u: goto label_255f54;
        case 0x255f90u: goto label_255f90;
        case 0x255fa0u: goto label_255fa0;
        case 0x255fb0u: goto label_255fb0;
        case 0x255fd0u: goto label_255fd0;
        case 0x255fe0u: goto label_255fe0;
        case 0x255ffcu: goto label_255ffc;
        case 0x25600cu: goto label_25600c;
        case 0x25601cu: goto label_25601c;
        case 0x25602cu: goto label_25602c;
        case 0x25603cu: goto label_25603c;
        case 0x256048u: goto label_256048;
        case 0x256058u: goto label_256058;
        case 0x256084u: goto label_256084;
        case 0x25608cu: goto label_25608c;
        case 0x256098u: goto label_256098;
        case 0x2560a8u: goto label_2560a8;
        case 0x2560b0u: goto label_2560b0;
        case 0x2560b8u: goto label_2560b8;
        case 0x2560c8u: goto label_2560c8;
        case 0x2560dcu: goto label_2560dc;
        case 0x256130u: goto label_256130;
        case 0x256138u: goto label_256138;
        case 0x25615cu: goto label_25615c;
        case 0x256168u: goto label_256168;
        case 0x25618cu: goto label_25618c;
        case 0x256198u: goto label_256198;
        case 0x2561a8u: goto label_2561a8;
        case 0x2561b0u: goto label_2561b0;
        case 0x2561e8u: goto label_2561e8;
        case 0x2561f0u: goto label_2561f0;
        case 0x256230u: goto label_256230;
        case 0x256240u: goto label_256240;
        case 0x256254u: goto label_256254;
        case 0x256260u: goto label_256260;
        case 0x2562b0u: goto label_2562b0;
        default: break;
    }

    ctx->pc = 0x255f08u;

    // 0x255f08: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x255f08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x255f0c: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x255f0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x255f10: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x255f10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x255f14: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x255f14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x255f18: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x255f18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x255f1c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x255f1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x255f20: 0xc0874fa  jal         func_21D3E8
    ctx->pc = 0x255F20u;
    SET_GPR_U32(ctx, 31, 0x255F28u);
    ctx->pc = 0x255F24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x255F20u;
    // 0x255f24: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D3E8u, 0x255F20u, 0x255F28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x255F28u;
label_255f28:
    // 0x255f28: 0x2624036c  addiu       $a0, $s1, 0x36C
    ctx->pc = 0x255f28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 876));
    // 0x255f2c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x255f2cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x255f30: 0xc0e4060  jal         func_390180
    ctx->pc = 0x255F30u;
    SET_GPR_U32(ctx, 31, 0x255F38u);
    ctx->pc = 0x255F34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x255F30u;
    // 0x255f34: 0x8e3200d4  lw          $s2, 0xD4($s1) (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x255F30u, 0x255F38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x255F38u;
label_255f38:
    // 0x255f38: 0xc0e6ee8  jal         func_39BBA0
    ctx->pc = 0x255F38u;
    SET_GPR_U32(ctx, 31, 0x255F40u);
    ctx->pc = 0x255F3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x255F38u;
    // 0x255f3c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39BBA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39BBA0u, 0x255F38u, 0x255F40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x255F40u;
label_255f40:
    // 0x255f40: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x255f40u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x255f44: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x255f44u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x255f48: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x255f48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x255f4c: 0xc089998  jal         func_226660
    ctx->pc = 0x255F4Cu;
    SET_GPR_U32(ctx, 31, 0x255F54u);
    ctx->pc = 0x255F50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x255F4Cu;
    // 0x255f50: 0x34a5ffff  ori         $a1, $a1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x226660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226660u, 0x255F4Cu, 0x255F54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x255F54u;
label_255f54:
    // 0x255f54: 0x1440003e  bnez        $v0, . + 4 + (0x3E << 2)
    ctx->pc = 0x255F54u;
    {
        const bool branch_taken_0x255f54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x255f54) {
            ctx->pc = 0x256050u;
            goto label_256050;
        }
    }
    ctx->pc = 0x255F5Cu;
    // 0x255f5c: 0x12600054  beqz        $s3, . + 4 + (0x54 << 2)
    ctx->pc = 0x255F5Cu;
    {
        const bool branch_taken_0x255f5c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x255f5c) {
            ctx->pc = 0x2560B0u;
            goto label_2560b0;
        }
    }
    ctx->pc = 0x255F64u;
    // 0x255f64: 0x822201b0  lb          $v0, 0x1B0($s1)
    ctx->pc = 0x255f64u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 432)));
    // 0x255f68: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x255f68u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x255f6c: 0x50400012  beql        $v0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x255F6Cu;
    {
        const bool branch_taken_0x255f6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x255f6c) {
            ctx->pc = 0x255F70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x255F6Cu;
            // 0x255f70: 0x8e430014  lw          $v1, 0x14($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x255FB8u;
            goto label_255fb8;
        }
    }
    ctx->pc = 0x255F74u;
    // 0x255f74: 0x8e420014  lw          $v0, 0x14($s2)
    ctx->pc = 0x255f74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x255f78: 0x2442ffe9  addiu       $v0, $v0, -0x17
    ctx->pc = 0x255f78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967273));
    // 0x255f7c: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x255f7cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x255f80: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x255F80u;
    {
        const bool branch_taken_0x255f80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x255F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255F80u;
        // 0x255f84: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x255f80) {
            ctx->pc = 0x255F98u;
            goto label_255f98;
        }
    }
    ctx->pc = 0x255F88u;
    // 0x255f88: 0xc08997c  jal         func_2265F0
    ctx->pc = 0x255F88u;
    SET_GPR_U32(ctx, 31, 0x255F90u);
    ctx->pc = 0x255F8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x255F88u;
    // 0x255f8c: 0x3c050200  lui         $a1, 0x200 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)512 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265F0u, 0x255F88u, 0x255F90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x255F90u;
label_255f90:
    // 0x255f90: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x255F90u;
    {
        const bool branch_taken_0x255f90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x255f90) {
            ctx->pc = 0x255FA8u;
            goto label_255fa8;
        }
    }
    ctx->pc = 0x255F98u;
label_255f98:
    // 0x255f98: 0xc09cf18  jal         func_273C60
    ctx->pc = 0x255F98u;
    SET_GPR_U32(ctx, 31, 0x255FA0u);
    ctx->pc = 0x255F9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x255F98u;
    // 0x255f9c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x273C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x273C60u, 0x255F98u, 0x255FA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x255FA0u;
label_255fa0:
    // 0x255fa0: 0x100000c5  b           . + 4 + (0xC5 << 2)
    ctx->pc = 0x255FA0u;
    {
        const bool branch_taken_0x255fa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x255FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255FA0u;
        // 0x255fa4: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x255fa0) {
            ctx->pc = 0x2562B8u;
            goto label_2562b8;
        }
    }
    ctx->pc = 0x255FA8u;
label_255fa8:
    // 0x255fa8: 0xc08ba12  jal         func_22E848
    ctx->pc = 0x255FA8u;
    SET_GPR_U32(ctx, 31, 0x255FB0u);
    ctx->pc = 0x255FACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x255FA8u;
    // 0x255fac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22E848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E848u, 0x255FA8u, 0x255FB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x255FB0u;
label_255fb0:
    // 0x255fb0: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x255FB0u;
    {
        const bool branch_taken_0x255fb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x255fb0) {
            ctx->pc = 0x2560B0u;
            goto label_2560b0;
        }
    }
    ctx->pc = 0x255FB8u;
label_255fb8:
    // 0x255fb8: 0x24020017  addiu       $v0, $zero, 0x17
    ctx->pc = 0x255fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x255fbc: 0x5462000a  bnel        $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x255FBCu;
    {
        const bool branch_taken_0x255fbc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x255fbc) {
            ctx->pc = 0x255FC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x255FBCu;
            // 0x255fc0: 0x8e430014  lw          $v1, 0x14($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x255FE8u;
            goto label_255fe8;
        }
    }
    ctx->pc = 0x255FC4u;
    // 0x255fc4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x255fc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x255fc8: 0xc08997c  jal         func_2265F0
    ctx->pc = 0x255FC8u;
    SET_GPR_U32(ctx, 31, 0x255FD0u);
    ctx->pc = 0x255FCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x255FC8u;
    // 0x255fcc: 0x3c050200  lui         $a1, 0x200 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)512 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265F0u, 0x255FC8u, 0x255FD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x255FD0u;
label_255fd0:
    // 0x255fd0: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x255FD0u;
    {
        const bool branch_taken_0x255fd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x255fd0) {
            ctx->pc = 0x255FD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x255FD0u;
            // 0x255fd4: 0x8e430014  lw          $v1, 0x14($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x255FE8u;
            goto label_255fe8;
        }
    }
    ctx->pc = 0x255FD8u;
    // 0x255fd8: 0xc09e006  jal         func_278018
    ctx->pc = 0x255FD8u;
    SET_GPR_U32(ctx, 31, 0x255FE0u);
    ctx->pc = 0x255FDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x255FD8u;
    // 0x255fdc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x278018u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x278018u, 0x255FD8u, 0x255FE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x255FE0u;
label_255fe0:
    // 0x255fe0: 0x100000b4  b           . + 4 + (0xB4 << 2)
    ctx->pc = 0x255FE0u;
    {
        const bool branch_taken_0x255fe0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x255FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255FE0u;
        // 0x255fe4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x255fe0) {
            ctx->pc = 0x2562B4u;
            goto label_2562b4;
        }
    }
    ctx->pc = 0x255FE8u;
label_255fe8:
    // 0x255fe8: 0x24020018  addiu       $v0, $zero, 0x18
    ctx->pc = 0x255fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x255fec: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x255FECu;
    {
        const bool branch_taken_0x255fec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x255FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255FECu;
        // 0x255ff0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x255fec) {
            ctx->pc = 0x256014u;
            goto label_256014;
        }
    }
    ctx->pc = 0x255FF4u;
    // 0x255ff4: 0xc08997c  jal         func_2265F0
    ctx->pc = 0x255FF4u;
    SET_GPR_U32(ctx, 31, 0x255FFCu);
    ctx->pc = 0x255FF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x255FF4u;
    // 0x255ff8: 0x3c050200  lui         $a1, 0x200 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)512 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265F0u, 0x255FF4u, 0x255FFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x255FFCu;
label_255ffc:
    // 0x255ffc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x255FFCu;
    {
        const bool branch_taken_0x255ffc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x256000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255FFCu;
        // 0x256000: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x255ffc) {
            ctx->pc = 0x256014u;
            goto label_256014;
        }
    }
    ctx->pc = 0x256004u;
    // 0x256004: 0xc09e0ec  jal         func_2783B0
    ctx->pc = 0x256004u;
    SET_GPR_U32(ctx, 31, 0x25600Cu);
    ctx->pc = 0x256008u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x256004u;
    // 0x256008: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2783B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2783B0u, 0x256004u, 0x25600Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25600Cu;
label_25600c:
    // 0x25600c: 0x100000a9  b           . + 4 + (0xA9 << 2)
    ctx->pc = 0x25600Cu;
    {
        const bool branch_taken_0x25600c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x256010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25600Cu;
        // 0x256010: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25600c) {
            ctx->pc = 0x2562B4u;
            goto label_2562b4;
        }
    }
    ctx->pc = 0x256014u;
label_256014:
    // 0x256014: 0xc08997c  jal         func_2265F0
    ctx->pc = 0x256014u;
    SET_GPR_U32(ctx, 31, 0x25601Cu);
    ctx->pc = 0x256018u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x256014u;
    // 0x256018: 0x3c050200  lui         $a1, 0x200 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)512 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265F0u, 0x256014u, 0x25601Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25601Cu;
label_25601c:
    // 0x25601c: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x25601Cu;
    {
        const bool branch_taken_0x25601c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25601c) {
            ctx->pc = 0x2560B0u;
            goto label_2560b0;
        }
    }
    ctx->pc = 0x256024u;
    // 0x256024: 0xc09ee9a  jal         func_27BA68
    ctx->pc = 0x256024u;
    SET_GPR_U32(ctx, 31, 0x25602Cu);
    ctx->pc = 0x256028u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x256024u;
    // 0x256028: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27BA68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27BA68u, 0x256024u, 0x25602Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25602Cu;
label_25602c:
    // 0x25602c: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x25602Cu;
    {
        const bool branch_taken_0x25602c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25602c) {
            ctx->pc = 0x2560B0u;
            goto label_2560b0;
        }
    }
    ctx->pc = 0x256034u;
    // 0x256034: 0xc09e0ec  jal         func_2783B0
    ctx->pc = 0x256034u;
    SET_GPR_U32(ctx, 31, 0x25603Cu);
    ctx->pc = 0x256038u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x256034u;
    // 0x256038: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2783B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2783B0u, 0x256034u, 0x25603Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25603Cu;
label_25603c:
    // 0x25603c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x25603cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x256040: 0xc0899aa  jal         func_2266A8
    ctx->pc = 0x256040u;
    SET_GPR_U32(ctx, 31, 0x256048u);
    ctx->pc = 0x256044u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x256040u;
    // 0x256044: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266A8u, 0x256040u, 0x256048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x256048u;
label_256048:
    // 0x256048: 0x1000009a  b           . + 4 + (0x9A << 2)
    ctx->pc = 0x256048u;
    {
        const bool branch_taken_0x256048 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25604Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256048u;
        // 0x25604c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256048) {
            ctx->pc = 0x2562B4u;
            goto label_2562b4;
        }
    }
    ctx->pc = 0x256050u;
label_256050:
    // 0x256050: 0xc0899ae  jal         func_2266B8
    ctx->pc = 0x256050u;
    SET_GPR_U32(ctx, 31, 0x256058u);
    ctx->pc = 0x256054u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x256050u;
    // 0x256054: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266B8u, 0x256050u, 0x256058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x256058u;
label_256058:
    // 0x256058: 0x24030151  addiu       $v1, $zero, 0x151
    ctx->pc = 0x256058u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 337));
    // 0x25605c: 0x14430014  bne         $v0, $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x25605Cu;
    {
        const bool branch_taken_0x25605c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x25605c) {
            ctx->pc = 0x2560B0u;
            goto label_2560b0;
        }
    }
    ctx->pc = 0x256064u;
    // 0x256064: 0x12600012  beqz        $s3, . + 4 + (0x12 << 2)
    ctx->pc = 0x256064u;
    {
        const bool branch_taken_0x256064 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x256064) {
            ctx->pc = 0x2560B0u;
            goto label_2560b0;
        }
    }
    ctx->pc = 0x25606Cu;
    // 0x25606c: 0x8e42013c  lw          $v0, 0x13C($s2)
    ctx->pc = 0x25606cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 316)));
    // 0x256070: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x256070u;
    {
        const bool branch_taken_0x256070 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x256070) {
            ctx->pc = 0x2560B0u;
            goto label_2560b0;
        }
    }
    ctx->pc = 0x256078u;
    // 0x256078: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x256078u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
    // 0x25607c: 0xc0e8b48  jal         func_3A2D20
    ctx->pc = 0x25607Cu;
    SET_GPR_U32(ctx, 31, 0x256084u);
    ctx->pc = 0x256080u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25607Cu;
    // 0x256080: 0x8e042c7c  lw          $a0, 0x2C7C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D20u, 0x25607Cu, 0x256084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x256084u;
label_256084:
    // 0x256084: 0xc09d38e  jal         func_274E38
    ctx->pc = 0x256084u;
    SET_GPR_U32(ctx, 31, 0x25608Cu);
    ctx->pc = 0x256088u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x256084u;
    // 0x256088: 0x8e44013c  lw          $a0, 0x13C($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 316)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x274E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274E38u, 0x256084u, 0x25608Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25608Cu;
label_25608c:
    // 0x25608c: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x25608cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    // 0x256090: 0xc0e8b78  jal         func_3A2DE0
    ctx->pc = 0x256090u;
    SET_GPR_U32(ctx, 31, 0x256098u);
    ctx->pc = 0x256094u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x256090u;
    // 0x256094: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2DE0u, 0x256090u, 0x256098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x256098u;
label_256098:
    // 0x256098: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x256098u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    // 0x25609c: 0x24060041  addiu       $a2, $zero, 0x41
    ctx->pc = 0x25609cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x2560a0: 0xc0e8b80  jal         func_3A2E00
    ctx->pc = 0x2560A0u;
    SET_GPR_U32(ctx, 31, 0x2560A8u);
    ctx->pc = 0x2560A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2560A0u;
    // 0x2560a4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2E00u, 0x2560A0u, 0x2560A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2560A8u;
label_2560a8:
    // 0x2560a8: 0xc0e8b50  jal         func_3A2D40
    ctx->pc = 0x2560A8u;
    SET_GPR_U32(ctx, 31, 0x2560B0u);
    ctx->pc = 0x2560ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2560A8u;
    // 0x2560ac: 0x8e042c7c  lw          $a0, 0x2C7C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D40u, 0x2560A8u, 0x2560B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2560B0u;
label_2560b0:
    // 0x2560b0: 0xc08a014  jal         func_228050
    ctx->pc = 0x2560B0u;
    SET_GPR_U32(ctx, 31, 0x2560B8u);
    ctx->pc = 0x2560B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2560B0u;
    // 0x2560b4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228050u, 0x2560B0u, 0x2560B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2560B8u;
label_2560b8:
    // 0x2560b8: 0x1040007e  beqz        $v0, . + 4 + (0x7E << 2)
    ctx->pc = 0x2560B8u;
    {
        const bool branch_taken_0x2560b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2560BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2560B8u;
        // 0x2560bc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2560b8) {
            ctx->pc = 0x2562B4u;
            goto label_2562b4;
        }
    }
    ctx->pc = 0x2560C0u;
    // 0x2560c0: 0xc088ac6  jal         func_222B18
    ctx->pc = 0x2560C0u;
    SET_GPR_U32(ctx, 31, 0x2560C8u);
    ctx->pc = 0x2560C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2560C0u;
    // 0x2560c4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222B18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222B18u, 0x2560C0u, 0x2560C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2560C8u;
label_2560c8:
    // 0x2560c8: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x2560c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x2560cc: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2560ccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2560d0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2560d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2560d4: 0xc089998  jal         func_226660
    ctx->pc = 0x2560D4u;
    SET_GPR_U32(ctx, 31, 0x2560DCu);
    ctx->pc = 0x2560D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2560D4u;
    // 0x2560d8: 0x34a5ffff  ori         $a1, $a1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x226660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226660u, 0x2560D4u, 0x2560DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2560DCu;
label_2560dc:
    // 0x2560dc: 0x54400062  bnel        $v0, $zero, . + 4 + (0x62 << 2)
    ctx->pc = 0x2560DCu;
    {
        const bool branch_taken_0x2560dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2560dc) {
            ctx->pc = 0x2560E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2560DCu;
            // 0x2560e0: 0x96430046  lhu         $v1, 0x46($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 70)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x256268u;
            goto label_256268;
        }
    }
    ctx->pc = 0x2560E4u;
    // 0x2560e4: 0x96430046  lhu         $v1, 0x46($s2)
    ctx->pc = 0x2560e4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 70)));
    // 0x2560e8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2560e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2560ec: 0x1062002c  beq         $v1, $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x2560ECu;
    {
        const bool branch_taken_0x2560ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2560F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2560ECu;
        // 0x2560f0: 0x28620003  slti        $v0, $v1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2560ec) {
            ctx->pc = 0x2561A0u;
            goto label_2561a0;
        }
    }
    ctx->pc = 0x2560F4u;
    // 0x2560f4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2560F4u;
    {
        const bool branch_taken_0x2560f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2560F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2560F4u;
        // 0x2560f8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2560f4) {
            ctx->pc = 0x25610Cu;
            goto label_25610c;
        }
    }
    ctx->pc = 0x2560FCu;
    // 0x2560fc: 0x1062000a  beq         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2560FCu;
    {
        const bool branch_taken_0x2560fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2560fc) {
            ctx->pc = 0x256128u;
            goto label_256128;
        }
    }
    ctx->pc = 0x256104u;
    // 0x256104: 0x10000058  b           . + 4 + (0x58 << 2)
    ctx->pc = 0x256104u;
    {
        const bool branch_taken_0x256104 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x256108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256104u;
        // 0x256108: 0x96430046  lhu         $v1, 0x46($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 70)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256104) {
            ctx->pc = 0x256268u;
            goto label_256268;
        }
    }
    ctx->pc = 0x25610Cu;
label_25610c:
    // 0x25610c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x25610cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x256110: 0x10620033  beq         $v1, $v0, . + 4 + (0x33 << 2)
    ctx->pc = 0x256110u;
    {
        const bool branch_taken_0x256110 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x256114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256110u;
        // 0x256114: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256110) {
            ctx->pc = 0x2561E0u;
            goto label_2561e0;
        }
    }
    ctx->pc = 0x256118u;
    // 0x256118: 0x10620047  beq         $v1, $v0, . + 4 + (0x47 << 2)
    ctx->pc = 0x256118u;
    {
        const bool branch_taken_0x256118 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x256118) {
            ctx->pc = 0x256238u;
            goto label_256238;
        }
    }
    ctx->pc = 0x256120u;
    // 0x256120: 0x10000051  b           . + 4 + (0x51 << 2)
    ctx->pc = 0x256120u;
    {
        const bool branch_taken_0x256120 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x256124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256120u;
        // 0x256124: 0x96430046  lhu         $v1, 0x46($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 70)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256120) {
            ctx->pc = 0x256268u;
            goto label_256268;
        }
    }
    ctx->pc = 0x256128u;
label_256128:
    // 0x256128: 0xc089a54  jal         func_226950
    ctx->pc = 0x256128u;
    SET_GPR_U32(ctx, 31, 0x256130u);
    ctx->pc = 0x25612Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x256128u;
    // 0x25612c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226950u, 0x256128u, 0x256130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x256130u;
label_256130:
    // 0x256130: 0xc08a61a  jal         func_229868
    ctx->pc = 0x256130u;
    SET_GPR_U32(ctx, 31, 0x256138u);
    ctx->pc = 0x256134u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x256130u;
    // 0x256134: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x256130u, 0x256138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x256138u;
label_256138:
    // 0x256138: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x256138u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25613c: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x25613Cu;
    {
        const bool branch_taken_0x25613c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x256140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25613Cu;
        // 0x256140: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25613c) {
            ctx->pc = 0x256154u;
            goto label_256154;
        }
    }
    ctx->pc = 0x256144u;
    // 0x256144: 0x86440040  lh          $a0, 0x40($s2)
    ctx->pc = 0x256144u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 64)));
    // 0x256148: 0x4810009  bgez        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x256148u;
    {
        const bool branch_taken_0x256148 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x25614Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256148u;
        // 0x25614c: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256148) {
            ctx->pc = 0x256170u;
            goto label_256170;
        }
    }
    ctx->pc = 0x256150u;
    // 0x256150: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x256150u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_256154:
    // 0x256154: 0xc0a03f6  jal         func_280FD8
    ctx->pc = 0x256154u;
    SET_GPR_U32(ctx, 31, 0x25615Cu);
    ctx->pc = 0x256158u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x256154u;
    // 0x256158: 0x24050bb8  addiu       $a1, $zero, 0xBB8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x280FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x280FD8u, 0x256154u, 0x25615Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25615Cu;
label_25615c:
    // 0x25615c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x25615cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x256160: 0xc09829c  jal         func_260A70
    ctx->pc = 0x256160u;
    SET_GPR_U32(ctx, 31, 0x256168u);
    ctx->pc = 0x256164u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x256160u;
    // 0x256164: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x260A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x260A70u, 0x256160u, 0x256168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x256168u;
label_256168:
    // 0x256168: 0x10000052  b           . + 4 + (0x52 << 2)
    ctx->pc = 0x256168u;
    {
        const bool branch_taken_0x256168 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25616Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256168u;
        // 0x25616c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256168) {
            ctx->pc = 0x2562B4u;
            goto label_2562b4;
        }
    }
    ctx->pc = 0x256170u;
label_256170:
    // 0x256170: 0x8c6202b8  lw          $v0, 0x2B8($v1)
    ctx->pc = 0x256170u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 696)));
    // 0x256174: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x256174u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x256178: 0x5440003b  bnel        $v0, $zero, . + 4 + (0x3B << 2)
    ctx->pc = 0x256178u;
    {
        const bool branch_taken_0x256178 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x256178) {
            ctx->pc = 0x25617Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x256178u;
            // 0x25617c: 0x96430046  lhu         $v1, 0x46($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 70)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x256268u;
            goto label_256268;
        }
    }
    ctx->pc = 0x256180u;
    // 0x256180: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x256180u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x256184: 0xc0a03f6  jal         func_280FD8
    ctx->pc = 0x256184u;
    SET_GPR_U32(ctx, 31, 0x25618Cu);
    ctx->pc = 0x256188u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x256184u;
    // 0x256188: 0x24050bb8  addiu       $a1, $zero, 0xBB8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x280FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x280FD8u, 0x256184u, 0x25618Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25618Cu;
label_25618c:
    // 0x25618c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x25618cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x256190: 0xc0981ba  jal         func_2606E8
    ctx->pc = 0x256190u;
    SET_GPR_U32(ctx, 31, 0x256198u);
    ctx->pc = 0x256194u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x256190u;
    // 0x256194: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2606E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2606E8u, 0x256190u, 0x256198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x256198u;
label_256198:
    // 0x256198: 0x10000046  b           . + 4 + (0x46 << 2)
    ctx->pc = 0x256198u;
    {
        const bool branch_taken_0x256198 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25619Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256198u;
        // 0x25619c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256198) {
            ctx->pc = 0x2562B4u;
            goto label_2562b4;
        }
    }
    ctx->pc = 0x2561A0u;
label_2561a0:
    // 0x2561a0: 0xc089c18  jal         func_227060
    ctx->pc = 0x2561A0u;
    SET_GPR_U32(ctx, 31, 0x2561A8u);
    ctx->pc = 0x2561A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2561A0u;
    // 0x2561a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227060u, 0x2561A0u, 0x2561A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2561A8u;
label_2561a8:
    // 0x2561a8: 0xc0e57ce  jal         func_395F38
    ctx->pc = 0x2561A8u;
    SET_GPR_U32(ctx, 31, 0x2561B0u);
    ctx->pc = 0x2561ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2561A8u;
    // 0x2561ac: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x395F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395F38u, 0x2561A8u, 0x2561B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2561B0u;
label_2561b0:
    // 0x2561b0: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2561B0u;
    {
        const bool branch_taken_0x2561b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2561b0) {
            ctx->pc = 0x2561B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2561B0u;
            // 0x2561b4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2561C8u;
            goto label_2561c8;
        }
    }
    ctx->pc = 0x2561B8u;
    // 0x2561b8: 0x86430042  lh          $v1, 0x42($s2)
    ctx->pc = 0x2561b8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 66)));
    // 0x2561bc: 0x4610004  bgez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2561BCu;
    {
        const bool branch_taken_0x2561bc = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x2561C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2561BCu;
        // 0x2561c0: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2561bc) {
            ctx->pc = 0x2561D0u;
            goto label_2561d0;
        }
    }
    ctx->pc = 0x2561C4u;
    // 0x2561c4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2561c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2561c8:
    // 0x2561c8: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x2561C8u;
    {
        const bool branch_taken_0x2561c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2561CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2561C8u;
        // 0x2561cc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2561c8) {
            ctx->pc = 0x256228u;
            goto label_256228;
        }
    }
    ctx->pc = 0x2561D0u;
label_2561d0:
    // 0x2561d0: 0x54620025  bnel        $v1, $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x2561D0u;
    {
        const bool branch_taken_0x2561d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2561d0) {
            ctx->pc = 0x2561D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2561D0u;
            // 0x2561d4: 0x96430046  lhu         $v1, 0x46($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 70)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x256268u;
            goto label_256268;
        }
    }
    ctx->pc = 0x2561D8u;
    // 0x2561d8: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x2561D8u;
    {
        const bool branch_taken_0x2561d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2561DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2561D8u;
        // 0x2561dc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2561d8) {
            ctx->pc = 0x256224u;
            goto label_256224;
        }
    }
    ctx->pc = 0x2561E0u;
label_2561e0:
    // 0x2561e0: 0xc089c18  jal         func_227060
    ctx->pc = 0x2561E0u;
    SET_GPR_U32(ctx, 31, 0x2561E8u);
    ctx->pc = 0x2561E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2561E0u;
    // 0x2561e4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227060u, 0x2561E0u, 0x2561E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2561E8u;
label_2561e8:
    // 0x2561e8: 0xc0e57ce  jal         func_395F38
    ctx->pc = 0x2561E8u;
    SET_GPR_U32(ctx, 31, 0x2561F0u);
    ctx->pc = 0x2561ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2561E8u;
    // 0x2561ec: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x395F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395F38u, 0x2561E8u, 0x2561F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2561F0u;
label_2561f0:
    // 0x2561f0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2561F0u;
    {
        const bool branch_taken_0x2561f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2561F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2561F0u;
        // 0x2561f4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2561f0) {
            ctx->pc = 0x256208u;
            goto label_256208;
        }
    }
    ctx->pc = 0x2561F8u;
    // 0x2561f8: 0x86440040  lh          $a0, 0x40($s2)
    ctx->pc = 0x2561f8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 64)));
    // 0x2561fc: 0x1c800004  bgtz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2561FCu;
    {
        const bool branch_taken_0x2561fc = (GPR_S32(ctx, 4) > 0);
        ctx->pc = 0x256200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2561FCu;
        // 0x256200: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2561fc) {
            ctx->pc = 0x256210u;
            goto label_256210;
        }
    }
    ctx->pc = 0x256204u;
    // 0x256204: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x256204u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_256208:
    // 0x256208: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x256208u;
    {
        const bool branch_taken_0x256208 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25620Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256208u;
        // 0x25620c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256208) {
            ctx->pc = 0x256228u;
            goto label_256228;
        }
    }
    ctx->pc = 0x256210u;
label_256210:
    // 0x256210: 0x8c6202b8  lw          $v0, 0x2B8($v1)
    ctx->pc = 0x256210u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 696)));
    // 0x256214: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x256214u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x256218: 0x54400013  bnel        $v0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x256218u;
    {
        const bool branch_taken_0x256218 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x256218) {
            ctx->pc = 0x25621Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x256218u;
            // 0x25621c: 0x96430046  lhu         $v1, 0x46($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 70)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x256268u;
            goto label_256268;
        }
    }
    ctx->pc = 0x256220u;
    // 0x256220: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x256220u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_256224:
    // 0x256224: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x256224u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_256228:
    // 0x256228: 0xc09e18a  jal         func_278628
    ctx->pc = 0x256228u;
    SET_GPR_U32(ctx, 31, 0x256230u);
    ctx->pc = 0x278628u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x278628u, 0x256228u, 0x256230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x256230u;
label_256230:
    // 0x256230: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x256230u;
    {
        const bool branch_taken_0x256230 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x256234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256230u;
        // 0x256234: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256230) {
            ctx->pc = 0x2562B4u;
            goto label_2562b4;
        }
    }
    ctx->pc = 0x256238u;
label_256238:
    // 0x256238: 0xc09ae12  jal         func_26B848
    ctx->pc = 0x256238u;
    SET_GPR_U32(ctx, 31, 0x256240u);
    ctx->pc = 0x25623Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x256238u;
    // 0x25623c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26B848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26B848u, 0x256238u, 0x256240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x256240u;
label_256240:
    // 0x256240: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x256240u;
    {
        const bool branch_taken_0x256240 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x256240) {
            ctx->pc = 0x256244u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x256240u;
            // 0x256244: 0x96430046  lhu         $v1, 0x46($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 70)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x256268u;
            goto label_256268;
        }
    }
    ctx->pc = 0x256248u;
    // 0x256248: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x256248u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25624c: 0xc08b900  jal         func_22E400
    ctx->pc = 0x25624Cu;
    SET_GPR_U32(ctx, 31, 0x256254u);
    ctx->pc = 0x256250u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25624Cu;
    // 0x256250: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22E400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E400u, 0x25624Cu, 0x256254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x256254u;
label_256254:
    // 0x256254: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x256254u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x256258: 0xc089974  jal         func_2265D0
    ctx->pc = 0x256258u;
    SET_GPR_U32(ctx, 31, 0x256260u);
    ctx->pc = 0x25625Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x256258u;
    // 0x25625c: 0x3c052000  lui         $a1, 0x2000 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8192 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265D0u, 0x256258u, 0x256260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x256260u;
label_256260:
    // 0x256260: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x256260u;
    {
        const bool branch_taken_0x256260 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x256264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256260u;
        // 0x256264: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256260) {
            ctx->pc = 0x2562B4u;
            goto label_2562b4;
        }
    }
    ctx->pc = 0x256268u;
label_256268:
    // 0x256268: 0x2462fffe  addiu       $v0, $v1, -0x2
    ctx->pc = 0x256268u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967294));
    // 0x25626c: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x25626cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x256270: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x256270u;
    {
        const bool branch_taken_0x256270 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x256274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256270u;
        // 0x256274: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256270) {
            ctx->pc = 0x2562B4u;
            goto label_2562b4;
        }
    }
    ctx->pc = 0x256278u;
    // 0x256278: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x256278u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x25627c: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x25627Cu;
    {
        const bool branch_taken_0x25627c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x256280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25627Cu;
        // 0x256280: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25627c) {
            ctx->pc = 0x2562B0u;
            goto label_2562b0;
        }
    }
    ctx->pc = 0x256284u;
    // 0x256284: 0x86430040  lh          $v1, 0x40($s2)
    ctx->pc = 0x256284u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 64)));
    // 0x256288: 0xc44002b8  lwc1        $f0, 0x2B8($v0)
    ctx->pc = 0x256288u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 696)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25628c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x25628cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x256290: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x256290u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x256294: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x256294u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x256298: 0x0  nop
    ctx->pc = 0x256298u;
    // NOP
    // 0x25629c: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x25629cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x2562a0: 0x8e250380  lw          $a1, 0x380($s1)
    ctx->pc = 0x2562a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 896)));
    // 0x2562a4: 0x46006303  div.s       $f12, $f12, $f0
    ctx->pc = 0x2562a4u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[12], ctx->f[0]); }
    // 0x2562a8: 0xc06cf1e  jal         func_1B3C78
    ctx->pc = 0x2562A8u;
    SET_GPR_U32(ctx, 31, 0x2562B0u);
    ctx->pc = 0x2562ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2562A8u;
    // 0x2562ac: 0x24840840  addiu       $a0, $a0, 0x840 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3C78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3C78u, 0x2562A8u, 0x2562B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2562B0u;
label_2562b0:
    // 0x2562b0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2562b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2562b4:
    // 0x2562b4: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x2562b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2562b8:
    // 0x2562b8: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x2562b8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2562bc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2562bcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2562c0: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x2562c0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2562c4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2562c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2562c8: 0x3e00008  jr          $ra
    ctx->pc = 0x2562C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2562CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2562C8u;
        // 0x2562cc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2562C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2562D0u;
}
