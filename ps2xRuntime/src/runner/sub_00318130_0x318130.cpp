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

// Function: sub_00318130
// Address: 0x318130 - 0x3181e8
void sub_00318130_0x318130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00318130_0x318130");
#endif

    switch (ctx->pc) {
        case 0x31815cu: goto label_31815c;
        case 0x318164u: goto label_318164;
        case 0x3181a8u: goto label_3181a8;
        case 0x3181d8u: goto label_3181d8;
        default: break;
    }

    ctx->pc = 0x318130u;

    // 0x318130: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x318130u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x318134: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x318134u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x318138: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x318138u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x31813c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x31813cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x318140: 0x9202004e  lbu         $v0, 0x4E($s0)
    ctx->pc = 0x318140u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 78)));
    // 0x318144: 0x54400025  bnel        $v0, $zero, . + 4 + (0x25 << 2)
    ctx->pc = 0x318144u;
    {
        const bool branch_taken_0x318144 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x318144) {
            ctx->pc = 0x318148u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x318144u;
            // 0x318148: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3181DCu;
            goto label_3181dc;
        }
    }
    ctx->pc = 0x31814Cu;
    // 0x31814c: 0x86040020  lh          $a0, 0x20($s0)
    ctx->pc = 0x31814cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x318150: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x318150u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x318154: 0xc05b0e2  jal         func_16C388
    ctx->pc = 0x318154u;
    SET_GPR_U32(ctx, 31, 0x31815Cu);
    ctx->pc = 0x318158u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x318154u;
    // 0x318158: 0xa202004e  sb          $v0, 0x4E($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 78), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16C388u, 0x318154u, 0x31815Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31815Cu;
label_31815c:
    // 0x31815c: 0xc05959e  jal         func_165678
    ctx->pc = 0x31815Cu;
    SET_GPR_U32(ctx, 31, 0x318164u);
    ctx->pc = 0x318160u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31815Cu;
    // 0x318160: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165678u, 0x31815Cu, 0x318164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x318164u;
label_318164:
    // 0x318164: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x318164u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x318168: 0x10a0001b  beqz        $a1, . + 4 + (0x1B << 2)
    ctx->pc = 0x318168u;
    {
        const bool branch_taken_0x318168 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x31816Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318168u;
        // 0x31816c: 0x3c060071  lui         $a2, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x318168) {
            ctx->pc = 0x3181D8u;
            goto label_3181d8;
        }
    }
    ctx->pc = 0x318170u;
    // 0x318170: 0x84a20092  lh          $v0, 0x92($a1)
    ctx->pc = 0x318170u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 146)));
    // 0x318174: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x318174u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x318178: 0x24c64b00  addiu       $a2, $a2, 0x4B00
    ctx->pc = 0x318178u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 19200));
    // 0x31817c: 0x3c014e6e  lui         $at, 0x4E6E
    ctx->pc = 0x31817cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20078 << 16));
    // 0x318180: 0x34216b28  ori         $at, $at, 0x6B28
    ctx->pc = 0x318180u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)27432);
    // 0x318184: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x318184u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x318188: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x318188u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x31818c: 0x3c08002a  lui         $t0, 0x2A
    ctx->pc = 0x31818cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)42 << 16));
    // 0x318190: 0x24840048  addiu       $a0, $a0, 0x48
    ctx->pc = 0x318190u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 72));
    // 0x318194: 0x463021  addu        $a2, $v0, $a2
    ctx->pc = 0x318194u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x318198: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x318198u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x31819c: 0x2508bf60  addiu       $t0, $t0, -0x40A0
    ctx->pc = 0x31819cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294950752));
    // 0x3181a0: 0xc0a734c  jal         func_29CD30
    ctx->pc = 0x3181A0u;
    SET_GPR_U32(ctx, 31, 0x3181A8u);
    ctx->pc = 0x3181A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3181A0u;
    // 0x3181a4: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29CD30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29CD30u, 0x3181A0u, 0x3181A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3181A8u;
label_3181a8:
    // 0x3181a8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3181a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3181ac: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x3181ACu;
    {
        const bool branch_taken_0x3181ac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3181B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3181ACu;
        // 0x3181b0: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3181ac) {
            ctx->pc = 0x3181D8u;
            goto label_3181d8;
        }
    }
    ctx->pc = 0x3181B4u;
    // 0x3181b4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3181b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x3181b8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3181b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3181bc: 0x8c49bd30  lw          $t1, -0x42D0($v0)
    ctx->pc = 0x3181bcu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
    // 0x3181c0: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x3181c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x3181c4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3181c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3181c8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x3181c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3181cc: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x3181ccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3181d0: 0xc088178  jal         func_2205E0
    ctx->pc = 0x3181D0u;
    SET_GPR_U32(ctx, 31, 0x3181D8u);
    ctx->pc = 0x3181D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3181D0u;
    // 0x3181d4: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2205E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2205E0u, 0x3181D0u, 0x3181D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3181D8u;
label_3181d8:
    // 0x3181d8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x3181d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3181dc:
    // 0x3181dc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3181dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3181e0: 0x3e00008  jr          $ra
    ctx->pc = 0x3181E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3181E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3181E0u;
        // 0x3181e4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3181E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3181E8u;
}
