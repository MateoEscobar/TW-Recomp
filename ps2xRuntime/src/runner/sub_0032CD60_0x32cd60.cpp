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

// Function: sub_0032CD60
// Address: 0x32cd60 - 0x32ce18
void sub_0032CD60_0x32cd60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032CD60_0x32cd60");
#endif

    switch (ctx->pc) {
        case 0x32cda8u: goto label_32cda8;
        case 0x32cdb8u: goto label_32cdb8;
        case 0x32cdc8u: goto label_32cdc8;
        case 0x32cde4u: goto label_32cde4;
        case 0x32cdf0u: goto label_32cdf0;
        case 0x32cdf8u: goto label_32cdf8;
        default: break;
    }

    ctx->pc = 0x32cd60u;

    // 0x32cd60: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x32cd60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x32cd64: 0x7fb200c0  sq          $s2, 0xC0($sp)
    ctx->pc = 0x32cd64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 18));
    // 0x32cd68: 0x7fb300b0  sq          $s3, 0xB0($sp)
    ctx->pc = 0x32cd68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 19));
    // 0x32cd6c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x32cd6cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32cd70: 0x7fb400a0  sq          $s4, 0xA0($sp)
    ctx->pc = 0x32cd70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 20));
    // 0x32cd74: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x32cd74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32cd78: 0x7fb000e0  sq          $s0, 0xE0($sp)
    ctx->pc = 0x32cd78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 16));
    // 0x32cd7c: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x32cd7cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32cd80: 0x7fb100d0  sq          $s1, 0xD0($sp)
    ctx->pc = 0x32cd80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 17));
    // 0x32cd84: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x32cd84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x32cd88: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x32cd88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x32cd8c: 0x10440018  beq         $v0, $a0, . + 4 + (0x18 << 2)
    ctx->pc = 0x32CD8Cu;
    {
        const bool branch_taken_0x32cd8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x32CD90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32CD8Cu;
        // 0x32cd90: 0xe0982d  daddu       $s3, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32cd8c) {
            ctx->pc = 0x32CDF0u;
            goto label_32cdf0;
        }
    }
    ctx->pc = 0x32CD94u;
    // 0x32cd94: 0x8e420034  lw          $v0, 0x34($s2)
    ctx->pc = 0x32cd94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
    // 0x32cd98: 0x16620005  bne         $s3, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x32CD98u;
    {
        const bool branch_taken_0x32cd98 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x32CD9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32CD98u;
        // 0x32cd9c: 0x27b10070  addiu       $s1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32cd98) {
            ctx->pc = 0x32CDB0u;
            goto label_32cdb0;
        }
    }
    ctx->pc = 0x32CDA0u;
    // 0x32cda0: 0xc0cb31e  jal         func_32CC78
    ctx->pc = 0x32CDA0u;
    SET_GPR_U32(ctx, 31, 0x32CDA8u);
    ctx->pc = 0x32CDA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32CDA0u;
    // 0x32cda4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32CC78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32CC78u, 0x32CDA0u, 0x32CDA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32CDA8u;
label_32cda8:
    // 0x32cda8: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x32CDA8u;
    {
        const bool branch_taken_0x32cda8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32cda8) {
            ctx->pc = 0x32CDF0u;
            goto label_32cdf0;
        }
    }
    ctx->pc = 0x32CDB0u;
label_32cdb0:
    // 0x32cdb0: 0xc0ca8d6  jal         func_32A358
    ctx->pc = 0x32CDB0u;
    SET_GPR_U32(ctx, 31, 0x32CDB8u);
    ctx->pc = 0x32CDB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32CDB0u;
    // 0x32cdb4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32A358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32A358u, 0x32CDB0u, 0x32CDB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32CDB8u;
label_32cdb8:
    // 0x32cdb8: 0x27b00080  addiu       $s0, $sp, 0x80
    ctx->pc = 0x32cdb8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x32cdbc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x32cdbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32cdc0: 0xc0ca8d6  jal         func_32A358
    ctx->pc = 0x32CDC0u;
    SET_GPR_U32(ctx, 31, 0x32CDC8u);
    ctx->pc = 0x32CDC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32CDC0u;
    // 0x32cdc4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32A358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32A358u, 0x32CDC0u, 0x32CDC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32CDC8u;
label_32cdc8:
    // 0x32cdc8: 0x3c050057  lui         $a1, 0x57
    ctx->pc = 0x32cdc8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)87 << 16));
    // 0x32cdcc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x32cdccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32cdd0: 0x24a55be8  addiu       $a1, $a1, 0x5BE8
    ctx->pc = 0x32cdd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23528));
    // 0x32cdd4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x32cdd4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32cdd8: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x32cdd8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32cddc: 0xc10ca28  jal         func_4328A0
    ctx->pc = 0x32CDDCu;
    SET_GPR_U32(ctx, 31, 0x32CDE4u);
    ctx->pc = 0x32CDE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32CDDCu;
    // 0x32cde0: 0x260402d  daddu       $t0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4328A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4328A0u, 0x32CDDCu, 0x32CDE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32CDE4u;
label_32cde4:
    // 0x32cde4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x32cde4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32cde8: 0xc0c9968  jal         func_3265A0
    ctx->pc = 0x32CDE8u;
    SET_GPR_U32(ctx, 31, 0x32CDF0u);
    ctx->pc = 0x32CDECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32CDE8u;
    // 0x32cdec: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3265A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3265A0u, 0x32CDE8u, 0x32CDF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32CDF0u;
label_32cdf0:
    // 0x32cdf0: 0xc0cb2fa  jal         func_32CBE8
    ctx->pc = 0x32CDF0u;
    SET_GPR_U32(ctx, 31, 0x32CDF8u);
    ctx->pc = 0x32CDF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32CDF0u;
    // 0x32cdf4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32CBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32CBE8u, 0x32CDF0u, 0x32CDF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32CDF8u;
label_32cdf8:
    // 0x32cdf8: 0x7bb000e0  lq          $s0, 0xE0($sp)
    ctx->pc = 0x32cdf8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x32cdfc: 0x7bb100d0  lq          $s1, 0xD0($sp)
    ctx->pc = 0x32cdfcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x32ce00: 0x7bb200c0  lq          $s2, 0xC0($sp)
    ctx->pc = 0x32ce00u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x32ce04: 0x7bb300b0  lq          $s3, 0xB0($sp)
    ctx->pc = 0x32ce04u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x32ce08: 0x7bb400a0  lq          $s4, 0xA0($sp)
    ctx->pc = 0x32ce08u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x32ce0c: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x32ce0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x32ce10: 0x3e00008  jr          $ra
    ctx->pc = 0x32CE10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32CE14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32CE10u;
        // 0x32ce14: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32CE10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32CE18u;
}
