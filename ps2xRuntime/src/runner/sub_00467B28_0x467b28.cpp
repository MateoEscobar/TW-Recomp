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

// Function: sub_00467B28
// Address: 0x467b28 - 0x468050
void sub_00467B28_0x467b28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00467B28_0x467b28");
#endif

    switch (ctx->pc) {
        case 0x467b78u: goto label_467b78;
        case 0x467bacu: goto label_467bac;
        case 0x467bc4u: goto label_467bc4;
        case 0x467c00u: goto label_467c00;
        case 0x467c10u: goto label_467c10;
        case 0x467c8cu: goto label_467c8c;
        case 0x467cfcu: goto label_467cfc;
        case 0x467d08u: goto label_467d08;
        case 0x467d24u: goto label_467d24;
        case 0x467d68u: goto label_467d68;
        case 0x467d74u: goto label_467d74;
        case 0x467d8cu: goto label_467d8c;
        case 0x467dd8u: goto label_467dd8;
        case 0x467de4u: goto label_467de4;
        case 0x467dfcu: goto label_467dfc;
        case 0x467e28u: goto label_467e28;
        case 0x467e58u: goto label_467e58;
        case 0x467e64u: goto label_467e64;
        case 0x467e78u: goto label_467e78;
        case 0x467ed4u: goto label_467ed4;
        case 0x467ee0u: goto label_467ee0;
        case 0x467efcu: goto label_467efc;
        case 0x467f28u: goto label_467f28;
        case 0x467facu: goto label_467fac;
        case 0x467fc4u: goto label_467fc4;
        case 0x467fe4u: goto label_467fe4;
        case 0x468004u: goto label_468004;
        case 0x468014u: goto label_468014;
        default: break;
    }

    ctx->pc = 0x467b28u;

    // 0x467b28: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x467b28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
    // 0x467b2c: 0x7fb100f0  sq          $s1, 0xF0($sp)
    ctx->pc = 0x467b2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 17));
    // 0x467b30: 0x7fb500b0  sq          $s5, 0xB0($sp)
    ctx->pc = 0x467b30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 21));
    // 0x467b34: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x467b34u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x467b38: 0x7fb70090  sq          $s7, 0x90($sp)
    ctx->pc = 0x467b38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 23));
    // 0x467b3c: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x467b3cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x467b40: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x467b40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x467b44: 0x80b82d  daddu       $s7, $a0, $zero
    ctx->pc = 0x467b44u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x467b48: 0x7fb400c0  sq          $s4, 0xC0($sp)
    ctx->pc = 0x467b48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 20));
    // 0x467b4c: 0xc0f02d  daddu       $fp, $a2, $zero
    ctx->pc = 0x467b4cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x467b50: 0x7fb00100  sq          $s0, 0x100($sp)
    ctx->pc = 0x467b50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 16));
    // 0x467b54: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x467b54u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x467b58: 0x7fb200e0  sq          $s2, 0xE0($sp)
    ctx->pc = 0x467b58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 18));
    // 0x467b5c: 0x7fb300d0  sq          $s3, 0xD0($sp)
    ctx->pc = 0x467b5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 19));
    // 0x467b60: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x467b60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x467b64: 0x7fb600a0  sq          $s6, 0xA0($sp)
    ctx->pc = 0x467b64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 22));
    // 0x467b68: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x467b68u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x467b6c: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x467b6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x467b70: 0xc11eeae  jal         func_47BAB8
    ctx->pc = 0x467B70u;
    SET_GPR_U32(ctx, 31, 0x467B78u);
    ctx->pc = 0x467B74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x467B70u;
    // 0x467b74: 0x27a70060  addiu       $a3, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47BAB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47BAB8u, 0x467B70u, 0x467B78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x467B78u;
label_467b78:
    // 0x467b78: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x467B78u;
    {
        const bool branch_taken_0x467b78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x467B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x467B78u;
        // 0x467b7c: 0x8fa30060  lw          $v1, 0x60($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x467b78) {
            ctx->pc = 0x467C10u;
            goto label_467c10;
        }
    }
    ctx->pc = 0x467B80u;
    // 0x467b80: 0x3c02fffc  lui         $v0, 0xFFFC
    ctx->pc = 0x467b80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65532 << 16));
    // 0x467b84: 0x3442b000  ori         $v0, $v0, 0xB000
    ctx->pc = 0x467b84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)45056);
    // 0x467b88: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x467b88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x467b8c: 0x2c632003  sltiu       $v1, $v1, 0x2003
    ctx->pc = 0x467b8cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)8195) ? 1 : 0);
    // 0x467b90: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x467B90u;
    {
        const bool branch_taken_0x467b90 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x467B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x467B90u;
        // 0x467b94: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x467b90) {
            ctx->pc = 0x467BB8u;
            goto label_467bb8;
        }
    }
    ctx->pc = 0x467B98u;
    // 0x467b98: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x467b98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x467b9c: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x467b9cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x467ba0: 0xafa20030  sw          $v0, 0x30($sp)
    ctx->pc = 0x467ba0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
    // 0x467ba4: 0xc11eff2  jal         func_47BFC8
    ctx->pc = 0x467BA4u;
    SET_GPR_U32(ctx, 31, 0x467BACu);
    ctx->pc = 0x467BA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x467BA4u;
    // 0x467ba8: 0x34840004  ori         $a0, $a0, 0x4 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4);
    ctx->in_delay_slot = false;
    ctx->pc = 0x47BFC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47BFC8u, 0x467BA4u, 0x467BACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x467BACu;
label_467bac:
    // 0x467bac: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x467BACu;
    {
        const bool branch_taken_0x467bac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x467BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x467BACu;
        // 0x467bb0: 0xafa20034  sw          $v0, 0x34($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x467bac) {
            ctx->pc = 0x467C08u;
            goto label_467c08;
        }
    }
    ctx->pc = 0x467BB4u;
    // 0x467bb4: 0x0  nop
    ctx->pc = 0x467bb4u;
    // NOP
