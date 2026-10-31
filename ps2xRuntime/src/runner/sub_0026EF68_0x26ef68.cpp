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

// Function: sub_0026EF68
// Address: 0x26ef68 - 0x26f008
void sub_0026EF68_0x26ef68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026EF68_0x26ef68");
#endif

    switch (ctx->pc) {
        case 0x26ef84u: goto label_26ef84;
        case 0x26efacu: goto label_26efac;
        case 0x26efd4u: goto label_26efd4;
        case 0x26efe4u: goto label_26efe4;
        case 0x26eff4u: goto label_26eff4;
        default: break;
    }

    ctx->pc = 0x26ef68u;

    // 0x26ef68: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x26ef68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x26ef6c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x26ef6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x26ef70: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x26ef70u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ef74: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x26ef74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x26ef78: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x26ef78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x26ef7c: 0xc0e409a  jal         func_390268
    ctx->pc = 0x26EF7Cu;
    SET_GPR_U32(ctx, 31, 0x26EF84u);
    ctx->pc = 0x26EF80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26EF7Cu;
    // 0x26ef80: 0x262400c4  addiu       $a0, $s1, 0xC4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 196));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x26EF7Cu, 0x26EF84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26EF84u;
label_26ef84:
    // 0x26ef84: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x26ef84u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ef88: 0x12000014  beqz        $s0, . + 4 + (0x14 << 2)
    ctx->pc = 0x26EF88u;
    {
        const bool branch_taken_0x26ef88 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x26EF8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26EF88u;
        // 0x26ef8c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ef88) {
            ctx->pc = 0x26EFDCu;
            goto label_26efdc;
        }
    }
    ctx->pc = 0x26EF90u;
    // 0x26ef90: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x26ef90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x26ef94: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x26ef94u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x26ef98: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x26ef98u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x26ef9c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x26ef9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26efa0: 0x240600d2  addiu       $a2, $zero, 0xD2
    ctx->pc = 0x26efa0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 210));
    // 0x26efa4: 0xc09dc92  jal         func_277248
    ctx->pc = 0x26EFA4u;
    SET_GPR_U32(ctx, 31, 0x26EFACu);
    ctx->pc = 0x26EFA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26EFA4u;
    // 0x26efa8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277248u, 0x26EFA4u, 0x26EFACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26EFACu;
label_26efac:
    // 0x26efac: 0xde0200e0  ld          $v0, 0xE0($s0)
    ctx->pc = 0x26efacu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 224)));
    // 0x26efb0: 0x3c030002  lui         $v1, 0x2
    ctx->pc = 0x26efb0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
    // 0x26efb4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x26efb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x26efb8: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x26efb8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x26efbc: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x26efbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x26efc0: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x26efc0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x26efc4: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x26EFC4u;
    {
        const bool branch_taken_0x26efc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26EFC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26EFC4u;
        // 0x26efc8: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26efc4) {
            ctx->pc = 0x26EFF8u;
            goto label_26eff8;
        }
    }
    ctx->pc = 0x26EFCCu;
    // 0x26efcc: 0xc09c51c  jal         func_271470
    ctx->pc = 0x26EFCCu;
    SET_GPR_U32(ctx, 31, 0x26EFD4u);
    ctx->pc = 0x26EFD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26EFCCu;
    // 0x26efd0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x271470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x271470u, 0x26EFCCu, 0x26EFD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26EFD4u;
label_26efd4:
    // 0x26efd4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x26EFD4u;
    {
        const bool branch_taken_0x26efd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26EFD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26EFD4u;
        // 0x26efd8: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26efd4) {
            ctx->pc = 0x26EFF8u;
            goto label_26eff8;
        }
    }
    ctx->pc = 0x26EFDCu;
label_26efdc:
    // 0x26efdc: 0xc088e40  jal         func_223900
    ctx->pc = 0x26EFDCu;
    SET_GPR_U32(ctx, 31, 0x26EFE4u);
    ctx->pc = 0x26EFE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26EFDCu;
    // 0x26efe0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223900u, 0x26EFDCu, 0x26EFE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26EFE4u;
label_26efe4:
    // 0x26efe4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x26EFE4u;
    {
        const bool branch_taken_0x26efe4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26EFE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26EFE4u;
        // 0x26efe8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26efe4) {
            ctx->pc = 0x26EFF4u;
            goto label_26eff4;
        }
    }
    ctx->pc = 0x26EFECu;
    // 0x26efec: 0xc08b0e2  jal         func_22C388
    ctx->pc = 0x26EFECu;
    SET_GPR_U32(ctx, 31, 0x26EFF4u);
    ctx->pc = 0x26EFF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26EFECu;
    // 0x26eff0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22C388u, 0x26EFECu, 0x26EFF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26EFF4u;
label_26eff4:
    // 0x26eff4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x26eff4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_26eff8:
    // 0x26eff8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x26eff8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26effc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x26effcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26f000: 0x3e00008  jr          $ra
    ctx->pc = 0x26F000u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26F004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F000u;
        // 0x26f004: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26F000u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26F008u;
}
