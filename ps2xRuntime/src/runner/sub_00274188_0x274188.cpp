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

// Function: sub_00274188
// Address: 0x274188 - 0x2741d8
void sub_00274188_0x274188(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00274188_0x274188");
#endif

    switch (ctx->pc) {
        case 0x2741a0u: goto label_2741a0;
        default: break;
    }

    ctx->pc = 0x274188u;

    // 0x274188: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x274188u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x27418c: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x27418cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
    // 0x274190: 0x2447d978  addiu       $a3, $v0, -0x2688
    ctx->pc = 0x274190u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957432));
    // 0x274194: 0xac640914  sw          $a0, 0x914($v1)
    ctx->pc = 0x274194u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x510914u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x510914u, _value); } while (0);
    // 0x274198: 0x24e80004  addiu       $t0, $a3, 0x4
    ctx->pc = 0x274198u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x27419c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x27419cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2741a0:
    // 0x2741a0: 0x61042  srl         $v0, $a2, 1
    ctx->pc = 0x2741a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 6), 1));
    // 0x2741a4: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x2741a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2741a8: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x2741a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2741ac: 0x24c60002  addiu       $a2, $a2, 0x2
    ctx->pc = 0x2741acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
    // 0x2741b0: 0x471821  addu        $v1, $v0, $a3
    ctx->pc = 0x2741b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x2741b4: 0x2cc40080  sltiu       $a0, $a2, 0x80
    ctx->pc = 0x2741b4u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)128) ? 1 : 0);
    // 0x2741b8: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x2741b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x2741bc: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x2741bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x2741c0: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x2741c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2741c4: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x2741c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x2741c8: 0x1480fff5  bnez        $a0, . + 4 + (-0xB << 2)
    ctx->pc = 0x2741C8u;
    {
        const bool branch_taken_0x2741c8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2741CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2741C8u;
        // 0x2741cc: 0xe4400000  swc1        $f0, 0x0($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2741c8) {
            ctx->pc = 0x2741A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2741a0;
        }
    }
    ctx->pc = 0x2741D0u;
    // 0x2741d0: 0x3e00008  jr          $ra
    ctx->pc = 0x2741D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2741D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2741D8u;
}
