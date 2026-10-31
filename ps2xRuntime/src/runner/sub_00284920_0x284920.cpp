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

// Function: sub_00284920
// Address: 0x284920 - 0x284ca0
void sub_00284920_0x284920(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00284920_0x284920");
#endif

    switch (ctx->pc) {
        case 0x28493cu: goto label_28493c;
        case 0x284950u: goto label_284950;
        case 0x2849b0u: goto label_2849b0;
        case 0x2849dcu: goto label_2849dc;
        case 0x2849ecu: goto label_2849ec;
        case 0x284a00u: goto label_284a00;
        case 0x284a14u: goto label_284a14;
        case 0x284a20u: goto label_284a20;
        case 0x284a28u: goto label_284a28;
        case 0x284a50u: goto label_284a50;
        case 0x284a60u: goto label_284a60;
        case 0x284a70u: goto label_284a70;
        case 0x284a80u: goto label_284a80;
        case 0x284a98u: goto label_284a98;
        case 0x284ab0u: goto label_284ab0;
        case 0x284b04u: goto label_284b04;
        case 0x284b14u: goto label_284b14;
        case 0x284b28u: goto label_284b28;
        case 0x284b3cu: goto label_284b3c;
        case 0x284b48u: goto label_284b48;
        case 0x284b50u: goto label_284b50;
        case 0x284b78u: goto label_284b78;
        case 0x284b88u: goto label_284b88;
        case 0x284b98u: goto label_284b98;
        case 0x284ba8u: goto label_284ba8;
        case 0x284bb8u: goto label_284bb8;
        case 0x284bc8u: goto label_284bc8;
        case 0x284bdcu: goto label_284bdc;
        case 0x284becu: goto label_284bec;
        case 0x284bfcu: goto label_284bfc;
        case 0x284c10u: goto label_284c10;
        case 0x284c20u: goto label_284c20;
        case 0x284c30u: goto label_284c30;
        case 0x284c58u: goto label_284c58;
        case 0x284c70u: goto label_284c70;
        case 0x284c84u: goto label_284c84;
        default: break;
    }

    ctx->pc = 0x284920u;

    // 0x284920: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x284920u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x284924: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x284924u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x284928: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x284928u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x28492c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x28492cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x284930: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x284930u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x284934: 0xc0874fa  jal         func_21D3E8
    ctx->pc = 0x284934u;
    SET_GPR_U32(ctx, 31, 0x28493Cu);
    ctx->pc = 0x284938u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x284934u;
    // 0x284938: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D3E8u, 0x284934u, 0x28493Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28493Cu;
label_28493c:
    // 0x28493c: 0x3c050fc7  lui         $a1, 0xFC7
    ctx->pc = 0x28493cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4039 << 16));
    // 0x284940: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x284940u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x284944: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x284944u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x284948: 0xc089998  jal         func_226660
    ctx->pc = 0x284948u;
    SET_GPR_U32(ctx, 31, 0x284950u);
    ctx->pc = 0x28494Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x284948u;
    // 0x28494c: 0x34a5eaf7  ori         $a1, $a1, 0xEAF7 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)60151);
    ctx->in_delay_slot = false;
    ctx->pc = 0x226660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226660u, 0x284948u, 0x284950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284950u;
