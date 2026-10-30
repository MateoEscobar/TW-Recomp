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

// Function: sub_0032CA88
// Address: 0x32ca88 - 0x32cbe8
void sub_0032CA88_0x32ca88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032CA88_0x32ca88");
#endif

    switch (ctx->pc) {
        case 0x32cabcu: goto label_32cabc;
        case 0x32cae4u: goto label_32cae4;
        case 0x32cb08u: goto label_32cb08;
        case 0x32cb24u: goto label_32cb24;
        case 0x32cb3cu: goto label_32cb3c;
        case 0x32cb78u: goto label_32cb78;
        case 0x32cb8cu: goto label_32cb8c;
        case 0x32cbccu: goto label_32cbcc;
        default: break;
    }

    ctx->pc = 0x32ca88u;

    // 0x32ca88: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x32ca88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x32ca8c: 0x2402003d  addiu       $v0, $zero, 0x3D
    ctx->pc = 0x32ca8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 61));
    // 0x32ca90: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x32ca90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x32ca94: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x32ca94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x32ca98: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x32ca98u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32ca9c: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x32ca9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x32caa0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x32caa0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32caa4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x32caa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x32caa8: 0x82230000  lb          $v1, 0x0($s1)
    ctx->pc = 0x32caa8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x32caac: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x32CAACu;
    {
        const bool branch_taken_0x32caac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x32CAB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32CAACu;
        // 0x32cab0: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32caac) {
            ctx->pc = 0x32CAC8u;
            goto label_32cac8;
        }
    }
    ctx->pc = 0x32CAB4u;
    // 0x32cab4: 0xc10c4de  jal         func_431378
    ctx->pc = 0x32CAB4u;
    SET_GPR_U32(ctx, 31, 0x32CABCu);
    ctx->pc = 0x32CAB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32CAB4u;
    // 0x32cab8: 0x26250001  addiu       $a1, $s1, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x431378u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x431378u, 0x32CAB4u, 0x32CABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32CABCu;
label_32cabc:
    // 0x32cabc: 0x2121821  addu        $v1, $s0, $s2
    ctx->pc = 0x32cabcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
    // 0x32cac0: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x32CAC0u;
    {
        const bool branch_taken_0x32cac0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32CAC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32CAC0u;
        // 0x32cac4: 0xa060ffff  sb          $zero, -0x1($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 4294967295), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32cac0) {
            ctx->pc = 0x32CBCCu;
            goto label_32cbcc;
        }
    }
    ctx->pc = 0x32CAC8u;
label_32cac8:
    // 0x32cac8: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x32cac8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x32cacc: 0x14620017  bne         $v1, $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x32CACCu;
    {
        const bool branch_taken_0x32cacc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x32CAD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32CACCu;
        // 0x32cad0: 0x3c050057  lui         $a1, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32cacc) {
            ctx->pc = 0x32CB2Cu;
            goto label_32cb2c;
        }
    }
    ctx->pc = 0x32CAD4u;
    // 0x32cad4: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x32cad4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x32cad8: 0x2610fff3  addiu       $s0, $s0, -0xD
    ctx->pc = 0x32cad8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967283));
    // 0x32cadc: 0xc10c3ac  jal         func_430EB0
    ctx->pc = 0x32CADCu;
    SET_GPR_U32(ctx, 31, 0x32CAE4u);
    ctx->pc = 0x32CAE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32CADCu;
    // 0x32cae0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430EB0u, 0x32CADCu, 0x32CAE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32CAE4u;
label_32cae4:
    // 0x32cae4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x32cae4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32cae8: 0x206102a  slt         $v0, $s0, $a2
    ctx->pc = 0x32cae8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x32caec: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x32CAECu;
    {
        const bool branch_taken_0x32caec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x32CAF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32CAECu;
        // 0x32caf0: 0xd03023  subu        $a2, $a2, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32caec) {
            ctx->pc = 0x32CB10u;
            goto label_32cb10;
        }
    }
    ctx->pc = 0x32CAF4u;
    // 0x32caf4: 0x3c050057  lui         $a1, 0x57
    ctx->pc = 0x32caf4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)87 << 16));
    // 0x32caf8: 0x2263021  addu        $a2, $s1, $a2
    ctx->pc = 0x32caf8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 6)));
    // 0x32cafc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x32cafcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32cb00: 0xc10ca28  jal         func_4328A0
    ctx->pc = 0x32CB00u;
    SET_GPR_U32(ctx, 31, 0x32CB08u);
    ctx->pc = 0x32CB04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32CB00u;
    // 0x32cb04: 0x24a55b78  addiu       $a1, $a1, 0x5B78 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23416));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4328A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4328A0u, 0x32CB00u, 0x32CB08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32CB08u;
