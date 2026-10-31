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

// Function: sub_00333968
// Address: 0x333968 - 0x333ab8
void sub_00333968_0x333968(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00333968_0x333968");
#endif

    switch (ctx->pc) {
        case 0x3339c4u: goto label_3339c4;
        case 0x333a00u: goto label_333a00;
        case 0x333a2cu: goto label_333a2c;
        case 0x333a3cu: goto label_333a3c;
        case 0x333a98u: goto label_333a98;
        default: break;
    }

    ctx->pc = 0x333968u;

    // 0x333968: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x333968u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x33396c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x33396cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x333970: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x333970u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x333974: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x333974u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x333978: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x333978u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x33397c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x33397cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x333980: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x333980u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x333984: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x333984u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x333988: 0x1462001b  bne         $v1, $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x333988u;
    {
        const bool branch_taken_0x333988 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x33398Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333988u;
        // 0x33398c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x333988) {
            ctx->pc = 0x3339F8u;
            goto label_3339f8;
        }
    }
    ctx->pc = 0x333990u;
    // 0x333990: 0x8e450008  lw          $a1, 0x8($s2)
    ctx->pc = 0x333990u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x333994: 0x84b10004  lh          $s1, 0x4($a1)
    ctx->pc = 0x333994u;
    SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x333998: 0x12230006  beq         $s1, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x333998u;
    {
        const bool branch_taken_0x333998 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 3));
        ctx->pc = 0x33399Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333998u;
        // 0x33399c: 0x111980  sll         $v1, $s1, 6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x333998) {
            ctx->pc = 0x3339B4u;
            goto label_3339b4;
        }
    }
    ctx->pc = 0x3339A0u;
    // 0x3339a0: 0x8e020048  lw          $v0, 0x48($s0)
    ctx->pc = 0x3339a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x3339a4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3339a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3339a8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x3339a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3339ac: 0x14800012  bnez        $a0, . + 4 + (0x12 << 2)
    ctx->pc = 0x3339ACu;
    {
        const bool branch_taken_0x3339ac = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x3339ac) {
            ctx->pc = 0x3339F8u;
            goto label_3339f8;
        }
    }
    ctx->pc = 0x3339B4u;
label_3339b4:
    // 0x3339b4: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x3339b4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3339b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3339b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3339bc: 0xc0cc728  jal         func_331CA0
    ctx->pc = 0x3339BCu;
    SET_GPR_U32(ctx, 31, 0x3339C4u);
    ctx->pc = 0x3339C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3339BCu;
    // 0x3339c0: 0x24c6fff0  addiu       $a2, $a2, -0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x331CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x331CA0u, 0x3339BCu, 0x3339C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3339C4u;
label_3339c4:
    // 0x3339c4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3339c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3339c8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3339c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3339cc: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x3339ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3339d0: 0x14430033  bne         $v0, $v1, . + 4 + (0x33 << 2)
    ctx->pc = 0x3339D0u;
    {
        const bool branch_taken_0x3339d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x3339D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3339D0u;
        // 0x3339d4: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3339d0) {
            ctx->pc = 0x333AA0u;
            goto label_333aa0;
        }
    }
    ctx->pc = 0x3339D8u;
    // 0x3339d8: 0x8e030048  lw          $v1, 0x48($s0)
    ctx->pc = 0x3339d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x3339dc: 0x111180  sll         $v0, $s1, 6
    ctx->pc = 0x3339dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 6));
    // 0x3339e0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3339e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3339e4: 0x8c510008  lw          $s1, 0x8($v0)
    ctx->pc = 0x3339e4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x3339e8: 0x16200012  bnez        $s1, . + 4 + (0x12 << 2)
    ctx->pc = 0x3339E8u;
    {
        const bool branch_taken_0x3339e8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x3339ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3339E8u;
        // 0x3339ec: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3339e8) {
            ctx->pc = 0x333A34u;
            goto label_333a34;
        }
    }
    ctx->pc = 0x3339F0u;
    // 0x3339f0: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x3339F0u;
    {
        const bool branch_taken_0x3339f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3339F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3339F0u;
        // 0x3339f4: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3339f0) {
            ctx->pc = 0x333AA0u;
            goto label_333aa0;
        }
    }
    ctx->pc = 0x3339F8u;
label_3339f8:
    // 0x3339f8: 0xc0cc9e6  jal         func_332798
    ctx->pc = 0x3339F8u;
    SET_GPR_U32(ctx, 31, 0x333A00u);
    ctx->pc = 0x3339FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3339F8u;
    // 0x3339fc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x332798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x332798u, 0x3339F8u, 0x333A00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x333A00u;