label_284950:
    // 0x284950: 0x144000cd  bnez        $v0, . + 4 + (0xCD << 2)
    ctx->pc = 0x284950u;
    {
        const bool branch_taken_0x284950 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x284954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284950u;
        // 0x284954: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284950) {
            ctx->pc = 0x284C88u;
            goto label_284c88;
        }
    }
    ctx->pc = 0x284958u;
    // 0x284958: 0x3c020056  lui         $v0, 0x56
    ctx->pc = 0x284958u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
    // 0x28495c: 0x860301be  lh          $v1, 0x1BE($s0)
    ctx->pc = 0x28495cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 446)));
    // 0x284960: 0x2444ee00  addiu       $a0, $v0, -0x1200
    ctx->pc = 0x284960u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962688));
    // 0x284964: 0x84820002  lh          $v0, 0x2($a0)
    ctx->pc = 0x284964u;
    SET_GPR_S32(ctx, 2, (int16_t)FAST_READ16(0x55EE02u));
    // 0x284968: 0x1462000d  bne         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x284968u;
    {
        const bool branch_taken_0x284968 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x28496Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284968u;
        // 0x28496c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284968) {
            ctx->pc = 0x2849A0u;
            goto label_2849a0;
        }
    }
    ctx->pc = 0x284970u;
    // 0x284970: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x284970u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x284974: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x284974u;
    {
        const bool branch_taken_0x284974 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x284978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284974u;
        // 0x284978: 0x3c020024  lui         $v0, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)36 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284974) {
            ctx->pc = 0x28498Cu;
            goto label_28498c;
        }
    }
    ctx->pc = 0x28497Cu;
    // 0x28497c: 0x84830004  lh          $v1, 0x4($a0)
    ctx->pc = 0x28497cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x284980: 0x860201c0  lh          $v0, 0x1C0($s0)
    ctx->pc = 0x284980u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 448)));
    // 0x284984: 0x10430005  beq         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x284984u;
    {
        const bool branch_taken_0x284984 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x284988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284984u;
        // 0x284988: 0x3c020024  lui         $v0, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)36 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284984) {
            ctx->pc = 0x28499Cu;
            goto label_28499c;
        }
    }
    ctx->pc = 0x28498Cu;
label_28498c:
    // 0x28498c: 0x8e0301c0  lw          $v1, 0x1C0($s0)
    ctx->pc = 0x28498cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 448)));
    // 0x284990: 0x24424770  addiu       $v0, $v0, 0x4770
    ctx->pc = 0x284990u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18288));
    // 0x284994: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x284994u;
    {
        const bool branch_taken_0x284994 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x284994) {
            ctx->pc = 0x2849A0u;
            goto label_2849a0;
        }
    }
    ctx->pc = 0x28499Cu;
label_28499c:
    // 0x28499c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x28499cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2849a0:
    // 0x2849a0: 0x14a000b9  bnez        $a1, . + 4 + (0xB9 << 2)
    ctx->pc = 0x2849A0u;
    {
        const bool branch_taken_0x2849a0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x2849A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2849A0u;
        // 0x2849a4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2849a0) {
            ctx->pc = 0x284C88u;
            goto label_284c88;
        }
    }
    ctx->pc = 0x2849A8u;
    // 0x2849a8: 0xc089b98  jal         func_226E60
    ctx->pc = 0x2849A8u;
    SET_GPR_U32(ctx, 31, 0x2849B0u);
    ctx->pc = 0x2849ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2849A8u;
    // 0x2849ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226E60u, 0x2849A8u, 0x2849B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2849B0u;
label_2849b0:
    // 0x2849b0: 0xde0300e0  ld          $v1, 0xE0($s0)
    ctx->pc = 0x2849b0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 224)));
    // 0x2849b4: 0x34048000  ori         $a0, $zero, 0x8000
    ctx->pc = 0x2849b4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x2849b8: 0x42478  dsll        $a0, $a0, 17
    ctx->pc = 0x2849b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 17);
    // 0x2849bc: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2849bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2849c0: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x2849c0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2849c4: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x2849c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2849c8: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x2849c8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x2849cc: 0x1460003c  bnez        $v1, . + 4 + (0x3C << 2)
    ctx->pc = 0x2849CCu;
    {
        const bool branch_taken_0x2849cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2849D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2849CCu;
        // 0x2849d0: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2849cc) {
            ctx->pc = 0x284AC0u;
            goto label_284ac0;
        }
    }
    ctx->pc = 0x2849D4u;
    // 0x2849d4: 0xc09edf2  jal         func_27B7C8
    ctx->pc = 0x2849D4u;
    SET_GPR_U32(ctx, 31, 0x2849DCu);
    ctx->pc = 0x2849D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2849D4u;
    // 0x2849d8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27B7C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27B7C8u, 0x2849D4u, 0x2849DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2849DCu;