label_467bb8:
    // 0x467bb8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x467bb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x467bbc: 0xc11fb56  jal         func_47ED58
    ctx->pc = 0x467BBCu;
    SET_GPR_U32(ctx, 31, 0x467BC4u);
    ctx->pc = 0x467BC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x467BBCu;
    // 0x467bc0: 0x2406002c  addiu       $a2, $zero, 0x2C (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47ED58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47ED58u, 0x467BBCu, 0x467BC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x467BC4u;
label_467bc4:
    // 0x467bc4: 0x2403002c  addiu       $v1, $zero, 0x2C
    ctx->pc = 0x467bc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    // 0x467bc8: 0x14430115  bne         $v0, $v1, . + 4 + (0x115 << 2)
    ctx->pc = 0x467BC8u;
    {
        const bool branch_taken_0x467bc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x467BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x467BC8u;
        // 0x467bcc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x467bc8) {
            ctx->pc = 0x468020u;
            goto label_468020;
        }
    }
    ctx->pc = 0x467BD0u;
    // 0x467bd0: 0x3c030053  lui         $v1, 0x53
    ctx->pc = 0x467bd0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)83 << 16));
    // 0x467bd4: 0x8eb20000  lw          $s2, 0x0($s5)
    ctx->pc = 0x467bd4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x467bd8: 0x8c62e750  lw          $v0, -0x18B0($v1)
    ctx->pc = 0x467bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x52E750u));
    // 0x467bdc: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x467bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x467be0: 0x1640000d  bnez        $s2, . + 4 + (0xD << 2)
    ctx->pc = 0x467BE0u;
    {
        const bool branch_taken_0x467be0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x467BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x467BE0u;
        // 0x467be4: 0xaea20000  sw          $v0, 0x0($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x467be0) {
            ctx->pc = 0x467C18u;
            goto label_467c18;
        }
    }
    ctx->pc = 0x467BE8u;
    // 0x467be8: 0x8c65e750  lw          $a1, -0x18B0($v1)
    ctx->pc = 0x467be8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960976)));
    // 0x467bec: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x467becu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x467bf0: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x467bf0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x467bf4: 0xafa20030  sw          $v0, 0x30($sp)
    ctx->pc = 0x467bf4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
    // 0x467bf8: 0xc11eff2  jal         func_47BFC8
    ctx->pc = 0x467BF8u;
    SET_GPR_U32(ctx, 31, 0x467C00u);
    ctx->pc = 0x467BFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x467BF8u;
    // 0x467bfc: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
    ctx->in_delay_slot = false;
    ctx->pc = 0x47BFC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47BFC8u, 0x467BF8u, 0x467C00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x467C00u;
label_467c00:
    // 0x467c00: 0xafa20034  sw          $v0, 0x34($sp)
    ctx->pc = 0x467c00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 2));
    // 0x467c04: 0x0  nop
    ctx->pc = 0x467c04u;
    // NOP
label_467c08:
    // 0x467c08: 0xc11f024  jal         func_47C090
    ctx->pc = 0x467C08u;
    SET_GPR_U32(ctx, 31, 0x467C10u);
    ctx->pc = 0x467C0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x467C08u;
    // 0x467c0c: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47C090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47C090u, 0x467C08u, 0x467C10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x467C10u;
label_467c10:
    // 0x467c10: 0x10000103  b           . + 4 + (0x103 << 2)
    ctx->pc = 0x467C10u;
    {
        const bool branch_taken_0x467c10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x467C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x467C10u;
        // 0x467c14: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x467c10) {
            ctx->pc = 0x468020u;
            goto label_468020;
        }
    }
    ctx->pc = 0x467C18u;
label_467c18:
    // 0x467c18: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x467c18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x467c1c: 0x26440010  addiu       $a0, $s2, 0x10
    ctx->pc = 0x467c1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x467c20: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x467c20u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x467c24: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x467c24u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x467c28: 0x6ba20013  ldl         $v0, 0x13($sp)
    ctx->pc = 0x467c28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 19); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x467c2c: 0x6fa2000c  ldr         $v0, 0xC($sp)
    ctx->pc = 0x467c2cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 12); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x467c30: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x467c30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x467c34: 0xb2420073  sdl         $v0, 0x73($s2)
    ctx->pc = 0x467c34u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 115); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x467c38: 0xb642006c  sdr         $v0, 0x6C($s2)
    ctx->pc = 0x467c38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 108); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x467c3c: 0xae430074  sw          $v1, 0x74($s2)
    ctx->pc = 0x467c3cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 116), GPR_U32(ctx, 3));
    // 0x467c40: 0x6ba7001f  ldl         $a3, 0x1F($sp)
    ctx->pc = 0x467c40u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x467c44: 0x6fa70018  ldr         $a3, 0x18($sp)
    ctx->pc = 0x467c44u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x467c48: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x467c48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x467c4c: 0xb2470067  sdl         $a3, 0x67($s2)
    ctx->pc = 0x467c4cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 103); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x467c50: 0xb6470060  sdr         $a3, 0x60($s2)
    ctx->pc = 0x467c50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 96); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x467c54: 0xae420068  sw          $v0, 0x68($s2)
    ctx->pc = 0x467c54u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 104), GPR_U32(ctx, 2));
    // 0x467c58: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x467c58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x467c5c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x467c5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x467c60: 0x97a20000  lhu         $v0, 0x0($sp)
    ctx->pc = 0x467c60u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x467c64: 0xa6420080  sh          $v0, 0x80($s2)
    ctx->pc = 0x467c64u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 128), (uint16_t)GPR_U32(ctx, 2));
    // 0x467c68: 0x97a30004  lhu         $v1, 0x4($sp)
    ctx->pc = 0x467c68u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x467c6c: 0xa6430084  sh          $v1, 0x84($s2)
    ctx->pc = 0x467c6cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 132), (uint16_t)GPR_U32(ctx, 3));
    // 0x467c70: 0x97a20008  lhu         $v0, 0x8($sp)
    ctx->pc = 0x467c70u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x467c74: 0xae400004  sw          $zero, 0x4($s2)
    ctx->pc = 0x467c74u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
    // 0x467c78: 0xae400008  sw          $zero, 0x8($s2)
    ctx->pc = 0x467c78u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 0));
    // 0x467c7c: 0xae400030  sw          $zero, 0x30($s2)
    ctx->pc = 0x467c7cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 48), GPR_U32(ctx, 0));
    // 0x467c80: 0xae40000c  sw          $zero, 0xC($s2)
    ctx->pc = 0x467c80u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 0));
    // 0x467c84: 0xc10c1fa  jal         func_4307E8
    ctx->pc = 0x467C84u;
    SET_GPR_U32(ctx, 31, 0x467C8Cu);
    ctx->pc = 0x467C88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x467C84u;
    // 0x467c88: 0xa6420082  sh          $v0, 0x82($s2) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 18), 130), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4307E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4307E8u, 0x467C84u, 0x467C8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x467C8Cu;
