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

// Function: sub_0030F4D0
// Address: 0x30f4d0 - 0x30f570
void sub_0030F4D0_0x30f4d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030F4D0_0x30f4d0");
#endif

    switch (ctx->pc) {
        case 0x30f518u: goto label_30f518;
        default: break;
    }

    ctx->pc = 0x30f4d0u;

    // 0x30f4d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x30f4d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x30f4d4: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x30f4d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x30f4d8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x30f4d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x30f4dc: 0x24423260  addiu       $v0, $v0, 0x3260
    ctx->pc = 0x30f4dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12896));
    // 0x30f4e0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x30f4e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30f4e4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x30f4e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x30f4e8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x30f4e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x30f4ec: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x30f4ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30f4f0: 0xae050000  sw          $a1, 0x0($s0)
    ctx->pc = 0x30f4f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
    // 0x30f4f4: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x30f4f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x30f4f8: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x30f4f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30f4fc: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x30f4fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x30f500: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x30f500u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x30f504: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x30f504u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x30f508: 0xa2000018  sb          $zero, 0x18($s0)
    ctx->pc = 0x30f508u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 24), (uint8_t)GPR_U32(ctx, 0));
    // 0x30f50c: 0xae02001c  sw          $v0, 0x1C($s0)
    ctx->pc = 0x30f50cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
    // 0x30f510: 0xc0c1a3e  jal         func_3068F8
    ctx->pc = 0x30F510u;
    SET_GPR_U32(ctx, 31, 0x30F518u);
    ctx->pc = 0x30F514u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30F510u;
    // 0x30f514: 0xae080008  sw          $t0, 0x8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3068F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3068F8u, 0x30F510u, 0x30F518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30F518u;
label_30f518:
    // 0x30f518: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x30f518u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30f51c: 0xa2110028  sb          $s1, 0x28($s0)
    ctx->pc = 0x30f51cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 40), (uint8_t)GPR_U32(ctx, 17));
    // 0x30f520: 0xa203002b  sb          $v1, 0x2B($s0)
    ctx->pc = 0x30f520u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 43), (uint8_t)GPR_U32(ctx, 3));
    // 0x30f524: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x30f524u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x30f528: 0xa2000029  sb          $zero, 0x29($s0)
    ctx->pc = 0x30f528u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 41), (uint8_t)GPR_U32(ctx, 0));
    // 0x30f52c: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x30f52cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x30f530: 0xa200002a  sb          $zero, 0x2A($s0)
    ctx->pc = 0x30f530u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 42), (uint8_t)GPR_U32(ctx, 0));
    // 0x30f534: 0x244237a0  addiu       $v0, $v0, 0x37A0
    ctx->pc = 0x30f534u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14240));
    // 0x30f538: 0xae02001c  sw          $v0, 0x1C($s0)
    ctx->pc = 0x30f538u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
    // 0x30f53c: 0x8c64b734  lw          $a0, -0x48CC($v1)
    ctx->pc = 0x30f53cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x50B734u));
    // 0x30f540: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x30f540u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30f544: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x30f544u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    // 0x30f548: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x30f548u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x30f54c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x30f54cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x30f550: 0x8c830048  lw          $v1, 0x48($a0)
    ctx->pc = 0x30f550u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x30f554: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x30f554u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30f558: 0x246307d0  addiu       $v1, $v1, 0x7D0
    ctx->pc = 0x30f558u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2000));
    // 0x30f55c: 0xae030020  sw          $v1, 0x20($s0)
    ctx->pc = 0x30f55cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 3));
    // 0x30f560: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x30f560u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x30f564: 0x3e00008  jr          $ra
    ctx->pc = 0x30F564u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30F568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30F564u;
        // 0x30f568: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30F564u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30F56Cu;
    // 0x30f56c: 0x0  nop
    ctx->pc = 0x30f56cu;
    // NOP
    ctx->pc = 0x30f570u;
}
