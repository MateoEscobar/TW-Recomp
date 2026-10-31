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

// Function: sub_00277F28
// Address: 0x277f28 - 0x278018
void sub_00277F28_0x277f28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00277F28_0x277f28");
#endif

    switch (ctx->pc) {
        case 0x277f44u: goto label_277f44;
        case 0x277f70u: goto label_277f70;
        case 0x277f7cu: goto label_277f7c;
        case 0x277f88u: goto label_277f88;
        case 0x277f94u: goto label_277f94;
        case 0x277fc4u: goto label_277fc4;
        case 0x277fd0u: goto label_277fd0;
        case 0x277fdcu: goto label_277fdc;
        case 0x277fe8u: goto label_277fe8;
        case 0x277ff0u: goto label_277ff0;
        case 0x278000u: goto label_278000;
        default: break;
    }

    ctx->pc = 0x277f28u;

    // 0x277f28: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x277f28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x277f2c: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x277f2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x277f30: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x277f30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x277f34: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x277f34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x277f38: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x277f38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x277f3c: 0xc088e30  jal         func_2238C0
    ctx->pc = 0x277F3Cu;
    SET_GPR_U32(ctx, 31, 0x277F44u);
    ctx->pc = 0x277F40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x277F3Cu;
    // 0x277f40: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2238C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2238C0u, 0x277F3Cu, 0x277F44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277F44u;
label_277f44:
    // 0x277f44: 0x1040002e  beqz        $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x277F44u;
    {
        const bool branch_taken_0x277f44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x277F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277F44u;
        // 0x277f48: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x277f44) {
            ctx->pc = 0x278000u;
            goto label_278000;
        }
    }
    ctx->pc = 0x277F4Cu;
    // 0x277f4c: 0x3c020056  lui         $v0, 0x56
    ctx->pc = 0x277f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
    // 0x277f50: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x277f50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    // 0x277f54: 0x2447e730  addiu       $a3, $v0, -0x18D0
    ctx->pc = 0x277f54u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960944));
    // 0x277f58: 0x68e30007  ldl         $v1, 0x7($a3)
    ctx->pc = 0x277f58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x277f5c: 0x6ce30000  ldr         $v1, 0x0($a3)
    ctx->pc = 0x277f5cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x277f60: 0xb3a30007  sdl         $v1, 0x7($sp)
    ctx->pc = 0x277f60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x277f64: 0xb7a30000  sdr         $v1, 0x0($sp)
    ctx->pc = 0x277f64u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x277f68: 0xc0e8b48  jal         func_3A2D20
    ctx->pc = 0x277F68u;
    SET_GPR_U32(ctx, 31, 0x277F70u);
    ctx->pc = 0x277F6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x277F68u;
    // 0x277f6c: 0x2451e730  addiu       $s1, $v0, -0x18D0 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960944));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D20u, 0x277F68u, 0x277F70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277F70u;
label_277f70:
    // 0x277f70: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x277f70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    // 0x277f74: 0xc0e8b68  jal         func_3A2DA0
    ctx->pc = 0x277F74u;
    SET_GPR_U32(ctx, 31, 0x277F7Cu);
    ctx->pc = 0x277F78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x277F74u;
    // 0x277f78: 0x8e450640  lw          $a1, 0x640($s2) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1600)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2DA0u, 0x277F74u, 0x277F7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277F7Cu;
label_277f7c:
    // 0x277f7c: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x277f7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    // 0x277f80: 0xc0e8b70  jal         func_3A2DC0
    ctx->pc = 0x277F80u;
    SET_GPR_U32(ctx, 31, 0x277F88u);
    ctx->pc = 0x277F84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x277F80u;
    // 0x277f84: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2DC0u, 0x277F80u, 0x277F88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277F88u;
label_277f88:
    // 0x277f88: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x277f88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    // 0x277f8c: 0xc0e8b68  jal         func_3A2DA0
    ctx->pc = 0x277F8Cu;
    SET_GPR_U32(ctx, 31, 0x277F94u);
    ctx->pc = 0x277F90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x277F8Cu;
    // 0x277f90: 0x24050013  addiu       $a1, $zero, 0x13 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2DA0u, 0x277F8Cu, 0x277F94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277F94u;
label_277f94:
    // 0x277f94: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x277f94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x277f98: 0x27a30010  addiu       $v1, $sp, 0x10
    ctx->pc = 0x277f98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x277f9c: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x277f9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
    // 0x277fa0: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x277fa0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277fa4: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x277fa4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x277fa8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x277fa8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x277fac: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x277facu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x277fb0: 0x7a420020  lq          $v0, 0x20($s2)
    ctx->pc = 0x277fb0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x277fb4: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x277fb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x277fb8: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x277fb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    // 0x277fbc: 0xc0e8b58  jal         func_3A2D60
    ctx->pc = 0x277FBCu;
    SET_GPR_U32(ctx, 31, 0x277FC4u);
    ctx->pc = 0x277FC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x277FBCu;
    // 0x277fc0: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D60u, 0x277FBCu, 0x277FC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277FC4u;
label_277fc4:
    // 0x277fc4: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x277fc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    // 0x277fc8: 0xc0e8b58  jal         func_3A2D60
    ctx->pc = 0x277FC8u;
    SET_GPR_U32(ctx, 31, 0x277FD0u);
    ctx->pc = 0x277FCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x277FC8u;
    // 0x277fcc: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D60u, 0x277FC8u, 0x277FD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277FD0u;
label_277fd0:
    // 0x277fd0: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x277fd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    // 0x277fd4: 0xc0e8b68  jal         func_3A2DA0
    ctx->pc = 0x277FD4u;
    SET_GPR_U32(ctx, 31, 0x277FDCu);
    ctx->pc = 0x277FD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x277FD4u;
    // 0x277fd8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2DA0u, 0x277FD4u, 0x277FDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277FDCu;
label_277fdc:
    // 0x277fdc: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x277fdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    // 0x277fe0: 0xc0e8b90  jal         func_3A2E40
    ctx->pc = 0x277FE0u;
    SET_GPR_U32(ctx, 31, 0x277FE8u);
    ctx->pc = 0x277FE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x277FE0u;
    // 0x277fe4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2E40u, 0x277FE0u, 0x277FE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277FE8u;
label_277fe8:
    // 0x277fe8: 0xc0e8b50  jal         func_3A2D40
    ctx->pc = 0x277FE8u;
    SET_GPR_U32(ctx, 31, 0x277FF0u);
    ctx->pc = 0x277FECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x277FE8u;
    // 0x277fec: 0x8e042c7c  lw          $a0, 0x2C7C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D40u, 0x277FE8u, 0x277FF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277FF0u;
label_277ff0:
    // 0x277ff0: 0x3c050056  lui         $a1, 0x56
    ctx->pc = 0x277ff0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)86 << 16));
    // 0x277ff4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x277ff4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277ff8: 0xc087b94  jal         func_21EE50
    ctx->pc = 0x277FF8u;
    SET_GPR_U32(ctx, 31, 0x278000u);
    ctx->pc = 0x277FFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x277FF8u;
    // 0x277ffc: 0x24a5e738  addiu       $a1, $a1, -0x18C8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960952));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21EE50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21EE50u, 0x277FF8u, 0x278000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x278000u;
label_278000:
    // 0x278000: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x278000u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x278004: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x278004u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x278008: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x278008u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x27800c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x27800cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x278010: 0x3e00008  jr          $ra
    ctx->pc = 0x278010u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x278014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278010u;
        // 0x278014: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x278010u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x278018u;
}
