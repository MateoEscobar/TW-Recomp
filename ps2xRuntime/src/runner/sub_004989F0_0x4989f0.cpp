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

// Function: sub_004989F0
// Address: 0x4989f0 - 0x498b50
void sub_004989F0_0x4989f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004989F0_0x4989f0");
#endif

    switch (ctx->pc) {
        case 0x498a68u: goto label_498a68;
        case 0x498a74u: goto label_498a74;
        case 0x498abcu: goto label_498abc;
        case 0x498ad0u: goto label_498ad0;
        default: break;
    }

    ctx->pc = 0x4989f0u;

    // 0x4989f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4989f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4989f4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x4989f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x4989f8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4989f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x4989fc: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x4989fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x498a00: 0x92020023  lbu         $v0, 0x23($s0)
    ctx->pc = 0x498a00u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 35)));
    // 0x498a04: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x498a04u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x498a08: 0x30436000  andi        $v1, $v0, 0x6000
    ctx->pc = 0x498a08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)24576);
    // 0x498a0c: 0x50600034  beql        $v1, $zero, . + 4 + (0x34 << 2)
    ctx->pc = 0x498A0Cu;
    {
        const bool branch_taken_0x498a0c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x498a0c) {
            ctx->pc = 0x498A10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x498A0Cu;
            // 0x498a10: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x498AE0u;
            goto label_498ae0;
        }
    }
    ctx->pc = 0x498A14u;
    // 0x498a14: 0x8e070008  lw          $a3, 0x8($s0)
    ctx->pc = 0x498a14u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x498a18: 0x10e00030  beqz        $a3, . + 4 + (0x30 << 2)
    ctx->pc = 0x498A18u;
    {
        const bool branch_taken_0x498a18 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x498A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x498A18u;
        // 0x498a1c: 0x30444000  andi        $a0, $v0, 0x4000 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16384);
        ctx->in_delay_slot = false;
        if (branch_taken_0x498a18) {
            ctx->pc = 0x498ADCu;
            goto label_498adc;
        }
    }
    ctx->pc = 0x498A20u;
    // 0x498a20: 0x24050100  addiu       $a1, $zero, 0x100
    ctx->pc = 0x498a20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x498a24: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x498a24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x498a28: 0x30460f00  andi        $a2, $v0, 0xF00
    ctx->pc = 0x498a28u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3840);
    // 0x498a2c: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x498a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x498a30: 0x10c20006  beq         $a2, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x498A30u;
    {
        const bool branch_taken_0x498a30 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x498A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x498A30u;
        // 0x498a34: 0x64280b  movn        $a1, $v1, $a0 (Delay Slot)
        if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x498a30) {
            ctx->pc = 0x498A4Cu;
            goto label_498a4c;
        }
    }
    ctx->pc = 0x498A38u;
    // 0x498a38: 0x24020500  addiu       $v0, $zero, 0x500
    ctx->pc = 0x498a38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1280));
    // 0x498a3c: 0x10c20005  beq         $a2, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x498A3Cu;
    {
        const bool branch_taken_0x498a3c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x498A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x498A3Cu;
        // 0x498a40: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x498a3c) {
            ctx->pc = 0x498A54u;
            goto label_498a54;
        }
    }
    ctx->pc = 0x498A44u;
    // 0x498a44: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x498A44u;
    {
        const bool branch_taken_0x498a44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x498A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x498A44u;
        // 0x498a48: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x498a44) {
            ctx->pc = 0x498A5Cu;
            goto label_498a5c;
        }
    }
    ctx->pc = 0x498A4Cu;
label_498a4c:
    // 0x498a4c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x498A4Cu;
    {
        const bool branch_taken_0x498a4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x498A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x498A4Cu;
        // 0x498a50: 0x51840  sll         $v1, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x498a4c) {
            ctx->pc = 0x498A80u;
            goto label_498a80;
        }
    }
    ctx->pc = 0x498A54u;
label_498a54:
    // 0x498a54: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x498A54u;
    {
        const bool branch_taken_0x498a54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x498A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x498A54u;
        // 0x498a58: 0x51880  sll         $v1, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x498a54) {
            ctx->pc = 0x498A80u;
            goto label_498a80;
        }
    }
    ctx->pc = 0x498A5Cu;
