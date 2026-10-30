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

// Function: sub_002AAF18
// Address: 0x2aaf18 - 0x2aafd0
void sub_002AAF18_0x2aaf18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AAF18_0x2aaf18");
#endif

    switch (ctx->pc) {
        case 0x2aaf60u: goto label_2aaf60;
        case 0x2aaf6cu: goto label_2aaf6c;
        case 0x2aaf8cu: goto label_2aaf8c;
        default: break;
    }

    ctx->pc = 0x2aaf18u;

    // 0x2aaf18: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2aaf18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2aaf1c: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x2aaf1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
    // 0x2aaf20: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2aaf20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2aaf24: 0x24634b00  addiu       $v1, $v1, 0x4B00
    ctx->pc = 0x2aaf24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 19200));
    // 0x2aaf28: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2aaf28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2aaf2c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2aaf2cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aaf30: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2aaf30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2aaf34: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2aaf34u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2aaf38: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2aaf38u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2aaf3c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2aaf3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2aaf40: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2aaf40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2aaf44: 0x84500092  lh          $s0, 0x92($v0)
    ctx->pc = 0x2aaf44u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 146)));
    // 0x2aaf48: 0x8c4600cc  lw          $a2, 0xCC($v0)
    ctx->pc = 0x2aaf48u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 204)));
    // 0x2aaf4c: 0x108140  sll         $s0, $s0, 5
    ctx->pc = 0x2aaf4cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
    // 0x2aaf50: 0x2038021  addu        $s0, $s0, $v1
    ctx->pc = 0x2aaf50u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x2aaf54: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2aaf54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aaf58: 0xc0ab6b0  jal         func_2ADAC0
    ctx->pc = 0x2AAF58u;
    SET_GPR_U32(ctx, 31, 0x2AAF60u);
    ctx->pc = 0x2AAF5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AAF58u;
    // 0x2aaf5c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ADAC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ADAC0u, 0x2AAF58u, 0x2AAF60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AAF60u;
label_2aaf60:
    // 0x2aaf60: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2aaf60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aaf64: 0xc10587a  jal         func_4161E8
    ctx->pc = 0x2AAF64u;
    SET_GPR_U32(ctx, 31, 0x2AAF6Cu);
    ctx->pc = 0x2AAF68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AAF64u;
    // 0x2aaf68: 0xae220050  sw          $v0, 0x50($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4161E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4161E8u, 0x2AAF64u, 0x2AAF6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AAF6Cu;
label_2aaf6c:
    // 0x2aaf6c: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x2aaf6cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2aaf70: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2aaf70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aaf74: 0x8e250050  lw          $a1, 0x50($s1)
    ctx->pc = 0x2aaf74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
    // 0x2aaf78: 0x7e230020  sq          $v1, 0x20($s1)
    ctx->pc = 0x2aaf78u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 32), GPR_VEC(ctx, 3));
    // 0x2aaf7c: 0x7a020000  lq          $v0, 0x0($s0)
    ctx->pc = 0x2aaf7cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2aaf80: 0xae250054  sw          $a1, 0x54($s1)
    ctx->pc = 0x2aaf80u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 5));
    // 0x2aaf84: 0xc0aac36  jal         func_2AB0D8
    ctx->pc = 0x2AAF84u;
    SET_GPR_U32(ctx, 31, 0x2AAF8Cu);
    ctx->pc = 0x2AAF88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AAF84u;
    // 0x2aaf88: 0x7e220030  sq          $v0, 0x30($s1) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 17), 48), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AB0D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AB0D8u, 0x2AAF84u, 0x2AAF8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AAF8Cu;
label_2aaf8c:
    // 0x2aaf8c: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x2aaf8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x2aaf90: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2aaf90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2aaf94: 0x8c64b734  lw          $a0, -0x48CC($v1)
    ctx->pc = 0x2aaf94u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x50B734u));
    // 0x2aaf98: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2aaf98u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2aaf9c: 0x8c820048  lw          $v0, 0x48($a0)
    ctx->pc = 0x2aaf9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x2aafa0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2aafa0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2aafa4: 0x24421388  addiu       $v0, $v0, 0x1388
    ctx->pc = 0x2aafa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5000));
    // 0x2aafa8: 0xae220064  sw          $v0, 0x64($s1)
    ctx->pc = 0x2aafa8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
    // 0x2aafac: 0x8c830048  lw          $v1, 0x48($a0)
    ctx->pc = 0x2aafacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x2aafb0: 0x246361a8  addiu       $v1, $v1, 0x61A8
    ctx->pc = 0x2aafb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 25000));
    // 0x2aafb4: 0xae230068  sw          $v1, 0x68($s1)
    ctx->pc = 0x2aafb4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 104), GPR_U32(ctx, 3));
    // 0x2aafb8: 0x90a2000b  lbu         $v0, 0xB($a1)
    ctx->pc = 0x2aafb8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 11)));
    // 0x2aafbc: 0xa2220074  sb          $v0, 0x74($s1)
    ctx->pc = 0x2aafbcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 116), (uint8_t)GPR_U32(ctx, 2));
    // 0x2aafc0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2aafc0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2aafc4: 0x3e00008  jr          $ra
    ctx->pc = 0x2AAFC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AAFC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AAFC4u;
        // 0x2aafc8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AAFC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AAFCCu;
    // 0x2aafcc: 0x0  nop
    ctx->pc = 0x2aafccu;
    // NOP
    ctx->pc = 0x2aafd0u;
}
