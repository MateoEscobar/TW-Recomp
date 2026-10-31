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

// Function: sub_001511C0
// Address: 0x1511c0 - 0x151250
void sub_001511C0_0x1511c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001511C0_0x1511c0");
#endif

    switch (ctx->pc) {
        case 0x151204u: goto label_151204;
        case 0x151230u: goto label_151230;
        default: break;
    }

    ctx->pc = 0x1511c0u;

    // 0x1511c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1511c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1511c4: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1511c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x1511c8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1511c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1511cc: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1511ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x1511d0: 0x48403  sra         $s0, $a0, 16
    ctx->pc = 0x1511d0u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 4), 16));
    // 0x1511d4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1511d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1511d8: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x1511d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x1511dc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1511dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1511e0: 0x108040  sll         $s0, $s0, 1
    ctx->pc = 0x1511e0u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x1511e4: 0x58840  sll         $s1, $a1, 1
    ctx->pc = 0x1511e4u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x1511e8: 0x2463c4e8  addiu       $v1, $v1, -0x3B18
    ctx->pc = 0x1511e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294952168));
    // 0x1511ec: 0x2442c2a8  addiu       $v0, $v0, -0x3D58
    ctx->pc = 0x1511ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951592));
    // 0x1511f0: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x1511f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x1511f4: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1511f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1511f8: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x1511f8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1511fc: 0xc0544b6  jal         func_1512D8
    ctx->pc = 0x1511FCu;
    SET_GPR_U32(ctx, 31, 0x151204u);
    ctx->pc = 0x151200u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1511FCu;
    // 0x151200: 0x84450000  lh          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1512D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1512D8u, 0x1511FCu, 0x151204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151204u;
label_151204:
    // 0x151204: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x151204u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x151208: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x151208u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
    // 0x15120c: 0x2463c4f0  addiu       $v1, $v1, -0x3B10
    ctx->pc = 0x15120cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294952176));
    // 0x151210: 0x2484c308  addiu       $a0, $a0, -0x3CF8
    ctx->pc = 0x151210u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294951688));
    // 0x151214: 0x2038021  addu        $s0, $s0, $v1
    ctx->pc = 0x151214u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x151218: 0x2248821  addu        $s1, $s1, $a0
    ctx->pc = 0x151218u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    // 0x15121c: 0x86040000  lh          $a0, 0x0($s0)
    ctx->pc = 0x15121cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x151220: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x151220u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
    // 0x151224: 0x86250000  lh          $a1, 0x0($s1)
    ctx->pc = 0x151224u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x151228: 0xc0544b6  jal         func_1512D8
    ctx->pc = 0x151228u;
    SET_GPR_U32(ctx, 31, 0x151230u);
    ctx->pc = 0x15122Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x151228u;
    // 0x15122c: 0xac6241a8  sw          $v0, 0x41A8($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 16808), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1512D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1512D8u, 0x151228u, 0x151230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151230u;
label_151230:
    // 0x151230: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x151230u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
    // 0x151234: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x151234u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x151238: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x151238u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15123c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x15123cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x151240: 0xac6241ac  sw          $v0, 0x41AC($v1)
    ctx->pc = 0x151240u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5E41ACu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5E41ACu, _value); } while (0);
    // 0x151244: 0x3e00008  jr          $ra
    ctx->pc = 0x151244u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x151248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151244u;
        // 0x151248: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x151244u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15124Cu;
    // 0x15124c: 0x0  nop
    ctx->pc = 0x15124cu;
    // NOP
    ctx->pc = 0x151250u;
}
