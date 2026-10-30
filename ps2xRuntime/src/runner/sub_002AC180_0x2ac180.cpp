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

// Function: sub_002AC180
// Address: 0x2ac180 - 0x2ac218
void sub_002AC180_0x2ac180(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AC180_0x2ac180");
#endif

    switch (ctx->pc) {
        case 0x2ac180u: goto label_2ac180;
        case 0x2ac184u: goto label_2ac184;
        case 0x2ac188u: goto label_2ac188;
        case 0x2ac18cu: goto label_2ac18c;
        case 0x2ac190u: goto label_2ac190;
        case 0x2ac194u: goto label_2ac194;
        case 0x2ac198u: goto label_2ac198;
        case 0x2ac19cu: goto label_2ac19c;
        case 0x2ac1a0u: goto label_2ac1a0;
        case 0x2ac1a4u: goto label_2ac1a4;
        case 0x2ac1a8u: goto label_2ac1a8;
        case 0x2ac1acu: goto label_2ac1ac;
        case 0x2ac1b0u: goto label_2ac1b0;
        case 0x2ac1b4u: goto label_2ac1b4;
        case 0x2ac1b8u: goto label_2ac1b8;
        case 0x2ac1bcu: goto label_2ac1bc;
        case 0x2ac1c0u: goto label_2ac1c0;
        case 0x2ac1c4u: goto label_2ac1c4;
        case 0x2ac1c8u: goto label_2ac1c8;
        case 0x2ac1ccu: goto label_2ac1cc;
        case 0x2ac1d0u: goto label_2ac1d0;
        case 0x2ac1d4u: goto label_2ac1d4;
        case 0x2ac1d8u: goto label_2ac1d8;
        case 0x2ac1dcu: goto label_2ac1dc;
        case 0x2ac1e0u: goto label_2ac1e0;
        case 0x2ac1e4u: goto label_2ac1e4;
        case 0x2ac1e8u: goto label_2ac1e8;
        case 0x2ac1ecu: goto label_2ac1ec;
        case 0x2ac1f0u: goto label_2ac1f0;
        case 0x2ac1f4u: goto label_2ac1f4;
        case 0x2ac1f8u: goto label_2ac1f8;
        case 0x2ac1fcu: goto label_2ac1fc;
        case 0x2ac200u: goto label_2ac200;
        case 0x2ac204u: goto label_2ac204;
        case 0x2ac208u: goto label_2ac208;
        case 0x2ac20cu: goto label_2ac20c;
        case 0x2ac210u: goto label_2ac210;
        case 0x2ac214u: goto label_2ac214;
        default: break;
    }

    ctx->pc = 0x2ac180u;

label_2ac180:
    // 0x2ac180: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2ac180u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2ac184:
    // 0x2ac184: 0x3c070071  lui         $a3, 0x71
    ctx->pc = 0x2ac184u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)113 << 16));
label_2ac188:
    // 0x2ac188: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2ac188u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_2ac18c:
    // 0x2ac18c: 0x24e74b00  addiu       $a3, $a3, 0x4B00
    ctx->pc = 0x2ac18cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 19200));
label_2ac190:
    // 0x2ac190: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2ac190u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_2ac194:
    // 0x2ac194: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2ac194u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2ac198:
    // 0x2ac198: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2ac198u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2ac19c:
    // 0x2ac19c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2ac19cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2ac1a0:
    // 0x2ac1a0: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x2ac1a0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2ac1a4:
    // 0x2ac1a4: 0x24c60090  addiu       $a2, $a2, 0x90
    ctx->pc = 0x2ac1a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 144));
label_2ac1a8:
    // 0x2ac1a8: 0x84c20002  lh          $v0, 0x2($a2)
    ctx->pc = 0x2ac1a8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 2)));
label_2ac1ac:
    // 0x2ac1ac: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x2ac1acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_2ac1b0:
    // 0x2ac1b0: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x2ac1b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_2ac1b4:
    // 0x2ac1b4: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x2ac1b4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_2ac1b8:
    // 0x2ac1b8: 0x7e030010  sq          $v1, 0x10($s0)
    ctx->pc = 0x2ac1b8u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 3));
