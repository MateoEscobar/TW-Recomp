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

// Function: sub_00174C18
// Address: 0x174c18 - 0x174d00
void sub_00174C18_0x174c18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00174C18_0x174c18");
#endif

    switch (ctx->pc) {
        case 0x174c64u: goto label_174c64;
        case 0x174c70u: goto label_174c70;
        case 0x174c7cu: goto label_174c7c;
        case 0x174c94u: goto label_174c94;
        default: break;
    }

    ctx->pc = 0x174c18u;

    // 0x174c18: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x174c18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x174c1c: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x174c1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x174c20: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x174c20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x174c24: 0x8c62cc54  lw          $v0, -0x33AC($v1)
    ctx->pc = 0x174c24u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x50CC54u));
    // 0x174c28: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x174c28u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174c2c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x174C2Cu;
    {
        const bool branch_taken_0x174c2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x174C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174C2Cu;
        // 0x174c30: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174c2c) {
            ctx->pc = 0x174C3Cu;
            goto label_174c3c;
        }
    }
    ctx->pc = 0x174C34u;
    // 0x174c34: 0x8e020048  lw          $v0, 0x48($s0)
    ctx->pc = 0x174c34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x174c38: 0xac62cc54  sw          $v0, -0x33AC($v1)
    ctx->pc = 0x174c38u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294954068), GPR_U32(ctx, 2));
label_174c3c:
    // 0x174c3c: 0x3c020017  lui         $v0, 0x17
    ctx->pc = 0x174c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)23 << 16));
    // 0x174c40: 0x24424248  addiu       $v0, $v0, 0x4248
    ctx->pc = 0x174c40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16968));
    // 0x174c44: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x174C44u;
    {
        const bool branch_taken_0x174c44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x174C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174C44u;
        // 0x174c48: 0xae020048  sw          $v0, 0x48($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174c44) {
            ctx->pc = 0x174C58u;
            goto label_174c58;
        }
    }
    ctx->pc = 0x174C4Cu;
    // 0x174c4c: 0x3c020047  lui         $v0, 0x47
    ctx->pc = 0x174c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
    // 0x174c50: 0x24429ef8  addiu       $v0, $v0, -0x6108
    ctx->pc = 0x174c50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942456));
    // 0x174c54: 0xae020048  sw          $v0, 0x48($s0)
    ctx->pc = 0x174c54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 2));
label_174c58:
    // 0x174c58: 0x3c040018  lui         $a0, 0x18
    ctx->pc = 0x174c58u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)24 << 16));
    // 0x174c5c: 0xc119c4c  jal         func_467130
    ctx->pc = 0x174C5Cu;
    SET_GPR_U32(ctx, 31, 0x174C64u);
    ctx->pc = 0x174C60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x174C5Cu;
    // 0x174c60: 0x2484e930  addiu       $a0, $a0, -0x16D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961456));
    ctx->in_delay_slot = false;
    ctx->pc = 0x467130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467130u, 0x174C5Cu, 0x174C64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174C64u;
label_174c64:
    // 0x174c64: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x174c64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174c68: 0xc1093da  jal         func_424F68
    ctx->pc = 0x174C68u;
    SET_GPR_U32(ctx, 31, 0x174C70u);
    ctx->pc = 0x174C6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x174C68u;
    // 0x174c6c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x424F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x424F68u, 0x174C68u, 0x174C70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174C70u;
label_174c70:
    // 0x174c70: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x174c70u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174c74: 0xc120f22  jal         func_483C88
    ctx->pc = 0x174C74u;
    SET_GPR_U32(ctx, 31, 0x174C7Cu);
    ctx->pc = 0x174C78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x174C74u;
    // 0x174c78: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x483C88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x483C88u, 0x174C74u, 0x174C7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174C7Cu;
label_174c7c:
    // 0x174c7c: 0x8e03004c  lw          $v1, 0x4C($s0)
    ctx->pc = 0x174c7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x174c80: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x174c80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x174c84: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x174C84u;
    {
        const bool branch_taken_0x174c84 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x174c84) {
            ctx->pc = 0x174C94u;
            goto label_174c94;
        }
    }
    ctx->pc = 0x174C8Cu;
    // 0x174c8c: 0xc11a402  jal         func_469008
    ctx->pc = 0x174C8Cu;
    SET_GPR_U32(ctx, 31, 0x174C94u);
    ctx->pc = 0x174C90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x174C8Cu;
    // 0x174c90: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x469008u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x469008u, 0x174C8Cu, 0x174C94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174C94u;
label_174c94:
    // 0x174c94: 0x6a020023  ldl         $v0, 0x23($s0)
    ctx->pc = 0x174c94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 35); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x174c98: 0x6e02001c  ldr         $v0, 0x1C($s0)
    ctx->pc = 0x174c98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 28); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x174c9c: 0x6a03002b  ldl         $v1, 0x2B($s0)
    ctx->pc = 0x174c9cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 43); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x174ca0: 0x6e030024  ldr         $v1, 0x24($s0)
    ctx->pc = 0x174ca0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 36); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x174ca4: 0xb3a20007  sdl         $v0, 0x7($sp)
    ctx->pc = 0x174ca4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x174ca8: 0xb7a20000  sdr         $v0, 0x0($sp)
    ctx->pc = 0x174ca8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x174cac: 0xb3a3000f  sdl         $v1, 0xF($sp)
    ctx->pc = 0x174cacu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x174cb0: 0xb7a30008  sdr         $v1, 0x8($sp)
    ctx->pc = 0x174cb0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x174cb4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x174cb4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174cb8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x174cb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x174cbc: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x174cbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x174cc0: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x174cc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x174cc4: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x174cc4u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x174cc8: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x174cc8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x174ccc: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x174cccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x174cd0: 0x6ba60007  ldl         $a2, 0x7($sp)
    ctx->pc = 0x174cd0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x174cd4: 0x6fa60000  ldr         $a2, 0x0($sp)
    ctx->pc = 0x174cd4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x174cd8: 0x6ba3000f  ldl         $v1, 0xF($sp)
    ctx->pc = 0x174cd8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x174cdc: 0x6fa30008  ldr         $v1, 0x8($sp)
    ctx->pc = 0x174cdcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x174ce0: 0xb2060023  sdl         $a2, 0x23($s0)
    ctx->pc = 0x174ce0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 35); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x174ce4: 0xb606001c  sdr         $a2, 0x1C($s0)
    ctx->pc = 0x174ce4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 28); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x174ce8: 0xb203002b  sdl         $v1, 0x2B($s0)
    ctx->pc = 0x174ce8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 43); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x174cec: 0xb6030024  sdr         $v1, 0x24($s0)
    ctx->pc = 0x174cecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 36); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x174cf0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x174cf0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x174cf4: 0x3e00008  jr          $ra
    ctx->pc = 0x174CF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x174CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174CF4u;
        // 0x174cf8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x174CF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x174CFCu;
    // 0x174cfc: 0x0  nop
    ctx->pc = 0x174cfcu;
    // NOP
    ctx->pc = 0x174d00u;
}