label_467c8c:
    // 0x467c8c: 0x26430038  addiu       $v1, $s2, 0x38
    ctx->pc = 0x467c8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 56));
    // 0x467c90: 0x26440040  addiu       $a0, $s2, 0x40
    ctx->pc = 0x467c90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
    // 0x467c94: 0xae43003c  sw          $v1, 0x3C($s2)
    ctx->pc = 0x467c94u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 60), GPR_U32(ctx, 3));
    // 0x467c98: 0x3c050100  lui         $a1, 0x100
    ctx->pc = 0x467c98u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)256 << 16));
    // 0x467c9c: 0xae440044  sw          $a0, 0x44($s2)
    ctx->pc = 0x467c9cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 68), GPR_U32(ctx, 4));
    // 0x467ca0: 0xae40007c  sw          $zero, 0x7C($s2)
    ctx->pc = 0x467ca0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 124), GPR_U32(ctx, 0));
    // 0x467ca4: 0xae400034  sw          $zero, 0x34($s2)
    ctx->pc = 0x467ca4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 52), GPR_U32(ctx, 0));
    // 0x467ca8: 0xae400078  sw          $zero, 0x78($s2)
    ctx->pc = 0x467ca8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 120), GPR_U32(ctx, 0));
    // 0x467cac: 0xae430038  sw          $v1, 0x38($s2)
    ctx->pc = 0x467cacu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 56), GPR_U32(ctx, 3));
    // 0x467cb0: 0xae440040  sw          $a0, 0x40($s2)
    ctx->pc = 0x467cb0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 64), GPR_U32(ctx, 4));
    // 0x467cb4: 0x8fc20008  lw          $v0, 0x8($fp)
    ctx->pc = 0x467cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x467cb8: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x467cb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x467cbc: 0x144000b5  bnez        $v0, . + 4 + (0xB5 << 2)
    ctx->pc = 0x467CBCu;
    {
        const bool branch_taken_0x467cbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x467CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x467CBCu;
        // 0x467cc0: 0x8fa50008  lw          $a1, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x467cbc) {
            ctx->pc = 0x467F94u;
            goto label_467f94;
        }
    }
    ctx->pc = 0x467CC4u;
    // 0x467cc4: 0x10a00073  beqz        $a1, . + 4 + (0x73 << 2)
    ctx->pc = 0x467CC4u;
    {
        const bool branch_taken_0x467cc4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x467CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x467CC4u;
        // 0x467cc8: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x467cc4) {
            ctx->pc = 0x467E94u;
            goto label_467e94;
        }
    }
    ctx->pc = 0x467CCCu;
    // 0x467ccc: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x467cccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x467cd0: 0xa48018  mult        $s0, $a1, $a0
    ctx->pc = 0x467cd0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x467cd4: 0x701021  addu        $v0, $v1, $s0
    ctx->pc = 0x467cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x467cd8: 0xaea20000  sw          $v0, 0x0($s5)
    ctx->pc = 0x467cd8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
    // 0x467cdc: 0x1460000c  bnez        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x467CDCu;
    {
        const bool branch_taken_0x467cdc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x467CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x467CDCu;
        // 0x467ce0: 0xae430008  sw          $v1, 0x8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x467cdc) {
            ctx->pc = 0x467D10u;
            goto label_467d10;
        }
    }
    ctx->pc = 0x467CE4u;
    // 0x467ce4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x467ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x467ce8: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x467ce8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x467cec: 0xafa20030  sw          $v0, 0x30($sp)
    ctx->pc = 0x467cecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
    // 0x467cf0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x467cf0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x467cf4: 0xc11eff2  jal         func_47BFC8
    ctx->pc = 0x467CF4u;
    SET_GPR_U32(ctx, 31, 0x467CFCu);
    ctx->pc = 0x467CF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x467CF4u;
    // 0x467cf8: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
    ctx->in_delay_slot = false;
    ctx->pc = 0x47BFC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47BFC8u, 0x467CF4u, 0x467CFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x467CFCu;
label_467cfc:
    // 0x467cfc: 0xafa20034  sw          $v0, 0x34($sp)
    ctx->pc = 0x467cfcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 2));
    // 0x467d00: 0xc11f024  jal         func_47C090
    ctx->pc = 0x467D00u;
    SET_GPR_U32(ctx, 31, 0x467D08u);
    ctx->pc = 0x467D04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x467D00u;
    // 0x467d04: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47C090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47C090u, 0x467D00u, 0x467D08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x467D08u;
