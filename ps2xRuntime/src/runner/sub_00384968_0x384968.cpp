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

// Function: sub_00384968
// Address: 0x384968 - 0x384a10
void sub_00384968_0x384968(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00384968_0x384968");
#endif

    switch (ctx->pc) {
        case 0x384968u: goto label_384968;
        case 0x38496cu: goto label_38496c;
        case 0x384970u: goto label_384970;
        case 0x384974u: goto label_384974;
        case 0x384978u: goto label_384978;
        case 0x38497cu: goto label_38497c;
        case 0x384980u: goto label_384980;
        case 0x384984u: goto label_384984;
        case 0x384988u: goto label_384988;
        case 0x38498cu: goto label_38498c;
        case 0x384990u: goto label_384990;
        case 0x384994u: goto label_384994;
        case 0x384998u: goto label_384998;
        case 0x38499cu: goto label_38499c;
        case 0x3849a0u: goto label_3849a0;
        case 0x3849a4u: goto label_3849a4;
        case 0x3849a8u: goto label_3849a8;
        case 0x3849acu: goto label_3849ac;
        case 0x3849b0u: goto label_3849b0;
        case 0x3849b4u: goto label_3849b4;
        case 0x3849b8u: goto label_3849b8;
        case 0x3849bcu: goto label_3849bc;
        case 0x3849c0u: goto label_3849c0;
        case 0x3849c4u: goto label_3849c4;
        case 0x3849c8u: goto label_3849c8;
        case 0x3849ccu: goto label_3849cc;
        case 0x3849d0u: goto label_3849d0;
        case 0x3849d4u: goto label_3849d4;
        case 0x3849d8u: goto label_3849d8;
        case 0x3849dcu: goto label_3849dc;
        case 0x3849e0u: goto label_3849e0;
        case 0x3849e4u: goto label_3849e4;
        case 0x3849e8u: goto label_3849e8;
        case 0x3849ecu: goto label_3849ec;
        case 0x3849f0u: goto label_3849f0;
        case 0x3849f4u: goto label_3849f4;
        case 0x3849f8u: goto label_3849f8;
        case 0x3849fcu: goto label_3849fc;
        case 0x384a00u: goto label_384a00;
        case 0x384a04u: goto label_384a04;
        case 0x384a08u: goto label_384a08;
        case 0x384a0cu: goto label_384a0c;
        default: break;
    }

    ctx->pc = 0x384968u;

label_384968:
    // 0x384968: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x384968u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_38496c:
    // 0x38496c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x38496cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_384970:
    // 0x384970: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x384970u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_384974:
    // 0x384974: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x384974u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_384978:
    // 0x384978: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x384978u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_38497c:
    // 0x38497c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x38497cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_384980:
    // 0x384980: 0x84640038  lh          $a0, 0x38($v1)
    ctx->pc = 0x384980u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 56)));
label_384984:
    // 0x384984: 0x8c62003c  lw          $v0, 0x3C($v1)
    ctx->pc = 0x384984u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 60)));
label_384988:
    // 0x384988: 0x40f809  jalr        $v0
label_38498c:
    if (ctx->pc == 0x38498Cu) {
        ctx->pc = 0x38498Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384988u;
        // 0x38498c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x384990u;
        goto label_384990;
    }
    ctx->pc = 0x384988u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x384990u);
        ctx->pc = 0x38498Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384988u;
        // 0x38498c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x384988u, 0x384990u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x384990u;
label_384990:
    // 0x384990: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x384990u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_384994:
    // 0x384994: 0x52200019  beql        $s1, $zero, . + 4 + (0x19 << 2)
label_384998:
    if (ctx->pc == 0x384998u) {
        ctx->pc = 0x384998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384994u;
        // 0x384998: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38499Cu;
        goto label_38499c;
    }
    ctx->pc = 0x384994u;
    {
        const bool branch_taken_0x384994 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x384994) {
            ctx->pc = 0x384998u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x384994u;
            // 0x384998: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3849FCu;
            goto label_3849fc;
        }
    }
    ctx->pc = 0x38499Cu;