label_2849dc:
    // 0x2849dc: 0x50400039  beql        $v0, $zero, . + 4 + (0x39 << 2)
    ctx->pc = 0x2849DCu;
    {
        const bool branch_taken_0x2849dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2849dc) {
            ctx->pc = 0x2849E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2849DCu;
            // 0x2849e0: 0xde0300e0  ld          $v1, 0xE0($s0) (Delay Slot)
            SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 224)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x284AC4u;
            goto label_284ac4;
        }
    }
    ctx->pc = 0x2849E4u;
    // 0x2849e4: 0xc087502  jal         func_21D408
    ctx->pc = 0x2849E4u;
    SET_GPR_U32(ctx, 31, 0x2849ECu);
    ctx->pc = 0x2849E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2849E4u;
    // 0x2849e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2849E4u, 0x2849ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2849ECu;
label_2849ec:
    // 0x2849ec: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2849ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2849f0: 0x1460000e  bnez        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x2849F0u;
    {
        const bool branch_taken_0x2849f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2849F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2849F0u;
        // 0x2849f4: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2849f0) {
            ctx->pc = 0x284A2Cu;
            goto label_284a2c;
        }
    }
    ctx->pc = 0x2849F8u;
    // 0x2849f8: 0xc095142  jal         func_254508
    ctx->pc = 0x2849F8u;
    SET_GPR_U32(ctx, 31, 0x284A00u);
    ctx->pc = 0x2849FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2849F8u;
    // 0x2849fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254508u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254508u, 0x2849F8u, 0x284A00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284A00u;
label_284a00:
    // 0x284a00: 0x3c013fa0  lui         $at, 0x3FA0
    ctx->pc = 0x284a00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16288 << 16));
    // 0x284a04: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x284a04u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x284a08: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x284a08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x284a0c: 0xc09eb0c  jal         func_27AC30
    ctx->pc = 0x284A0Cu;
    SET_GPR_U32(ctx, 31, 0x284A14u);
    ctx->pc = 0x284A10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x284A0Cu;
    // 0x284a10: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x27AC30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27AC30u, 0x284A0Cu, 0x284A14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284A14u;
label_284a14:
    // 0x284a14: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x284a14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x284a18: 0xc089b0c  jal         func_226C30
    ctx->pc = 0x284A18u;
    SET_GPR_U32(ctx, 31, 0x284A20u);
    ctx->pc = 0x284A1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x284A18u;
    // 0x284a1c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226C30u, 0x284A18u, 0x284A20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284A20u;
label_284a20:
    // 0x284a20: 0xc089b98  jal         func_226E60
    ctx->pc = 0x284A20u;
    SET_GPR_U32(ctx, 31, 0x284A28u);
    ctx->pc = 0x284A24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x284A20u;
    // 0x284a24: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226E60u, 0x284A20u, 0x284A28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284A28u;
label_284a28:
    // 0x284a28: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x284a28u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_284a2c:
    // 0x284a2c: 0x52200005  beql        $s1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x284A2Cu;
    {
        const bool branch_taken_0x284a2c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x284a2c) {
            ctx->pc = 0x284A30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x284A2Cu;
            // 0x284a30: 0x8e0200d4  lw          $v0, 0xD4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x284A44u;
            goto label_284a44;
        }
    }
    ctx->pc = 0x284A34u;
    // 0x284a34: 0x8e2200d8  lw          $v0, 0xD8($s1)
    ctx->pc = 0x284a34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
    // 0x284a38: 0x10400093  beqz        $v0, . + 4 + (0x93 << 2)
    ctx->pc = 0x284A38u;
    {
        const bool branch_taken_0x284a38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x284A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284A38u;
        // 0x284a3c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284a38) {
            ctx->pc = 0x284C88u;
            goto label_284c88;
        }
    }
    ctx->pc = 0x284A40u;
    // 0x284a40: 0x8e0200d4  lw          $v0, 0xD4($s0)
    ctx->pc = 0x284a40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
label_284a44:
    // 0x284a44: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x284a44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x284a48: 0xc08a0d0  jal         func_228340
    ctx->pc = 0x284A48u;
    SET_GPR_U32(ctx, 31, 0x284A50u);
    ctx->pc = 0x284A4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x284A48u;
    // 0x284a4c: 0xac4000b8  sw          $zero, 0xB8($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 184), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228340u, 0x284A48u, 0x284A50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284A50u;