label_467d08:
    // 0x467d08: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x467d08u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x467d0c: 0x0  nop
    ctx->pc = 0x467d0cu;
    // NOP
label_467d10:
    // 0x467d10: 0x128000b6  beqz        $s4, . + 4 + (0xB6 << 2)
    ctx->pc = 0x467D10u;
    {
        const bool branch_taken_0x467d10 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x467D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x467D10u;
        // 0x467d14: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x467d10) {
            ctx->pc = 0x467FECu;
            goto label_467fec;
        }
    }
    ctx->pc = 0x467D18u;
    // 0x467d18: 0x8e450008  lw          $a1, 0x8($s2)
    ctx->pc = 0x467d18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x467d1c: 0xc11ef6c  jal         func_47BDB0
    ctx->pc = 0x467D1Cu;
    SET_GPR_U32(ctx, 31, 0x467D24u);
    ctx->pc = 0x467D20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x467D1Cu;
    // 0x467d20: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47BDB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47BDB0u, 0x467D1Cu, 0x467D24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x467D24u;
label_467d24:
    // 0x467d24: 0x2a00a  movz        $s4, $zero, $v0
    ctx->pc = 0x467d24u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 20, GPR_VEC(ctx, 0));
    // 0x467d28: 0x128000b0  beqz        $s4, . + 4 + (0xB0 << 2)
    ctx->pc = 0x467D28u;
    {
        const bool branch_taken_0x467d28 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x467D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x467D28u;
        // 0x467d2c: 0x32220010  andi        $v0, $s1, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        if (branch_taken_0x467d28) {
            ctx->pc = 0x467FECu;
            goto label_467fec;
        }
    }
    ctx->pc = 0x467D30u;
    // 0x467d30: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x467D30u;
    {
        const bool branch_taken_0x467d30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x467D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x467D30u;
        // 0x467d34: 0x8fa40008  lw          $a0, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x467d30) {
            ctx->pc = 0x467D94u;
            goto label_467d94;
        }
    }
    ctx->pc = 0x467D38u;
    // 0x467d38: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x467d38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x467d3c: 0x48080  sll         $s0, $a0, 2
    ctx->pc = 0x467d3cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x467d40: 0x701021  addu        $v0, $v1, $s0
    ctx->pc = 0x467d40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x467d44: 0xaea20000  sw          $v0, 0x0($s5)
    ctx->pc = 0x467d44u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
    // 0x467d48: 0x1460000b  bnez        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x467D48u;
    {
        const bool branch_taken_0x467d48 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x467D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x467D48u;
        // 0x467d4c: 0xae43000c  sw          $v1, 0xC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x467d48) {
            ctx->pc = 0x467D78u;
            goto label_467d78;
        }
    }
    ctx->pc = 0x467D50u;
    // 0x467d50: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x467d50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x467d54: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x467d54u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x467d58: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x467d58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
    // 0x467d5c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x467d5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x467d60: 0xc11eff2  jal         func_47BFC8
    ctx->pc = 0x467D60u;
    SET_GPR_U32(ctx, 31, 0x467D68u);
    ctx->pc = 0x467D64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x467D60u;
    // 0x467d64: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
    ctx->in_delay_slot = false;
    ctx->pc = 0x47BFC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47BFC8u, 0x467D60u, 0x467D68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x467D68u;
label_467d68:
    // 0x467d68: 0xafa20044  sw          $v0, 0x44($sp)
    ctx->pc = 0x467d68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 2));
    // 0x467d6c: 0xc11f024  jal         func_47C090
    ctx->pc = 0x467D6Cu;
    SET_GPR_U32(ctx, 31, 0x467D74u);
    ctx->pc = 0x467D70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x467D6Cu;
    // 0x467d70: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47C090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47C090u, 0x467D6Cu, 0x467D74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x467D74u;
label_467d74:
    // 0x467d74: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x467d74u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_467d78:
    // 0x467d78: 0x1280009c  beqz        $s4, . + 4 + (0x9C << 2)
    ctx->pc = 0x467D78u;
    {
        const bool branch_taken_0x467d78 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x467D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x467D78u;
        // 0x467d7c: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x467d78) {
            ctx->pc = 0x467FECu;
            goto label_467fec;
        }
    }
    ctx->pc = 0x467D80u;
    // 0x467d80: 0x8e45000c  lw          $a1, 0xC($s2)
    ctx->pc = 0x467d80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x467d84: 0xc11fb56  jal         func_47ED58
    ctx->pc = 0x467D84u;
    SET_GPR_U32(ctx, 31, 0x467D8Cu);
    ctx->pc = 0x467D88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x467D84u;
    // 0x467d88: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47ED58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47ED58u, 0x467D84u, 0x467D8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x467D8Cu;
label_467d8c:
    // 0x467d8c: 0x501026  xor         $v0, $v0, $s0
    ctx->pc = 0x467d8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 16));
    // 0x467d90: 0x2a00b  movn        $s4, $zero, $v0
    ctx->pc = 0x467d90u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 20, GPR_VEC(ctx, 0));