label_38499c:
    // 0x38499c: 0xc0e1294  jal         func_384A50
label_3849a0:
    if (ctx->pc == 0x3849A0u) {
        ctx->pc = 0x3849A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38499Cu;
        // 0x3849a0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3849A4u;
        goto label_3849a4;
    }
    ctx->pc = 0x38499Cu;
    SET_GPR_U32(ctx, 31, 0x3849A4u);
    ctx->pc = 0x3849A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38499Cu;
    // 0x3849a0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x384A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x384A50u, 0x38499Cu, 0x3849A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3849A4u;
label_3849a4:
    // 0x3849a4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x3849a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3849a8:
    // 0x3849a8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3849a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3849ac:
    // 0x3849ac: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x3849acu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
label_3849b0:
    // 0x3849b0: 0x8c430034  lw          $v1, 0x34($v0)
    ctx->pc = 0x3849b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_3849b4:
    // 0x3849b4: 0x60f809  jalr        $v1
label_3849b8:
    if (ctx->pc == 0x3849B8u) {
        ctx->pc = 0x3849B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3849B4u;
        // 0x3849b8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3849BCu;
        goto label_3849bc;
    }
    ctx->pc = 0x3849B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3849BCu);
        ctx->pc = 0x3849B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3849B4u;
        // 0x3849b8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3849B4u, 0x3849BCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3849BCu;
label_3849bc:
    // 0x3849bc: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x3849bcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3849c0:
    // 0x3849c0: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x3849c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_3849c4:
    // 0x3849c4: 0x8c502b24  lw          $s0, 0x2B24($v0)
    ctx->pc = 0x3849c4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11044)));
label_3849c8:
    // 0x3849c8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x3849c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3849cc:
    // 0x3849cc: 0x84c40060  lh          $a0, 0x60($a2)
    ctx->pc = 0x3849ccu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 96)));
label_3849d0:
    // 0x3849d0: 0x8cc20064  lw          $v0, 0x64($a2)
    ctx->pc = 0x3849d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 100)));
label_3849d4:
    // 0x3849d4: 0x40f809  jalr        $v0
label_3849d8:
    if (ctx->pc == 0x3849D8u) {
        ctx->pc = 0x3849D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3849D4u;
        // 0x3849d8: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3849DCu;
        goto label_3849dc;
    }
    ctx->pc = 0x3849D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3849DCu);
        ctx->pc = 0x3849D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3849D4u;
        // 0x3849d8: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3849D4u, 0x3849DCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3849DCu;
label_3849dc:
    // 0x3849dc: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x3849dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_3849e0:
    // 0x3849e0: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x3849e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_3849e4:
    // 0x3849e4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x3849e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_3849e8:
    // 0x3849e8: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x3849e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_3849ec:
    // 0x3849ec: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x3849ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
label_3849f0:
    // 0x3849f0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x3849f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_3849f4:
    // 0x3849f4: 0xac510000  sw          $s1, 0x0($v0)
    ctx->pc = 0x3849f4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 17));
label_3849f8:
    // 0x3849f8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x3849f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3849fc:
    // 0x3849fc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3849fcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_384a00:
    // 0x384a00: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x384a00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_384a04:
    // 0x384a04: 0x3e00008  jr          $ra
label_384a08:
    if (ctx->pc == 0x384A08u) {
        ctx->pc = 0x384A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384A04u;
        // 0x384a08: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x384A0Cu;
        goto label_384a0c;
    }
    ctx->pc = 0x384A04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x384A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384A04u;
        // 0x384a08: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x384A04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x384A0Cu;
label_384a0c:
    // 0x384a0c: 0x0  nop
    ctx->pc = 0x384a0cu;
    // NOP
    ctx->pc = 0x384a10u;
}