label_284a50:
    // 0x284a50: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x284A50u;
    {
        const bool branch_taken_0x284a50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x284a50) {
            ctx->pc = 0x284A60u;
            goto label_284a60;
        }
    }
    ctx->pc = 0x284A58u;
    // 0x284a58: 0xc0a001a  jal         func_280068
    ctx->pc = 0x284A58u;
    SET_GPR_U32(ctx, 31, 0x284A60u);
    ctx->pc = 0x284A5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x284A58u;
    // 0x284a5c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x280068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x280068u, 0x284A58u, 0x284A60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284A60u;
label_284a60:
    // 0x284a60: 0x1220000f  beqz        $s1, . + 4 + (0xF << 2)
    ctx->pc = 0x284A60u;
    {
        const bool branch_taken_0x284a60 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x284A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284A60u;
        // 0x284a64: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284a60) {
            ctx->pc = 0x284AA0u;
            goto label_284aa0;
        }
    }
    ctx->pc = 0x284A68u;
    // 0x284a68: 0xc0895a8  jal         func_2256A0
    ctx->pc = 0x284A68u;
    SET_GPR_U32(ctx, 31, 0x284A70u);
    ctx->pc = 0x284A6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x284A68u;
    // 0x284a6c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2256A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2256A0u, 0x284A68u, 0x284A70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284A70u;
label_284a70:
    // 0x284a70: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x284A70u;
    {
        const bool branch_taken_0x284a70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x284a70) {
            ctx->pc = 0x284A88u;
            goto label_284a88;
        }
    }
    ctx->pc = 0x284A78u;
    // 0x284a78: 0xc088ee6  jal         func_223B98
    ctx->pc = 0x284A78u;
    SET_GPR_U32(ctx, 31, 0x284A80u);
    ctx->pc = 0x284A7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x284A78u;
    // 0x284a7c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223B98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223B98u, 0x284A78u, 0x284A80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284A80u;
label_284a80:
    // 0x284a80: 0x1440004b  bnez        $v0, . + 4 + (0x4B << 2)
    ctx->pc = 0x284A80u;
    {
        const bool branch_taken_0x284a80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x284A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284A80u;
        // 0x284a84: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284a80) {
            ctx->pc = 0x284BB0u;
            goto label_284bb0;
        }
    }
    ctx->pc = 0x284A88u;
label_284a88:
    // 0x284a88: 0x12200005  beqz        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x284A88u;
    {
        const bool branch_taken_0x284a88 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x284A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284A88u;
        // 0x284a8c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284a88) {
            ctx->pc = 0x284AA0u;
            goto label_284aa0;
        }
    }
    ctx->pc = 0x284A90u;
    // 0x284a90: 0xc096384  jal         func_258E10
    ctx->pc = 0x284A90u;
    SET_GPR_U32(ctx, 31, 0x284A98u);
    ctx->pc = 0x284A94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x284A90u;
    // 0x284a94: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x258E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258E10u, 0x284A90u, 0x284A98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284A98u;
label_284a98:
    // 0x284a98: 0x1440005f  bnez        $v0, . + 4 + (0x5F << 2)
    ctx->pc = 0x284A98u;
    {
        const bool branch_taken_0x284a98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x284a98) {
            ctx->pc = 0x284C18u;
            goto label_284c18;
        }
    }
    ctx->pc = 0x284AA0u;
label_284aa0:
    // 0x284aa0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x284aa0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x284aa4: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x284aa4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x284aa8: 0xc09c1ea  jal         func_2707A8
    ctx->pc = 0x284AA8u;
    SET_GPR_U32(ctx, 31, 0x284AB0u);
    ctx->pc = 0x284AACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x284AA8u;
    // 0x284aac: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2707A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2707A8u, 0x284AA8u, 0x284AB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284AB0u;
label_284ab0:
    // 0x284ab0: 0x12200052  beqz        $s1, . + 4 + (0x52 << 2)
    ctx->pc = 0x284AB0u;
    {
        const bool branch_taken_0x284ab0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x284AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284AB0u;
        // 0x284ab4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284ab0) {
            ctx->pc = 0x284BFCu;
            goto label_284bfc;
        }
    }
    ctx->pc = 0x284AB8u;
    // 0x284ab8: 0x1000004e  b           . + 4 + (0x4E << 2)
    ctx->pc = 0x284AB8u;
    {
        const bool branch_taken_0x284ab8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x284ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284AB8u;
        // 0x284abc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284ab8) {
            ctx->pc = 0x284BF4u;
            goto label_284bf4;
        }
    }
    ctx->pc = 0x284AC0u;