label_32cb08:
    // 0x32cb08: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x32CB08u;
    {
        const bool branch_taken_0x32cb08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32CB0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32CB08u;
        // 0x32cb0c: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32cb08) {
            ctx->pc = 0x32CBD0u;
            goto label_32cbd0;
        }
    }
    ctx->pc = 0x32CB10u;
label_32cb10:
    // 0x32cb10: 0x3c050057  lui         $a1, 0x57
    ctx->pc = 0x32cb10u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)87 << 16));
    // 0x32cb14: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x32cb14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32cb18: 0x24a55b88  addiu       $a1, $a1, 0x5B88
    ctx->pc = 0x32cb18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23432));
    // 0x32cb1c: 0xc10ca28  jal         func_4328A0
    ctx->pc = 0x32CB1Cu;
    SET_GPR_U32(ctx, 31, 0x32CB24u);
    ctx->pc = 0x32CB20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32CB1Cu;
    // 0x32cb20: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4328A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4328A0u, 0x32CB1Cu, 0x32CB24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32CB24u;
label_32cb24:
    // 0x32cb24: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x32CB24u;
    {
        const bool branch_taken_0x32cb24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32CB28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32CB24u;
        // 0x32cb28: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32cb24) {
            ctx->pc = 0x32CBD0u;
            goto label_32cbd0;
        }
    }
    ctx->pc = 0x32CB2Cu;
label_32cb2c:
    // 0x32cb2c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x32cb2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32cb30: 0x24a55b98  addiu       $a1, $a1, 0x5B98
    ctx->pc = 0x32cb30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23448));
    // 0x32cb34: 0xc10d710  jal         func_435C40
    ctx->pc = 0x32CB34u;
    SET_GPR_U32(ctx, 31, 0x32CB3Cu);
    ctx->pc = 0x32CB38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32CB34u;
    // 0x32cb38: 0x2610ffef  addiu       $s0, $s0, -0x11 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967279));
    ctx->in_delay_slot = false;
    ctx->pc = 0x435C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x435C40u, 0x32CB34u, 0x32CB3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32CB3Cu;
label_32cb3c:
    // 0x32cb3c: 0x202182a  slt         $v1, $s0, $v0
    ctx->pc = 0x32cb3cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x32cb40: 0x43800a  movz        $s0, $v0, $v1
    ctx->pc = 0x32cb40u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 2));
    // 0x32cb44: 0x2301021  addu        $v0, $s1, $s0
    ctx->pc = 0x32cb44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x32cb48: 0x80430000  lb          $v1, 0x0($v0)
    ctx->pc = 0x32cb48u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x32cb4c: 0x1060001a  beqz        $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x32CB4Cu;
    {
        const bool branch_taken_0x32cb4c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x32CB50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32CB4Cu;
        // 0x32cb50: 0x3c020057  lui         $v0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32cb4c) {
            ctx->pc = 0x32CBB8u;
            goto label_32cbb8;
        }
    }
    ctx->pc = 0x32CB54u;
    // 0x32cb54: 0x24475ba0  addiu       $a3, $v0, 0x5BA0
    ctx->pc = 0x32cb54u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 23456));
    // 0x32cb58: 0x68e30007  ldl         $v1, 0x7($a3)
    ctx->pc = 0x32cb58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x32cb5c: 0x6ce30000  ldr         $v1, 0x0($a3)
    ctx->pc = 0x32cb5cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x32cb60: 0x80e50008  lb          $a1, 0x8($a3)
    ctx->pc = 0x32cb60u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x32cb64: 0xb2430007  sdl         $v1, 0x7($s2)
    ctx->pc = 0x32cb64u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x32cb68: 0xb6430000  sdr         $v1, 0x0($s2)
    ctx->pc = 0x32cb68u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x32cb6c: 0xa2450008  sb          $a1, 0x8($s2)
    ctx->pc = 0x32cb6cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 8), (uint8_t)GPR_U32(ctx, 5));
    // 0x32cb70: 0xc10c3ac  jal         func_430EB0
    ctx->pc = 0x32CB70u;
    SET_GPR_U32(ctx, 31, 0x32CB78u);
    ctx->pc = 0x32CB74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32CB70u;
    // 0x32cb74: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430EB0u, 0x32CB70u, 0x32CB78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32CB78u;