label_333a00:
    // 0x333a00: 0x8e030048  lw          $v1, 0x48($s0)
    ctx->pc = 0x333a00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x333a04: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x333a04u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x333a08: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x333a08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x333a0c: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x333a0cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x333a10: 0x16200008  bnez        $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x333A10u;
    {
        const bool branch_taken_0x333a10 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x333A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333A10u;
        // 0x333a14: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x333a10) {
            ctx->pc = 0x333A34u;
            goto label_333a34;
        }
    }
    ctx->pc = 0x333A18u;
    // 0x333a18: 0x3c060057  lui         $a2, 0x57
    ctx->pc = 0x333a18u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)87 << 16));
    // 0x333a1c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x333a1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x333a20: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x333a20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x333a24: 0xc0ca174  jal         func_3285D0
    ctx->pc = 0x333A24u;
    SET_GPR_U32(ctx, 31, 0x333A2Cu);
    ctx->pc = 0x333A28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x333A24u;
    // 0x333a28: 0x24c66828  addiu       $a2, $a2, 0x6828 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 26664));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3285D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3285D0u, 0x333A24u, 0x333A2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x333A2Cu;
label_333a2c:
    // 0x333a2c: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x333A2Cu;
    {
        const bool branch_taken_0x333a2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x333A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333A2Cu;
        // 0x333a30: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x333a2c) {
            ctx->pc = 0x333AA0u;
            goto label_333aa0;
        }
    }
    ctx->pc = 0x333A34u;
label_333a34:
    // 0x333a34: 0xc0ca1dc  jal         func_328770
    ctx->pc = 0x333A34u;
    SET_GPR_U32(ctx, 31, 0x333A3Cu);
    ctx->pc = 0x333A38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x333A34u;
    // 0x333a38: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x328770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x328770u, 0x333A34u, 0x333A3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x333A3Cu;
label_333a3c:
    // 0x333a3c: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x333a3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x333a40: 0x24080005  addiu       $t0, $zero, 0x5
    ctx->pc = 0x333a40u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x333a44: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x333a44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x333a48: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x333a48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x333a4c: 0x24a78000  addiu       $a3, $a1, -0x8000
    ctx->pc = 0x333a4cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 4294934528));
    // 0x333a50: 0xdce27ff0  ld          $v0, 0x7FF0($a3)
    ctx->pc = 0x333a50u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 7), 32752)));
    // 0x333a54: 0xfca20010  sd          $v0, 0x10($a1)
    ctx->pc = 0x333a54u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 16), GPR_U64(ctx, 2));
    // 0x333a58: 0xdce37ff8  ld          $v1, 0x7FF8($a3)
    ctx->pc = 0x333a58u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 7), 32760)));
    // 0x333a5c: 0xfca30018  sd          $v1, 0x18($a1)
    ctx->pc = 0x333a5cu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 24), GPR_U64(ctx, 3));
    // 0x333a60: 0xde420000  ld          $v0, 0x0($s2)
    ctx->pc = 0x333a60u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x333a64: 0x8e070000  lw          $a3, 0x0($s0)
    ctx->pc = 0x333a64u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x333a68: 0xfce20000  sd          $v0, 0x0($a3)
    ctx->pc = 0x333a68u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 2));
    // 0x333a6c: 0xde430008  ld          $v1, 0x8($s2)
    ctx->pc = 0x333a6cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x333a70: 0xfce30008  sd          $v1, 0x8($a3)
    ctx->pc = 0x333a70u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 8), GPR_U64(ctx, 3));
    // 0x333a74: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x333a74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x333a78: 0xac51fff8  sw          $s1, -0x8($v0)
    ctx->pc = 0x333a78u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294967288), GPR_U32(ctx, 17));
    // 0x333a7c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x333a7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x333a80: 0xac68fff0  sw          $t0, -0x10($v1)
    ctx->pc = 0x333a80u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294967280), GPR_U32(ctx, 8));
    // 0x333a84: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x333a84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x333a88: 0x24a20020  addiu       $v0, $a1, 0x20
    ctx->pc = 0x333a88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x333a8c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x333a8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x333a90: 0xc0ca2d0  jal         func_328B40
    ctx->pc = 0x333A90u;
    SET_GPR_U32(ctx, 31, 0x333A98u);
    ctx->pc = 0x333A94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x333A90u;
    // 0x333a94: 0x24a5fff0  addiu       $a1, $a1, -0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x328B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x328B40u, 0x333A90u, 0x333A98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x333A98u;
label_333a98:
    // 0x333a98: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x333a98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x333a9c: 0x2442fff0  addiu       $v0, $v0, -0x10
    ctx->pc = 0x333a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
label_333aa0:
    // 0x333aa0: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x333aa0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x333aa4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x333aa4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x333aa8: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x333aa8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x333aac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x333aacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x333ab0: 0x3e00008  jr          $ra
    ctx->pc = 0x333AB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x333AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333AB0u;
        // 0x333ab4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x333AB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x333AB8u;
}