label_467d94:
    // 0x467d94: 0x12800095  beqz        $s4, . + 4 + (0x95 << 2)
    ctx->pc = 0x467D94u;
    {
        const bool branch_taken_0x467d94 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x467D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x467D94u;
        // 0x467d98: 0x32220008  andi        $v0, $s1, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x467d94) {
            ctx->pc = 0x467FECu;
            goto label_467fec;
        }
    }
    ctx->pc = 0x467D9Cu;
    // 0x467d9c: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x467D9Cu;
    {
        const bool branch_taken_0x467d9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x467d9c) {
            ctx->pc = 0x467E00u;
            goto label_467e00;
        }
    }
    ctx->pc = 0x467DA4u;
    // 0x467da4: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x467da4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x467da8: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x467da8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x467dac: 0x48080  sll         $s0, $a0, 2
    ctx->pc = 0x467dacu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x467db0: 0x701021  addu        $v0, $v1, $s0
    ctx->pc = 0x467db0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x467db4: 0xaea20000  sw          $v0, 0x0($s5)
    ctx->pc = 0x467db4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
    // 0x467db8: 0x1460000b  bnez        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x467DB8u;
    {
        const bool branch_taken_0x467db8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x467DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x467DB8u;
        // 0x467dbc: 0xae430030  sw          $v1, 0x30($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 48), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x467db8) {
            ctx->pc = 0x467DE8u;
            goto label_467de8;
        }
    }
    ctx->pc = 0x467DC0u;
    // 0x467dc0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x467dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x467dc4: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x467dc4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x467dc8: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x467dc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
    // 0x467dcc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x467dccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x467dd0: 0xc11eff2  jal         func_47BFC8
    ctx->pc = 0x467DD0u;
    SET_GPR_U32(ctx, 31, 0x467DD8u);
    ctx->pc = 0x467DD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x467DD0u;
    // 0x467dd4: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
    ctx->in_delay_slot = false;
    ctx->pc = 0x47BFC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47BFC8u, 0x467DD0u, 0x467DD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x467DD8u;
label_467dd8:
    // 0x467dd8: 0xafa20044  sw          $v0, 0x44($sp)
    ctx->pc = 0x467dd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 2));
    // 0x467ddc: 0xc11f024  jal         func_47C090
    ctx->pc = 0x467DDCu;
    SET_GPR_U32(ctx, 31, 0x467DE4u);
    ctx->pc = 0x467DE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x467DDCu;
    // 0x467de0: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47C090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47C090u, 0x467DDCu, 0x467DE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x467DE4u;
label_467de4:
    // 0x467de4: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x467de4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_467de8:
    // 0x467de8: 0x12800080  beqz        $s4, . + 4 + (0x80 << 2)
    ctx->pc = 0x467DE8u;
    {
        const bool branch_taken_0x467de8 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x467DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x467DE8u;
        // 0x467dec: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x467de8) {
            ctx->pc = 0x467FECu;
            goto label_467fec;
        }
    }
    ctx->pc = 0x467DF0u;
    // 0x467df0: 0x8e450030  lw          $a1, 0x30($s2)
    ctx->pc = 0x467df0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
    // 0x467df4: 0xc11fb56  jal         func_47ED58
    ctx->pc = 0x467DF4u;
    SET_GPR_U32(ctx, 31, 0x467DFCu);
    ctx->pc = 0x467DF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x467DF4u;
    // 0x467df8: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47ED58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47ED58u, 0x467DF4u, 0x467DFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x467DFCu;
label_467dfc:
    // 0x467dfc: 0x2a00a  movz        $s4, $zero, $v0
    ctx->pc = 0x467dfcu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 20, GPR_VEC(ctx, 0));
label_467e00:
    // 0x467e00: 0x5280007b  beql        $s4, $zero, . + 4 + (0x7B << 2)
    ctx->pc = 0x467E00u;
    {
        const bool branch_taken_0x467e00 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x467e00) {
            ctx->pc = 0x467E04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x467E00u;
            // 0x467e04: 0x93c20003  lbu         $v0, 0x3($fp) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 30), 3)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x467FF0u;
            goto label_467ff0;
        }
    }
    ctx->pc = 0x467E08u;
    // 0x467e08: 0x8fc30020  lw          $v1, 0x20($fp)
    ctx->pc = 0x467e08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 32)));
    // 0x467e0c: 0x18600021  blez        $v1, . + 4 + (0x21 << 2)
    ctx->pc = 0x467E0Cu;
    {
        const bool branch_taken_0x467e0c = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x467e0c) {
            ctx->pc = 0x467E94u;
            goto label_467e94;
        }
    }
    ctx->pc = 0x467E14u;
    // 0x467e14: 0x96420082  lhu         $v0, 0x82($s2)
    ctx->pc = 0x467e14u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 130)));
    // 0x467e18: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x467e18u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x467e1c: 0x1860001d  blez        $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x467E1Cu;
    {
        const bool branch_taken_0x467e1c = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x467E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x467E1Cu;
        // 0x467e20: 0x288c0  sll         $s1, $v0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x467e1c) {
            ctx->pc = 0x467E94u;
            goto label_467e94;
        }
    }
    ctx->pc = 0x467E24u;
    // 0x467e24: 0x24160002  addiu       $s6, $zero, 0x2
    ctx->pc = 0x467e24u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_467e28:
    // 0x467e28: 0x8ea50000  lw          $a1, 0x0($s5)
    ctx->pc = 0x467e28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x467e2c: 0xb11021  addu        $v0, $a1, $s1
    ctx->pc = 0x467e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
    // 0x467e30: 0xaea20000  sw          $v0, 0x0($s5)
    ctx->pc = 0x467e30u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
    // 0x467e34: 0x12800012  beqz        $s4, . + 4 + (0x12 << 2)
    ctx->pc = 0x467E34u;
    {
        const bool branch_taken_0x467e34 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x467E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x467E34u;
        // 0x467e38: 0xae650000  sw          $a1, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x467e34) {
            ctx->pc = 0x467E80u;
            goto label_467e80;
        }
    }
    ctx->pc = 0x467E3Cu;
    // 0x467e3c: 0x14a0000c  bnez        $a1, . + 4 + (0xC << 2)
    ctx->pc = 0x467E3Cu;
    {
        const bool branch_taken_0x467e3c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x467E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x467E3Cu;
        // 0x467e40: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x467e3c) {
            ctx->pc = 0x467E70u;
            goto label_467e70;
        }
    }
    ctx->pc = 0x467E44u;
    // 0x467e44: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x467e44u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x467e48: 0xafb60040  sw          $s6, 0x40($sp)
    ctx->pc = 0x467e48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 22));
    // 0x467e4c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x467e4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x467e50: 0xc11eff2  jal         func_47BFC8
    ctx->pc = 0x467E50u;
    SET_GPR_U32(ctx, 31, 0x467E58u);
    ctx->pc = 0x467E54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x467E50u;
    // 0x467e54: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
    ctx->in_delay_slot = false;
    ctx->pc = 0x47BFC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47BFC8u, 0x467E50u, 0x467E58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x467E58u;
