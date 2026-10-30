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

// Function: sub_00178B30
// Address: 0x178b30 - 0x178bc8
void sub_00178B30_0x178b30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00178B30_0x178b30");
#endif

    switch (ctx->pc) {
        case 0x178b48u: goto label_178b48;
        case 0x178ba8u: goto label_178ba8;
        case 0x178bb8u: goto label_178bb8;
        default: break;
    }

    ctx->pc = 0x178b30u;

    // 0x178b30: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x178b30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x178b34: 0x2404004f  addiu       $a0, $zero, 0x4F
    ctx->pc = 0x178b34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
    // 0x178b38: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x178b38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x178b3c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x178b3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x178b40: 0xc051048  jal         func_144120
    ctx->pc = 0x178B40u;
    SET_GPR_U32(ctx, 31, 0x178B48u);
    ctx->pc = 0x178B44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178B40u;
    // 0x178b44: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x144120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x144120u, 0x178B40u, 0x178B48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178B48u;
label_178b48:
    // 0x178b48: 0x8e03cd4c  lw          $v1, -0x32B4($s0)
    ctx->pc = 0x178b48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294954316)));
    // 0x178b4c: 0x24490010  addiu       $t1, $v0, 0x10
    ctx->pc = 0x178b4cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x178b50: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x178b50u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x178b54: 0x3c070055  lui         $a3, 0x55
    ctx->pc = 0x178b54u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)85 << 16));
    // 0x178b58: 0xac6200a4  sw          $v0, 0xA4($v1)
    ctx->pc = 0x178b58u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 164), GPR_U32(ctx, 2));
    // 0x178b5c: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x178b5cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
    // 0x178b60: 0x24e51f58  addiu       $a1, $a3, 0x1F58
    ctx->pc = 0x178b60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 8024));
    // 0x178b64: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x178b64u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x178b68: 0xac6800b0  sw          $t0, 0xB0($v1)
    ctx->pc = 0x178b68u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 176), GPR_U32(ctx, 8));
    // 0x178b6c: 0xac6600a8  sw          $a2, 0xA8($v1)
    ctx->pc = 0x178b6cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 168), GPR_U32(ctx, 6));
    // 0x178b70: 0xac6900ac  sw          $t1, 0xAC($v1)
    ctx->pc = 0x178b70u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 172), GPR_U32(ctx, 9));
    // 0x178b74: 0x24e81f58  addiu       $t0, $a3, 0x1F58
    ctx->pc = 0x178b74u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), 8024));
    // 0x178b78: 0x89020003  lwl         $v0, 0x3($t0)
    ctx->pc = 0x178b78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 2) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 2, (int32_t)merged); }
    // 0x178b7c: 0x99020000  lwr         $v0, 0x0($t0)
    ctx->pc = 0x178b7cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 2) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 2) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 2, merged64); }
    // 0x178b80: 0x81030004  lb          $v1, 0x4($t0)
    ctx->pc = 0x178b80u;
    SET_GPR_S32(ctx, 3, (int8_t)FAST_READ8(0x551F5Cu));
    // 0x178b84: 0x81060005  lb          $a2, 0x5($t0)
    ctx->pc = 0x178b84u;
    SET_GPR_S32(ctx, 6, (int8_t)FAST_READ8(0x551F5Du));
    // 0x178b88: 0xaba20003  swl         $v0, 0x3($sp)
    ctx->pc = 0x178b88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x178b8c: 0xbba20000  swr         $v0, 0x0($sp)
    ctx->pc = 0x178b8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x178b90: 0xa3a30004  sb          $v1, 0x4($sp)
    ctx->pc = 0x178b90u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 4), (uint8_t)GPR_U32(ctx, 3));
    // 0x178b94: 0xa3a60005  sb          $a2, 0x5($sp)
    ctx->pc = 0x178b94u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 5), (uint8_t)GPR_U32(ctx, 6));
    // 0x178b98: 0x81020006  lb          $v0, 0x6($t0)
    ctx->pc = 0x178b98u;
    SET_GPR_S32(ctx, 2, (int8_t)FAST_READ8(0x551F5Eu));
    // 0x178b9c: 0xa3a20006  sb          $v0, 0x6($sp)
    ctx->pc = 0x178b9cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 6), (uint8_t)GPR_U32(ctx, 2));
    // 0x178ba0: 0xc050fda  jal         func_143F68
    ctx->pc = 0x178BA0u;
    SET_GPR_U32(ctx, 31, 0x178BA8u);
    ctx->pc = 0x178BA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178BA0u;
    // 0x178ba4: 0x248491e0  addiu       $a0, $a0, -0x6E20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x143F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143F68u, 0x178BA0u, 0x178BA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178BA8u;
label_178ba8:
    // 0x178ba8: 0x8e04cd4c  lw          $a0, -0x32B4($s0)
    ctx->pc = 0x178ba8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294954316)));
    // 0x178bac: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x178bacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178bb0: 0xc05e2f2  jal         func_178BC8
    ctx->pc = 0x178BB0u;
    SET_GPR_U32(ctx, 31, 0x178BB8u);
    ctx->pc = 0x178BB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178BB0u;
    // 0x178bb4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x178BC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178BC8u, 0x178BB0u, 0x178BB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178BB8u;
label_178bb8:
    // 0x178bb8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x178bb8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x178bbc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x178bbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x178bc0: 0x3e00008  jr          $ra
    ctx->pc = 0x178BC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x178BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178BC0u;
        // 0x178bc4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x178BC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x178BC8u;
}
