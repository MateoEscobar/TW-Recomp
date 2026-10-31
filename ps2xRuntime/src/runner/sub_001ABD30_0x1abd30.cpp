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

// Function: sub_001ABD30
// Address: 0x1abd30 - 0x1abe10
void sub_001ABD30_0x1abd30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001ABD30_0x1abd30");
#endif

    switch (ctx->pc) {
        case 0x1abd90u: goto label_1abd90;
        default: break;
    }

    ctx->pc = 0x1abd30u;

    // 0x1abd30: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x1abd30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x1abd34: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x1abd34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x1abd38: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1abd38u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1abd3c: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x1abd3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x1abd40: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x1abd40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x1abd44: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x1abd44u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x1abd48: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x1abd48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x1abd4c: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x1abd4cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1abd50: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1abd50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1abd54: 0x120902d  daddu       $s2, $t1, $zero
    ctx->pc = 0x1abd54u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1abd58: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x1abd58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
    // 0x1abd5c: 0x140982d  daddu       $s3, $t2, $zero
    ctx->pc = 0x1abd5cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1abd60: 0x7fb60020  sq          $s6, 0x20($sp)
    ctx->pc = 0x1abd60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 22));
    // 0x1abd64: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x1abd64u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1abd68: 0x7fb70010  sq          $s7, 0x10($sp)
    ctx->pc = 0x1abd68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 23));
    // 0x1abd6c: 0xe0b02d  daddu       $s6, $a3, $zero
    ctx->pc = 0x1abd6cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1abd70: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1abd70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1abd74: 0xa0b82d  daddu       $s7, $a1, $zero
    ctx->pc = 0x1abd74u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1abd78: 0xae0000c8  sw          $zero, 0xC8($s0)
    ctx->pc = 0x1abd78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 200), GPR_U32(ctx, 0));
    // 0x1abd7c: 0x160a02d  daddu       $s4, $t3, $zero
    ctx->pc = 0x1abd7cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1abd80: 0xae000094  sw          $zero, 0x94($s0)
    ctx->pc = 0x1abd80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 148), GPR_U32(ctx, 0));
    // 0x1abd84: 0x24840840  addiu       $a0, $a0, 0x840
    ctx->pc = 0x1abd84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2112));
    // 0x1abd88: 0xc06ba26  jal         func_1AE898
    ctx->pc = 0x1ABD88u;
    SET_GPR_U32(ctx, 31, 0x1ABD90u);
    ctx->pc = 0x1ABD8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ABD88u;
    // 0x1abd8c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AE898u, 0x1ABD88u, 0x1ABD90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ABD90u;
label_1abd90:
    // 0x1abd90: 0xa21100b8  sb          $s1, 0xB8($s0)
    ctx->pc = 0x1abd90u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 184), (uint8_t)GPR_U32(ctx, 17));
    // 0x1abd94: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1abd94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1abd98: 0xa21200b9  sb          $s2, 0xB9($s0)
    ctx->pc = 0x1abd98u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 185), (uint8_t)GPR_U32(ctx, 18));
    // 0x1abd9c: 0x322300ff  andi        $v1, $s1, 0xFF
    ctx->pc = 0x1abd9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x1abda0: 0xae130090  sw          $s3, 0x90($s0)
    ctx->pc = 0x1abda0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 19));
    // 0x1abda4: 0x324400ff  andi        $a0, $s2, 0xFF
    ctx->pc = 0x1abda4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
    // 0x1abda8: 0xae020060  sw          $v0, 0x60($s0)
    ctx->pc = 0x1abda8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 2));
    // 0x1abdac: 0x641818  mult        $v1, $v1, $a0
    ctx->pc = 0x1abdacu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1abdb0: 0xae0000b0  sw          $zero, 0xB0($s0)
    ctx->pc = 0x1abdb0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 0));
    // 0x1abdb4: 0xae0000b4  sw          $zero, 0xB4($s0)
    ctx->pc = 0x1abdb4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 0));
    // 0x1abdb8: 0xae0000c0  sw          $zero, 0xC0($s0)
    ctx->pc = 0x1abdb8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 192), GPR_U32(ctx, 0));
    // 0x1abdbc: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x1abdbcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1abdc0: 0xae0300bc  sw          $v1, 0xBC($s0)
    ctx->pc = 0x1abdc0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 188), GPR_U32(ctx, 3));
    // 0x1abdc4: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x1abdc4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1abdc8: 0x7ae20000  lq          $v0, 0x0($s7)
    ctx->pc = 0x1abdc8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x1abdcc: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x1abdccu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1abdd0: 0x7e020020  sq          $v0, 0x20($s0)
    ctx->pc = 0x1abdd0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), GPR_VEC(ctx, 2));
    // 0x1abdd4: 0x7bb70010  lq          $s7, 0x10($sp)
    ctx->pc = 0x1abdd4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1abdd8: 0x7aa30000  lq          $v1, 0x0($s5)
    ctx->pc = 0x1abdd8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x1abddc: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x1abddcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1abde0: 0x7e030030  sq          $v1, 0x30($s0)
    ctx->pc = 0x1abde0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 48), GPR_VEC(ctx, 3));
    // 0x1abde4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1abde4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1abde8: 0x7ac20000  lq          $v0, 0x0($s6)
    ctx->pc = 0x1abde8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x1abdec: 0xae1400c4  sw          $s4, 0xC4($s0)
    ctx->pc = 0x1abdecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 196), GPR_U32(ctx, 20));
    // 0x1abdf0: 0x7e0200a0  sq          $v0, 0xA0($s0)
    ctx->pc = 0x1abdf0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 160), GPR_VEC(ctx, 2));
    // 0x1abdf4: 0xae05000c  sw          $a1, 0xC($s0)
    ctx->pc = 0x1abdf4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 5));
    // 0x1abdf8: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x1abdf8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x1abdfc: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x1abdfcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1abe00: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1abe00u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1abe04: 0x7bb60020  lq          $s6, 0x20($sp)
    ctx->pc = 0x1abe04u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1abe08: 0x3e00008  jr          $ra
    ctx->pc = 0x1ABE08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ABE0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ABE08u;
        // 0x1abe0c: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ABE08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1ABE10u;
}