label_467e58:
    // 0x467e58: 0xafa20044  sw          $v0, 0x44($sp)
    ctx->pc = 0x467e58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 2));
    // 0x467e5c: 0xc11f024  jal         func_47C090
    ctx->pc = 0x467E5Cu;
    SET_GPR_U32(ctx, 31, 0x467E64u);
    ctx->pc = 0x467E60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x467E5Cu;
    // 0x467e60: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47C090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47C090u, 0x467E5Cu, 0x467E64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x467E64u;
label_467e64:
    // 0x467e64: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x467E64u;
    {
        const bool branch_taken_0x467e64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x467E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x467E64u;
        // 0x467e68: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x467e64) {
            ctx->pc = 0x467E94u;
            goto label_467e94;
        }
    }
    ctx->pc = 0x467E6Cu;
    // 0x467e6c: 0x0  nop
    ctx->pc = 0x467e6cu;
    // NOP
label_467e70:
    // 0x467e70: 0xc11ef6c  jal         func_47BDB0
    ctx->pc = 0x467E70u;
    SET_GPR_U32(ctx, 31, 0x467E78u);
    ctx->pc = 0x467E74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x467E70u;
    // 0x467e74: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47BDB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47BDB0u, 0x467E70u, 0x467E78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x467E78u;
label_467e78:
    // 0x467e78: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x467E78u;
    {
        const bool branch_taken_0x467e78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x467e78) {
            ctx->pc = 0x467E7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x467E78u;
            // 0x467e7c: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x467E94u;
            goto label_467e94;
        }
    }
    ctx->pc = 0x467E80u;
label_467e80:
    // 0x467e80: 0x8fc20020  lw          $v0, 0x20($fp)
    ctx->pc = 0x467e80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 32)));
    // 0x467e84: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x467e84u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x467e88: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x467e88u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x467e8c: 0x1440ffe6  bnez        $v0, . + 4 + (-0x1A << 2)
    ctx->pc = 0x467E8Cu;
    {
        const bool branch_taken_0x467e8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x467E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x467E8Cu;
        // 0x467e90: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x467e8c) {
            ctx->pc = 0x467E28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_467e28;
        }
    }
    ctx->pc = 0x467E94u;
label_467e94:
    // 0x467e94: 0x12800055  beqz        $s4, . + 4 + (0x55 << 2)
    ctx->pc = 0x467E94u;
    {
        const bool branch_taken_0x467e94 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x467E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x467E94u;
        // 0x467e98: 0x8fa50004  lw          $a1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x467e94) {
            ctx->pc = 0x467FECu;
            goto label_467fec;
        }
    }
    ctx->pc = 0x467E9Cu;
    // 0x467e9c: 0x10a0003d  beqz        $a1, . + 4 + (0x3D << 2)
    ctx->pc = 0x467E9Cu;
    {
        const bool branch_taken_0x467e9c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x467e9c) {
            ctx->pc = 0x467F94u;
            goto label_467f94;
        }
    }
    ctx->pc = 0x467EA4u;
    // 0x467ea4: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x467ea4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x467ea8: 0x580c0  sll         $s0, $a1, 3
    ctx->pc = 0x467ea8u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x467eac: 0x701021  addu        $v0, $v1, $s0
    ctx->pc = 0x467eacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x467eb0: 0xaea20000  sw          $v0, 0x0($s5)
    ctx->pc = 0x467eb0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
    // 0x467eb4: 0x1460000c  bnez        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x467EB4u;
    {
        const bool branch_taken_0x467eb4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x467EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x467EB4u;
        // 0x467eb8: 0xae430004  sw          $v1, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x467eb4) {
            ctx->pc = 0x467EE8u;
            goto label_467ee8;
        }
    }
    ctx->pc = 0x467EBCu;
    // 0x467ebc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x467ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x467ec0: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x467ec0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x467ec4: 0xafa20030  sw          $v0, 0x30($sp)
    ctx->pc = 0x467ec4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
    // 0x467ec8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x467ec8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x467ecc: 0xc11eff2  jal         func_47BFC8
    ctx->pc = 0x467ECCu;
    SET_GPR_U32(ctx, 31, 0x467ED4u);
    ctx->pc = 0x467ED0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x467ECCu;
    // 0x467ed0: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
    ctx->in_delay_slot = false;
    ctx->pc = 0x47BFC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47BFC8u, 0x467ECCu, 0x467ED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x467ED4u;
label_467ed4:
    // 0x467ed4: 0xafa20034  sw          $v0, 0x34($sp)
    ctx->pc = 0x467ed4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 2));
    // 0x467ed8: 0xc11f024  jal         func_47C090
    ctx->pc = 0x467ED8u;
    SET_GPR_U32(ctx, 31, 0x467EE0u);
    ctx->pc = 0x467EDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x467ED8u;
    // 0x467edc: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47C090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47C090u, 0x467ED8u, 0x467EE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x467EE0u;
label_467ee0:
    // 0x467ee0: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x467ee0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x467ee4: 0x0  nop
    ctx->pc = 0x467ee4u;
    // NOP