label_284ac0:
    // 0x284ac0: 0xde0300e0  ld          $v1, 0xE0($s0)
    ctx->pc = 0x284ac0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 224)));
label_284ac4:
    // 0x284ac4: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x284ac4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x284ac8: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x284ac8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x284acc: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x284accu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x284ad0: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x284ad0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x284ad4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x284ad4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x284ad8: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x284ad8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x284adc: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x284ADCu;
    {
        const bool branch_taken_0x284adc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x284AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284ADCu;
        // 0x284ae0: 0x3c024000  lui         $v0, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284adc) {
            ctx->pc = 0x284AFCu;
            goto label_284afc;
        }
    }
    ctx->pc = 0x284AE4u;
    // 0x284ae4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x284ae4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x284ae8: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x284ae8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x284aec: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x284aecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x284af0: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x284af0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x284af4: 0x14400064  bnez        $v0, . + 4 + (0x64 << 2)
    ctx->pc = 0x284AF4u;
    {
        const bool branch_taken_0x284af4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x284AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284AF4u;
        // 0x284af8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284af4) {
            ctx->pc = 0x284C88u;
            goto label_284c88;
        }
    }
    ctx->pc = 0x284AFCu;
label_284afc:
    // 0x284afc: 0xc09ede8  jal         func_27B7A0
    ctx->pc = 0x284AFCu;
    SET_GPR_U32(ctx, 31, 0x284B04u);
    ctx->pc = 0x284B00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x284AFCu;
    // 0x284b00: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27B7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27B7A0u, 0x284AFCu, 0x284B04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284B04u;
label_284b04:
    // 0x284b04: 0x10400060  beqz        $v0, . + 4 + (0x60 << 2)
    ctx->pc = 0x284B04u;
    {
        const bool branch_taken_0x284b04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x284B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284B04u;
        // 0x284b08: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284b04) {
            ctx->pc = 0x284C88u;
            goto label_284c88;
        }
    }
    ctx->pc = 0x284B0Cu;
    // 0x284b0c: 0xc087502  jal         func_21D408
    ctx->pc = 0x284B0Cu;
    SET_GPR_U32(ctx, 31, 0x284B14u);
    ctx->pc = 0x284B10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x284B0Cu;
    // 0x284b10: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x284B0Cu, 0x284B14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284B14u;
label_284b14:
    // 0x284b14: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x284b14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x284b18: 0x1460000e  bnez        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x284B18u;
    {
        const bool branch_taken_0x284b18 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x284B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284B18u;
        // 0x284b1c: 0x24050046  addiu       $a1, $zero, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284b18) {
            ctx->pc = 0x284B54u;
            goto label_284b54;
        }
    }
    ctx->pc = 0x284B20u;
    // 0x284b20: 0xc095142  jal         func_254508
    ctx->pc = 0x284B20u;
    SET_GPR_U32(ctx, 31, 0x284B28u);
    ctx->pc = 0x284B24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x284B20u;
    // 0x284b24: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254508u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254508u, 0x284B20u, 0x284B28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284B28u;
label_284b28:
    // 0x284b28: 0x3c013fa0  lui         $at, 0x3FA0
    ctx->pc = 0x284b28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16288 << 16));
    // 0x284b2c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x284b2cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x284b30: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x284b30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x284b34: 0xc09eb0c  jal         func_27AC30
    ctx->pc = 0x284B34u;
    SET_GPR_U32(ctx, 31, 0x284B3Cu);
    ctx->pc = 0x284B38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x284B34u;
    // 0x284b38: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x27AC30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27AC30u, 0x284B34u, 0x284B3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284B3Cu;