label_498a5c:
    // 0x498a5c: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x498a5cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x498a60: 0xc11eff2  jal         func_47BFC8
    ctx->pc = 0x498A60u;
    SET_GPR_U32(ctx, 31, 0x498A68u);
    ctx->pc = 0x498A64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x498A60u;
    // 0x498a64: 0x3484000d  ori         $a0, $a0, 0xD (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)13);
    ctx->in_delay_slot = false;
    ctx->pc = 0x47BFC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47BFC8u, 0x498A60u, 0x498A68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x498A68u;
label_498a68:
    // 0x498a68: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x498a68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x498a6c: 0xc11f024  jal         func_47C090
    ctx->pc = 0x498A6Cu;
    SET_GPR_U32(ctx, 31, 0x498A74u);
    ctx->pc = 0x498A70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x498A6Cu;
    // 0x498a70: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47C090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47C090u, 0x498A6Cu, 0x498A74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x498A74u;
label_498a74:
    // 0x498a74: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x498A74u;
    {
        const bool branch_taken_0x498a74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x498A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x498A74u;
        // 0x498a78: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x498a74) {
            ctx->pc = 0x498AE0u;
            goto label_498ae0;
        }
    }
    ctx->pc = 0x498A7Cu;
    // 0x498a7c: 0x0  nop
    ctx->pc = 0x498a7cu;
    // NOP
label_498a80:
    // 0x498a80: 0x92020021  lbu         $v0, 0x21($s0)
    ctx->pc = 0x498a80u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 33)));
    // 0x498a84: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x498a84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x498a88: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x498A88u;
    {
        const bool branch_taken_0x498a88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x498A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x498A88u;
        // 0x498a8c: 0xe32821  addu        $a1, $a3, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x498a88) {
            ctx->pc = 0x498AC4u;
            goto label_498ac4;
        }
    }
    ctx->pc = 0x498A90u;
    // 0x498a90: 0x92020022  lbu         $v0, 0x22($s0)
    ctx->pc = 0x498a90u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 34)));
    // 0x498a94: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x498a94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x498a98: 0x5040000e  beql        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x498A98u;
    {
        const bool branch_taken_0x498a98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x498a98) {
            ctx->pc = 0x498A9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x498A98u;
            // 0x498a9c: 0x92020022  lbu         $v0, 0x22($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 34)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x498AD4u;
            goto label_498ad4;
        }
    }
    ctx->pc = 0x498AA0u;
    // 0x498aa0: 0x8f828a20  lw          $v0, -0x75E0($gp)
    ctx->pc = 0x498aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937120)));
    // 0x498aa4: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x498aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x498aa8: 0x8c430058  lw          $v1, 0x58($v0)
    ctx->pc = 0x498aa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x498aac: 0x50600009  beql        $v1, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x498AACu;
    {
        const bool branch_taken_0x498aac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x498aac) {
            ctx->pc = 0x498AB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x498AACu;
            // 0x498ab0: 0x92020022  lbu         $v0, 0x22($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 34)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x498AD4u;
            goto label_498ad4;
        }
    }
    ctx->pc = 0x498AB4u;
    // 0x498ab4: 0xc128e0e  jal         func_4A3838
    ctx->pc = 0x498AB4u;
    SET_GPR_U32(ctx, 31, 0x498ABCu);
    ctx->pc = 0x498AB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x498AB4u;
    // 0x498ab8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A3838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A3838u, 0x498AB4u, 0x498ABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x498ABCu;
label_498abc:
    // 0x498abc: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x498ABCu;
    {
        const bool branch_taken_0x498abc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x498AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x498ABCu;
        // 0x498ac0: 0x92020022  lbu         $v0, 0x22($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 34)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x498abc) {
            ctx->pc = 0x498AD4u;
            goto label_498ad4;
        }
    }
    ctx->pc = 0x498AC4u;