label_467ee8:
    // 0x467ee8: 0x12800040  beqz        $s4, . + 4 + (0x40 << 2)
    ctx->pc = 0x467EE8u;
    {
        const bool branch_taken_0x467ee8 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x467EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x467EE8u;
        // 0x467eec: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x467ee8) {
            ctx->pc = 0x467FECu;
            goto label_467fec;
        }
    }
    ctx->pc = 0x467EF0u;
    // 0x467ef0: 0x8e450004  lw          $a1, 0x4($s2)
    ctx->pc = 0x467ef0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x467ef4: 0xc11ef94  jal         func_47BE50
    ctx->pc = 0x467EF4u;
    SET_GPR_U32(ctx, 31, 0x467EFCu);
    ctx->pc = 0x467EF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x467EF4u;
    // 0x467ef8: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47BE50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47BE50u, 0x467EF4u, 0x467EFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x467EFCu;
label_467efc:
    // 0x467efc: 0x2a00a  movz        $s4, $zero, $v0
    ctx->pc = 0x467efcu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 20, GPR_VEC(ctx, 0));
    // 0x467f00: 0x1280003a  beqz        $s4, . + 4 + (0x3A << 2)
    ctx->pc = 0x467F00u;
    {
        const bool branch_taken_0x467f00 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x467F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x467F00u;
        // 0x467f04: 0x8fa30060  lw          $v1, 0x60($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x467f00) {
            ctx->pc = 0x467FECu;
            goto label_467fec;
        }
    }
    ctx->pc = 0x467F08u;
    // 0x467f08: 0x3c020003  lui         $v0, 0x3
    ctx->pc = 0x467f08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
    // 0x467f0c: 0x34426001  ori         $v0, $v0, 0x6001
    ctx->pc = 0x467f0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)24577);
    // 0x467f10: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x467f10u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x467f14: 0x1440001f  bnez        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x467F14u;
    {
        const bool branch_taken_0x467f14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x467F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x467F14u;
        // 0x467f18: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x467f14) {
            ctx->pc = 0x467F94u;
            goto label_467f94;
        }
    }
    ctx->pc = 0x467F1Cu;
    // 0x467f1c: 0x1840001d  blez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x467F1Cu;
    {
        const bool branch_taken_0x467f1c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x467F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x467F1Cu;
        // 0x467f20: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x467f1c) {
            ctx->pc = 0x467F94u;
            goto label_467f94;
        }
    }
    ctx->pc = 0x467F24u;
    // 0x467f24: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x467f24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_467f28:
    // 0x467f28: 0x1028c0  sll         $a1, $s0, 3
    ctx->pc = 0x467f28u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x467f2c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x467f2cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x467f30: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x467f30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x467f34: 0x68660007  ldl         $a2, 0x7($v1)
    ctx->pc = 0x467f34u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x467f38: 0x6c660000  ldr         $a2, 0x0($v1)
    ctx->pc = 0x467f38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x467f3c: 0xb3a60057  sdl         $a2, 0x57($sp)
    ctx->pc = 0x467f3cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 87); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x467f40: 0xb7a60050  sdr         $a2, 0x50($sp)
    ctx->pc = 0x467f40u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 80); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x467f44: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x467f44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x467f48: 0x97a40052  lhu         $a0, 0x52($sp)
    ctx->pc = 0x467f48u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 82)));
    // 0x467f4c: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x467f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x467f50: 0xa4440000  sh          $a0, 0x0($v0)
    ctx->pc = 0x467f50u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x467f54: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x467f54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x467f58: 0x97a40054  lhu         $a0, 0x54($sp)
    ctx->pc = 0x467f58u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 84)));
    // 0x467f5c: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x467f5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x467f60: 0xa4640002  sh          $a0, 0x2($v1)
    ctx->pc = 0x467f60u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 2), (uint16_t)GPR_U32(ctx, 4));
    // 0x467f64: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x467f64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x467f68: 0x97a30056  lhu         $v1, 0x56($sp)
    ctx->pc = 0x467f68u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 86)));
    // 0x467f6c: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x467f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x467f70: 0xa4430004  sh          $v1, 0x4($v0)
    ctx->pc = 0x467f70u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
    // 0x467f74: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x467f74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x467f78: 0x97a30050  lhu         $v1, 0x50($sp)
    ctx->pc = 0x467f78u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x467f7c: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x467f7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x467f80: 0xa4a30006  sh          $v1, 0x6($a1)
    ctx->pc = 0x467f80u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 6), (uint16_t)GPR_U32(ctx, 3));
    // 0x467f84: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x467f84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x467f88: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x467f88u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x467f8c: 0x5440ffe6  bnel        $v0, $zero, . + 4 + (-0x1A << 2)
    ctx->pc = 0x467F8Cu;
    {
        const bool branch_taken_0x467f8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x467f8c) {
            ctx->pc = 0x467F90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x467F8Cu;
            // 0x467f90: 0x8e430004  lw          $v1, 0x4($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x467F28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_467f28;
        }
    }
    ctx->pc = 0x467F94u;
label_467f94:
    // 0x467f94: 0x12800015  beqz        $s4, . + 4 + (0x15 << 2)
    ctx->pc = 0x467F94u;
    {
        const bool branch_taken_0x467f94 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x467F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x467F94u;
        // 0x467f98: 0x3c050053  lui         $a1, 0x53 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)83 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x467f94) {
            ctx->pc = 0x467FECu;
            goto label_467fec;
        }
    }
    ctx->pc = 0x467F9Cu;
    // 0x467f9c: 0x24b0e750  addiu       $s0, $a1, -0x18B0
    ctx->pc = 0x467f9cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960976));
    // 0x467fa0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x467fa0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x467fa4: 0xc11ff8e  jal         func_47FE38
    ctx->pc = 0x467FA4u;
    SET_GPR_U32(ctx, 31, 0x467FACu);
    ctx->pc = 0x467FA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x467FA4u;
    // 0x467fa8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47FE38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47FE38u, 0x467FA4u, 0x467FACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x467FACu;