label_284b3c:
    // 0x284b3c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x284b3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x284b40: 0xc089b0c  jal         func_226C30
    ctx->pc = 0x284B40u;
    SET_GPR_U32(ctx, 31, 0x284B48u);
    ctx->pc = 0x284B44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x284B40u;
    // 0x284b44: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226C30u, 0x284B40u, 0x284B48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284B48u;
label_284b48:
    // 0x284b48: 0xc089b98  jal         func_226E60
    ctx->pc = 0x284B48u;
    SET_GPR_U32(ctx, 31, 0x284B50u);
    ctx->pc = 0x284B4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x284B48u;
    // 0x284b4c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226E60u, 0x284B48u, 0x284B50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284B50u;
label_284b50:
    // 0x284b50: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x284b50u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_284b54:
    // 0x284b54: 0x52200005  beql        $s1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x284B54u;
    {
        const bool branch_taken_0x284b54 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x284b54) {
            ctx->pc = 0x284B58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x284B54u;
            // 0x284b58: 0x8e0200d4  lw          $v0, 0xD4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x284B6Cu;
            goto label_284b6c;
        }
    }
    ctx->pc = 0x284B5Cu;
    // 0x284b5c: 0x8e2200d8  lw          $v0, 0xD8($s1)
    ctx->pc = 0x284b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
    // 0x284b60: 0x10400049  beqz        $v0, . + 4 + (0x49 << 2)
    ctx->pc = 0x284B60u;
    {
        const bool branch_taken_0x284b60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x284B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284B60u;
        // 0x284b64: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284b60) {
            ctx->pc = 0x284C88u;
            goto label_284c88;
        }
    }
    ctx->pc = 0x284B68u;
    // 0x284b68: 0x8e0200d4  lw          $v0, 0xD4($s0)
    ctx->pc = 0x284b68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
label_284b6c:
    // 0x284b6c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x284b6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x284b70: 0xc08a0d0  jal         func_228340
    ctx->pc = 0x284B70u;
    SET_GPR_U32(ctx, 31, 0x284B78u);
    ctx->pc = 0x284B74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x284B70u;
    // 0x284b74: 0xac4000b8  sw          $zero, 0xB8($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 184), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228340u, 0x284B70u, 0x284B78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284B78u;
label_284b78:
    // 0x284b78: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x284B78u;
    {
        const bool branch_taken_0x284b78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x284b78) {
            ctx->pc = 0x284B88u;
            goto label_284b88;
        }
    }
    ctx->pc = 0x284B80u;
    // 0x284b80: 0xc0a001a  jal         func_280068
    ctx->pc = 0x284B80u;
    SET_GPR_U32(ctx, 31, 0x284B88u);
    ctx->pc = 0x284B84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x284B80u;
    // 0x284b84: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x280068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x280068u, 0x284B80u, 0x284B88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284B88u;
label_284b88:
    // 0x284b88: 0x1220002d  beqz        $s1, . + 4 + (0x2D << 2)
    ctx->pc = 0x284B88u;
    {
        const bool branch_taken_0x284b88 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x284B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284B88u;
        // 0x284b8c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284b88) {
            ctx->pc = 0x284C40u;
            goto label_284c40;
        }
    }
    ctx->pc = 0x284B90u;
    // 0x284b90: 0xc0895a8  jal         func_2256A0
    ctx->pc = 0x284B90u;
    SET_GPR_U32(ctx, 31, 0x284B98u);
    ctx->pc = 0x284B94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x284B90u;
    // 0x284b94: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2256A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2256A0u, 0x284B90u, 0x284B98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284B98u;
label_284b98:
    // 0x284b98: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x284B98u;
    {
        const bool branch_taken_0x284b98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x284b98) {
            ctx->pc = 0x284BC0u;
            goto label_284bc0;
        }
    }
    ctx->pc = 0x284BA0u;
    // 0x284ba0: 0xc088ee6  jal         func_223B98
    ctx->pc = 0x284BA0u;
    SET_GPR_U32(ctx, 31, 0x284BA8u);
    ctx->pc = 0x284BA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x284BA0u;
    // 0x284ba4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223B98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223B98u, 0x284BA0u, 0x284BA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284BA8u;