label_2ac1bc:
    // 0x2ac1bc: 0x84c50002  lh          $a1, 0x2($a2)
    ctx->pc = 0x2ac1bcu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 2)));
label_2ac1c0:
    // 0x2ac1c0: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x2ac1c0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_2ac1c4:
    // 0x2ac1c4: 0xa72821  addu        $a1, $a1, $a3
    ctx->pc = 0x2ac1c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
label_2ac1c8:
    // 0x2ac1c8: 0xc0cd8ec  jal         func_3363B0
label_2ac1cc:
    if (ctx->pc == 0x2AC1CCu) {
        ctx->pc = 0x2AC1CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC1C8u;
        // 0x2ac1cc: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AC1D0u;
        goto label_2ac1d0;
    }
    ctx->pc = 0x2AC1C8u;
    SET_GPR_U32(ctx, 31, 0x2AC1D0u);
    ctx->pc = 0x2AC1CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AC1C8u;
    // 0x2ac1cc: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3363B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3363B0u, 0x2AC1C8u, 0x2AC1D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AC1D0u;
label_2ac1d0:
    // 0x2ac1d0: 0xc0cd766  jal         func_335D98
label_2ac1d4:
    if (ctx->pc == 0x2AC1D4u) {
        ctx->pc = 0x2AC1D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC1D0u;
        // 0x2ac1d4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AC1D8u;
        goto label_2ac1d8;
    }
    ctx->pc = 0x2AC1D0u;
    SET_GPR_U32(ctx, 31, 0x2AC1D8u);
    ctx->pc = 0x2AC1D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AC1D0u;
    // 0x2ac1d4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335D98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335D98u, 0x2AC1D0u, 0x2AC1D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AC1D8u;
label_2ac1d8:
    // 0x2ac1d8: 0xe6000020  swc1        $f0, 0x20($s0)
    ctx->pc = 0x2ac1d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
label_2ac1dc:
    // 0x2ac1dc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2ac1dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ac1e0:
    // 0x2ac1e0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2ac1e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2ac1e4:
    // 0x2ac1e4: 0x8c62021c  lw          $v0, 0x21C($v1)
    ctx->pc = 0x2ac1e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 540)));
label_2ac1e8:
    // 0x2ac1e8: 0xa2020032  sb          $v0, 0x32($s0)
    ctx->pc = 0x2ac1e8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 50), (uint8_t)GPR_U32(ctx, 2));
label_2ac1ec:
    // 0x2ac1ec: 0xa064028d  sb          $a0, 0x28D($v1)
    ctx->pc = 0x2ac1ecu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 653), (uint8_t)GPR_U32(ctx, 4));
label_2ac1f0:
    // 0x2ac1f0: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x2ac1f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_2ac1f4:
    // 0x2ac1f4: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x2ac1f4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
label_2ac1f8:
    // 0x2ac1f8: 0x8c430034  lw          $v1, 0x34($v0)
    ctx->pc = 0x2ac1f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_2ac1fc:
    // 0x2ac1fc: 0x60f809  jalr        $v1
label_2ac200:
    if (ctx->pc == 0x2AC200u) {
        ctx->pc = 0x2AC200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC1FCu;
        // 0x2ac200: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AC204u;
        goto label_2ac204;
    }
    ctx->pc = 0x2AC1FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2AC204u);
        ctx->pc = 0x2AC200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC1FCu;
        // 0x2ac200: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AC1FCu, 0x2AC204u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2AC204u;
label_2ac204:
    // 0x2ac204: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2ac204u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2ac208:
    // 0x2ac208: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2ac208u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2ac20c:
    // 0x2ac20c: 0x3e00008  jr          $ra
label_2ac210:
    if (ctx->pc == 0x2AC210u) {
        ctx->pc = 0x2AC210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC20Cu;
        // 0x2ac210: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AC214u;
        goto label_2ac214;
    }
    ctx->pc = 0x2AC20Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AC210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC20Cu;
        // 0x2ac210: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AC20Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AC214u;
label_2ac214:
    // 0x2ac214: 0x0  nop
    ctx->pc = 0x2ac214u;
    // NOP
    ctx->pc = 0x2ac218u;
}