label_467fac:
    // 0x467fac: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x467facu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x467fb0: 0xaf8088b0  sw          $zero, -0x7750($gp)
    ctx->pc = 0x467fb0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936752), GPR_U32(ctx, 0));
    // 0x467fb4: 0xaf8088b4  sw          $zero, -0x774C($gp)
    ctx->pc = 0x467fb4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936756), GPR_U32(ctx, 0));
    // 0x467fb8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x467fb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x467fbc: 0xc11fd22  jal         func_47F488
    ctx->pc = 0x467FBCu;
    SET_GPR_U32(ctx, 31, 0x467FC4u);
    ctx->pc = 0x467FC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x467FBCu;
    // 0x467fc0: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47F488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47F488u, 0x467FBCu, 0x467FC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x467FC4u;
label_467fc4:
    // 0x467fc4: 0x2a00a  movz        $s4, $zero, $v0
    ctx->pc = 0x467fc4u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 20, GPR_VEC(ctx, 0));
    // 0x467fc8: 0x12800008  beqz        $s4, . + 4 + (0x8 << 2)
    ctx->pc = 0x467FC8u;
    {
        const bool branch_taken_0x467fc8 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x467FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x467FC8u;
        // 0x467fcc: 0x8f8588b0  lw          $a1, -0x7750($gp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936752)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x467fc8) {
            ctx->pc = 0x467FECu;
            goto label_467fec;
        }
    }
    ctx->pc = 0x467FD0u;
    // 0x467fd0: 0x10a00012  beqz        $a1, . + 4 + (0x12 << 2)
    ctx->pc = 0x467FD0u;
    {
        const bool branch_taken_0x467fd0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x467FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x467FD0u;
        // 0x467fd4: 0x8f8788b4  lw          $a3, -0x774C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936756)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x467fd0) {
            ctx->pc = 0x46801Cu;
            goto label_46801c;
        }
    }
    ctx->pc = 0x467FD8u;
    // 0x467fd8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x467fd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x467fdc: 0xc11fe4a  jal         func_47F928
    ctx->pc = 0x467FDCu;
    SET_GPR_U32(ctx, 31, 0x467FE4u);
    ctx->pc = 0x467FE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x467FDCu;
    // 0x467fe0: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47F928u, 0x467FDCu, 0x467FE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x467FE4u;
label_467fe4:
    // 0x467fe4: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x467FE4u;
    {
        const bool branch_taken_0x467fe4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x467FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x467FE4u;
        // 0x467fe8: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x467fe4) {
            ctx->pc = 0x468020u;
            goto label_468020;
        }
    }
    ctx->pc = 0x467FECu;
label_467fec:
    // 0x467fec: 0x93c20003  lbu         $v0, 0x3($fp)
    ctx->pc = 0x467fecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 30), 3)));
label_467ff0:
    // 0x467ff0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x467ff0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x467ff4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x467FF4u;
    {
        const bool branch_taken_0x467ff4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x467ff4) {
            ctx->pc = 0x46800Cu;
            goto label_46800c;
        }
    }
    ctx->pc = 0x467FFCu;
    // 0x467ffc: 0xc11c5b8  jal         func_4716E0
    ctx->pc = 0x467FFCu;
    SET_GPR_U32(ctx, 31, 0x468004u);
    ctx->pc = 0x468000u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x467FFCu;
    // 0x468000: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4716E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4716E0u, 0x467FFCu, 0x468004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x468004u;
label_468004:
    // 0x468004: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x468004u;
    {
        const bool branch_taken_0x468004 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x468008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x468004u;
        // 0x468008: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x468004) {
            ctx->pc = 0x468020u;
            goto label_468020;
        }
    }
    ctx->pc = 0x46800Cu;
label_46800c:
    // 0x46800c: 0xc11c306  jal         func_470C18
    ctx->pc = 0x46800Cu;
    SET_GPR_U32(ctx, 31, 0x468014u);
    ctx->pc = 0x468010u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x46800Cu;
    // 0x468010: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x470C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x470C18u, 0x46800Cu, 0x468014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x468014u;
label_468014:
    // 0x468014: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x468014u;
    {
        const bool branch_taken_0x468014 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x468018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x468014u;
        // 0x468018: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x468014) {
            ctx->pc = 0x468020u;
            goto label_468020;
        }
    }
    ctx->pc = 0x46801Cu;
label_46801c:
    // 0x46801c: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x46801cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_468020:
    // 0x468020: 0x7bb00100  lq          $s0, 0x100($sp)
    ctx->pc = 0x468020u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x468024: 0x7bb100f0  lq          $s1, 0xF0($sp)
    ctx->pc = 0x468024u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x468028: 0x7bb200e0  lq          $s2, 0xE0($sp)
    ctx->pc = 0x468028u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x46802c: 0x7bb300d0  lq          $s3, 0xD0($sp)
    ctx->pc = 0x46802cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x468030: 0x7bb400c0  lq          $s4, 0xC0($sp)
    ctx->pc = 0x468030u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x468034: 0x7bb500b0  lq          $s5, 0xB0($sp)
    ctx->pc = 0x468034u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x468038: 0x7bb600a0  lq          $s6, 0xA0($sp)
    ctx->pc = 0x468038u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x46803c: 0x7bb70090  lq          $s7, 0x90($sp)
    ctx->pc = 0x46803cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x468040: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x468040u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x468044: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x468044u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x468048: 0x3e00008  jr          $ra
    ctx->pc = 0x468048u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x46804Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x468048u;
        // 0x46804c: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x468048u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x468050u;
}