label_284ba8:
    // 0x284ba8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x284BA8u;
    {
        const bool branch_taken_0x284ba8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x284BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284BA8u;
        // 0x284bac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284ba8) {
            ctx->pc = 0x284BC0u;
            goto label_284bc0;
        }
    }
    ctx->pc = 0x284BB0u;
label_284bb0:
    // 0x284bb0: 0xc09c6cc  jal         func_271B30
    ctx->pc = 0x284BB0u;
    SET_GPR_U32(ctx, 31, 0x284BB8u);
    ctx->pc = 0x284BB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x284BB0u;
    // 0x284bb4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x271B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x271B30u, 0x284BB0u, 0x284BB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284BB8u;
label_284bb8:
    // 0x284bb8: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x284BB8u;
    {
        const bool branch_taken_0x284bb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x284BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284BB8u;
        // 0x284bbc: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284bb8) {
            ctx->pc = 0x284C8Cu;
            goto label_284c8c;
        }
    }
    ctx->pc = 0x284BC0u;
label_284bc0:
    // 0x284bc0: 0xc088e40  jal         func_223900
    ctx->pc = 0x284BC0u;
    SET_GPR_U32(ctx, 31, 0x284BC8u);
    ctx->pc = 0x284BC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x284BC0u;
    // 0x284bc4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223900u, 0x284BC0u, 0x284BC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284BC8u;
label_284bc8:
    // 0x284bc8: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x284BC8u;
    {
        const bool branch_taken_0x284bc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x284BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284BC8u;
        // 0x284bcc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284bc8) {
            ctx->pc = 0x284C04u;
            goto label_284c04;
        }
    }
    ctx->pc = 0x284BD0u;
    // 0x284bd0: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x284bd0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x284bd4: 0xc089998  jal         func_226660
    ctx->pc = 0x284BD4u;
    SET_GPR_U32(ctx, 31, 0x284BDCu);
    ctx->pc = 0x284BD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x284BD4u;
    // 0x284bd8: 0x34a5ffff  ori         $a1, $a1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x226660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226660u, 0x284BD4u, 0x284BDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284BDCu;
label_284bdc:
    // 0x284bdc: 0x14400016  bnez        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x284BDCu;
    {
        const bool branch_taken_0x284bdc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x284BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284BDCu;
        // 0x284be0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284bdc) {
            ctx->pc = 0x284C38u;
            goto label_284c38;
        }
    }
    ctx->pc = 0x284BE4u;
    // 0x284be4: 0xc09bcb2  jal         func_26F2C8
    ctx->pc = 0x284BE4u;
    SET_GPR_U32(ctx, 31, 0x284BECu);
    ctx->pc = 0x284BE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x284BE4u;
    // 0x284be8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26F2C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26F2C8u, 0x284BE4u, 0x284BECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284BECu;
label_284bec:
    // 0x284bec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x284becu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x284bf0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x284bf0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_284bf4:
    // 0x284bf4: 0xc087570  jal         func_21D5C0
    ctx->pc = 0x284BF4u;
    SET_GPR_U32(ctx, 31, 0x284BFCu);
    ctx->pc = 0x284BF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x284BF4u;
    // 0x284bf8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D5C0u, 0x284BF4u, 0x284BFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284BFCu;
label_284bfc:
    // 0x284bfc: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x284BFCu;
    {
        const bool branch_taken_0x284bfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x284C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284BFCu;
        // 0x284c00: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284bfc) {
            ctx->pc = 0x284C88u;
            goto label_284c88;
        }
    }
    ctx->pc = 0x284C04u;
label_284c04:
    // 0x284c04: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x284c04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x284c08: 0xc096384  jal         func_258E10
    ctx->pc = 0x284C08u;
    SET_GPR_U32(ctx, 31, 0x284C10u);
    ctx->pc = 0x284C0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x284C08u;
    // 0x284c0c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x258E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258E10u, 0x284C08u, 0x284C10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284C10u;
label_284c10:
    // 0x284c10: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x284C10u;
    {
        const bool branch_taken_0x284c10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x284c10) {
            ctx->pc = 0x284C38u;
            goto label_284c38;
        }
    }
    ctx->pc = 0x284C18u;
