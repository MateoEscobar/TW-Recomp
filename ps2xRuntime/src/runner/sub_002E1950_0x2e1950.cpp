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

// Function: sub_002E1950
// Address: 0x2e1950 - 0x2e1998
void sub_002E1950_0x2e1950(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E1950_0x2e1950");
#endif

    switch (ctx->pc) {
        case 0x2e196cu: goto label_2e196c;
        default: break;
    }

    ctx->pc = 0x2e1950u;

    // 0x2e1950: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2e1950u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2e1954: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2e1954u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2e1958: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2e1958u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2e195c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2e195cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e1960: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2e1960u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2e1964: 0xc0a337e  jal         func_28CDF8
    ctx->pc = 0x2E1964u;
    SET_GPR_U32(ctx, 31, 0x2E196Cu);
    ctx->pc = 0x2E1968u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E1964u;
    // 0x2e1968: 0x82050039  lb          $a1, 0x39($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 57)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28CDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28CDF8u, 0x2E1964u, 0x2E196Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E196Cu;
label_2e196c:
    // 0x2e196c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2e196cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2e1970: 0x9203003a  lbu         $v1, 0x3A($s0)
    ctx->pc = 0x2e1970u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 58)));
    // 0x2e1974: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2e1974u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e1978: 0xac43021c  sw          $v1, 0x21C($v0)
    ctx->pc = 0x2e1978u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 540), GPR_U32(ctx, 3));
    // 0x2e197c: 0xc600002c  lwc1        $f0, 0x2C($s0)
    ctx->pc = 0x2e197cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e1980: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2e1980u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2e1984: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2e1984u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e1988: 0xe440012c  swc1        $f0, 0x12C($v0)
    ctx->pc = 0x2e1988u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 300), bits); }
    // 0x2e198c: 0x3e00008  jr          $ra
    ctx->pc = 0x2E198Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E1990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E198Cu;
        // 0x2e1990: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E198Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E1994u;
    // 0x2e1994: 0x0  nop
    ctx->pc = 0x2e1994u;
    // NOP
    ctx->pc = 0x2e1998u;
}