label_498ac4:
    // 0x498ac4: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x498ac4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x498ac8: 0xc10f644  jal         func_43D910
    ctx->pc = 0x498AC8u;
    SET_GPR_U32(ctx, 31, 0x498AD0u);
    ctx->pc = 0x498ACCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x498AC8u;
    // 0x498acc: 0x24a5007f  addiu       $a1, $a1, 0x7F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 127));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43D910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43D910u, 0x498AC8u, 0x498AD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x498AD0u;
label_498ad0:
    // 0x498ad0: 0x92020022  lbu         $v0, 0x22($s0)
    ctx->pc = 0x498ad0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 34)));
label_498ad4:
    // 0x498ad4: 0x304200e7  andi        $v0, $v0, 0xE7
    ctx->pc = 0x498ad4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)231);
    // 0x498ad8: 0xa2020022  sb          $v0, 0x22($s0)
    ctx->pc = 0x498ad8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 34), (uint8_t)GPR_U32(ctx, 2));
label_498adc:
    // 0x498adc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x498adcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_498ae0:
    // 0x498ae0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x498ae0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x498ae4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x498ae4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x498ae8: 0x3e00008  jr          $ra
    ctx->pc = 0x498AE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x498AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x498AE8u;
        // 0x498aec: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x498AE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x498AF0u;
    // 0x498af0: 0x8f828a20  lw          $v0, -0x75E0($gp)
    ctx->pc = 0x498af0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937120)));
    // 0x498af4: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x498af4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x498af8: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x498AF8u;
    {
        const bool branch_taken_0x498af8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x498AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x498AF8u;
        // 0x498afc: 0xa23021  addu        $a2, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x498af8) {
            ctx->pc = 0x498B34u;
            goto label_498b34;
        }
    }
    ctx->pc = 0x498B00u;
    // 0x498b00: 0x90a20023  lbu         $v0, 0x23($a1)
    ctx->pc = 0x498b00u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 35)));
    // 0x498b04: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x498b04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x498b08: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x498B08u;
    {
        const bool branch_taken_0x498b08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x498B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x498B08u;
        // 0x498b0c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x498b08) {
            ctx->pc = 0x498B2Cu;
            goto label_498b2c;
        }
    }
    ctx->pc = 0x498B10u;
    // 0x498b10: 0x50c0000c  beql        $a2, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x498B10u;
    {
        const bool branch_taken_0x498b10 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x498b10) {
            ctx->pc = 0x498B14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x498B10u;
            // 0x498b14: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x498B44u;
            goto label_498b44;
        }
    }
    ctx->pc = 0x498B18u;
    // 0x498b18: 0x90c20016  lbu         $v0, 0x16($a2)
    ctx->pc = 0x498b18u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 22)));
    // 0x498b1c: 0x21082  srl         $v0, $v0, 2
    ctx->pc = 0x498b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
    // 0x498b20: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x498b20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x498b24: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x498B24u;
    {
        const bool branch_taken_0x498b24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x498B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x498B24u;
        // 0x498b28: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x498b24) {
            ctx->pc = 0x498B3Cu;
            goto label_498b3c;
        }
    }
    ctx->pc = 0x498B2Cu;
label_498b2c:
    // 0x498b2c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x498B2Cu;
    {
        const bool branch_taken_0x498b2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x498B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x498B2Cu;
        // 0x498b30: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x498b2c) {
            ctx->pc = 0x498B3Cu;
            goto label_498b3c;
        }
    }
    ctx->pc = 0x498B34u;
label_498b34:
    // 0x498b34: 0x3e00008  jr          $ra
    ctx->pc = 0x498B34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x498B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x498B34u;
        // 0x498b38: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x498B34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x498B3Cu;
label_498b3c:
    // 0x498b3c: 0x3e00008  jr          $ra
    ctx->pc = 0x498B3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x498B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x498B3Cu;
        // 0x498b40: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x498B3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x498B44u;
label_498b44:
    // 0x498b44: 0x3e00008  jr          $ra
    ctx->pc = 0x498B44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x498B44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x498B4Cu;
    // 0x498b4c: 0x0  nop
    ctx->pc = 0x498b4cu;
    // NOP
    ctx->pc = 0x498b50u;
}