label_284c18:
    // 0x284c18: 0xc0e409a  jal         func_390268
    ctx->pc = 0x284C18u;
    SET_GPR_U32(ctx, 31, 0x284C20u);
    ctx->pc = 0x284C1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x284C18u;
    // 0x284c1c: 0x262400c4  addiu       $a0, $s1, 0xC4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 196));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x284C18u, 0x284C20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284C20u;
label_284c20:
    // 0x284c20: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x284c20u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x284c24: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x284c24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x284c28: 0xc09be18  jal         func_26F860
    ctx->pc = 0x284C28u;
    SET_GPR_U32(ctx, 31, 0x284C30u);
    ctx->pc = 0x284C2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x284C28u;
    // 0x284c2c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26F860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26F860u, 0x284C28u, 0x284C30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284C30u;
label_284c30:
    // 0x284c30: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x284C30u;
    {
        const bool branch_taken_0x284c30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x284C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284C30u;
        // 0x284c34: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284c30) {
            ctx->pc = 0x284C88u;
            goto label_284c88;
        }
    }
    ctx->pc = 0x284C38u;
label_284c38:
    // 0x284c38: 0x1620000a  bnez        $s1, . + 4 + (0xA << 2)
    ctx->pc = 0x284C38u;
    {
        const bool branch_taken_0x284c38 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x284C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284C38u;
        // 0x284c3c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284c38) {
            ctx->pc = 0x284C64u;
            goto label_284c64;
        }
    }
    ctx->pc = 0x284C40u;
label_284c40:
    // 0x284c40: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x284c40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x284c44: 0x8c4309a4  lw          $v1, 0x9A4($v0)
    ctx->pc = 0x284c44u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5109A4u));
    // 0x284c48: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x284C48u;
    {
        const bool branch_taken_0x284c48 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x284C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284C48u;
        // 0x284c4c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284c48) {
            ctx->pc = 0x284C64u;
            goto label_284c64;
        }
    }
    ctx->pc = 0x284C50u;
    // 0x284c50: 0xc0a0462  jal         func_281188
    ctx->pc = 0x284C50u;
    SET_GPR_U32(ctx, 31, 0x284C58u);
    ctx->pc = 0x284C54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x284C50u;
    // 0x284c54: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x281188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x281188u, 0x284C50u, 0x284C58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284C58u;
label_284c58:
    // 0x284c58: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x284C58u;
    {
        const bool branch_taken_0x284c58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x284C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284C58u;
        // 0x284c5c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284c58) {
            ctx->pc = 0x284C88u;
            goto label_284c88;
        }
    }
    ctx->pc = 0x284C60u;
    // 0x284c60: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x284c60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_284c64:
    // 0x284c64: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x284c64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x284c68: 0xc09b152  jal         func_26C548
    ctx->pc = 0x284C68u;
    SET_GPR_U32(ctx, 31, 0x284C70u);
    ctx->pc = 0x284C6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x284C68u;
    // 0x284c6c: 0x24060048  addiu       $a2, $zero, 0x48 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26C548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26C548u, 0x284C68u, 0x284C70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284C70u;
label_284c70:
    // 0x284c70: 0x1220ffe2  beqz        $s1, . + 4 + (-0x1E << 2)
    ctx->pc = 0x284C70u;
    {
        const bool branch_taken_0x284c70 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x284C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284C70u;
        // 0x284c74: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284c70) {
            ctx->pc = 0x284BFCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_284bfc;
        }
    }
    ctx->pc = 0x284C78u;
    // 0x284c78: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x284c78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x284c7c: 0xc087570  jal         func_21D5C0
    ctx->pc = 0x284C7Cu;
    SET_GPR_U32(ctx, 31, 0x284C84u);
    ctx->pc = 0x284C80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x284C7Cu;
    // 0x284c80: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D5C0u, 0x284C7Cu, 0x284C84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284C84u;
label_284c84:
    // 0x284c84: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x284c84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_284c88:
    // 0x284c88: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x284c88u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_284c8c:
    // 0x284c8c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x284c8cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x284c90: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x284c90u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x284c94: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x284c94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x284c98: 0x3e00008  jr          $ra
    ctx->pc = 0x284C98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x284C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284C98u;
        // 0x284c9c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x284C98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x284CA0u;
}