label_32cb78:
    // 0x32cb78: 0x2429021  addu        $s2, $s2, $v0
    ctx->pc = 0x32cb78u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x32cb7c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x32cb7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32cb80: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x32cb80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32cb84: 0xc10c4de  jal         func_431378
    ctx->pc = 0x32CB84u;
    SET_GPR_U32(ctx, 31, 0x32CB8Cu);
    ctx->pc = 0x32CB88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32CB84u;
    // 0x32cb88: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x431378u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x431378u, 0x32CB84u, 0x32CB8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32CB8Cu;
label_32cb8c:
    // 0x32cb8c: 0x2501821  addu        $v1, $s2, $s0
    ctx->pc = 0x32cb8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    // 0x32cb90: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x32cb90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
    // 0x32cb94: 0x24475bb0  addiu       $a3, $v0, 0x5BB0
    ctx->pc = 0x32cb94u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 23472));
    // 0x32cb98: 0x88e40003  lwl         $a0, 0x3($a3)
    ctx->pc = 0x32cb98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 4) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 4, (int32_t)merged); }
    // 0x32cb9c: 0x98e40000  lwr         $a0, 0x0($a3)
    ctx->pc = 0x32cb9cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 4) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 4) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 4, merged64); }
    // 0x32cba0: 0x80e50004  lb          $a1, 0x4($a3)
    ctx->pc = 0x32cba0u;
    SET_GPR_S32(ctx, 5, (int8_t)FAST_READ8(0x575BB4u));
    // 0x32cba4: 0xa8640003  swl         $a0, 0x3($v1)
    ctx->pc = 0x32cba4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 4); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x32cba8: 0xb8640000  swr         $a0, 0x0($v1)
    ctx->pc = 0x32cba8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 4); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x32cbac: 0xa0650004  sb          $a1, 0x4($v1)
    ctx->pc = 0x32cbacu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4), (uint8_t)GPR_U32(ctx, 5));
    // 0x32cbb0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x32CBB0u;
    {
        const bool branch_taken_0x32cbb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32CBB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32CBB0u;
        // 0x32cbb4: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32cbb0) {
            ctx->pc = 0x32CBD0u;
            goto label_32cbd0;
        }
    }
    ctx->pc = 0x32CBB8u;
label_32cbb8:
    // 0x32cbb8: 0x3c050057  lui         $a1, 0x57
    ctx->pc = 0x32cbb8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)87 << 16));
    // 0x32cbbc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x32cbbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32cbc0: 0x24a55bb8  addiu       $a1, $a1, 0x5BB8
    ctx->pc = 0x32cbc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23480));
    // 0x32cbc4: 0xc10ca28  jal         func_4328A0
    ctx->pc = 0x32CBC4u;
    SET_GPR_U32(ctx, 31, 0x32CBCCu);
    ctx->pc = 0x32CBC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32CBC4u;
    // 0x32cbc8: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4328A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4328A0u, 0x32CBC4u, 0x32CBCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32CBCCu;
label_32cbcc:
    // 0x32cbcc: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x32cbccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_32cbd0:
    // 0x32cbd0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x32cbd0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x32cbd4: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x32cbd4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32cbd8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x32cbd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32cbdc: 0x3e00008  jr          $ra
    ctx->pc = 0x32CBDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32CBE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32CBDCu;
        // 0x32cbe0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32CBDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32CBE4u;
    // 0x32cbe4: 0x0  nop
    ctx->pc = 0x32cbe4u;
    // NOP
    ctx->pc = 0x32cbe8u;
}
