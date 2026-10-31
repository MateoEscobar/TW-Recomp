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

// Function: sub_003ED8B0
// Address: 0x3ed8b0 - 0x3ed958
void sub_003ED8B0_0x3ed8b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003ED8B0_0x3ed8b0");
#endif

    switch (ctx->pc) {
        case 0x3ed8b0u: goto label_3ed8b0;
        case 0x3ed8b4u: goto label_3ed8b4;
        case 0x3ed8b8u: goto label_3ed8b8;
        case 0x3ed8bcu: goto label_3ed8bc;
        case 0x3ed8c0u: goto label_3ed8c0;
        case 0x3ed8c4u: goto label_3ed8c4;
        case 0x3ed8c8u: goto label_3ed8c8;
        case 0x3ed8ccu: goto label_3ed8cc;
        case 0x3ed8d0u: goto label_3ed8d0;
        case 0x3ed8d4u: goto label_3ed8d4;
        case 0x3ed8d8u: goto label_3ed8d8;
        case 0x3ed8dcu: goto label_3ed8dc;
        case 0x3ed8e0u: goto label_3ed8e0;
        case 0x3ed8e4u: goto label_3ed8e4;
        case 0x3ed8e8u: goto label_3ed8e8;
        case 0x3ed8ecu: goto label_3ed8ec;
        case 0x3ed8f0u: goto label_3ed8f0;
        case 0x3ed8f4u: goto label_3ed8f4;
        case 0x3ed8f8u: goto label_3ed8f8;
        case 0x3ed8fcu: goto label_3ed8fc;
        case 0x3ed900u: goto label_3ed900;
        case 0x3ed904u: goto label_3ed904;
        case 0x3ed908u: goto label_3ed908;
        case 0x3ed90cu: goto label_3ed90c;
        case 0x3ed910u: goto label_3ed910;
        case 0x3ed914u: goto label_3ed914;
        case 0x3ed918u: goto label_3ed918;
        case 0x3ed91cu: goto label_3ed91c;
        case 0x3ed920u: goto label_3ed920;
        case 0x3ed924u: goto label_3ed924;
        case 0x3ed928u: goto label_3ed928;
        case 0x3ed92cu: goto label_3ed92c;
        case 0x3ed930u: goto label_3ed930;
        case 0x3ed934u: goto label_3ed934;
        case 0x3ed938u: goto label_3ed938;
        case 0x3ed93cu: goto label_3ed93c;
        case 0x3ed940u: goto label_3ed940;
        case 0x3ed944u: goto label_3ed944;
        case 0x3ed948u: goto label_3ed948;
        case 0x3ed94cu: goto label_3ed94c;
        case 0x3ed950u: goto label_3ed950;
        case 0x3ed954u: goto label_3ed954;
        default: break;
    }

    ctx->pc = 0x3ed8b0u;

label_3ed8b0:
    // 0x3ed8b0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x3ed8b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_3ed8b4:
    // 0x3ed8b4: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x3ed8b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_3ed8b8:
    // 0x3ed8b8: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x3ed8b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_3ed8bc:
    // 0x3ed8bc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3ed8bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3ed8c0:
    // 0x3ed8c0: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x3ed8c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_3ed8c4:
    // 0x3ed8c4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3ed8c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3ed8c8:
    // 0x3ed8c8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3ed8c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_3ed8cc:
    // 0x3ed8cc: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3ed8ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3ed8d0:
    // 0x3ed8d0: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3ed8d0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3ed8d4:
    // 0x3ed8d4: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3ed8d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3ed8d8:
    // 0x3ed8d8: 0x40f809  jalr        $v0
label_3ed8dc:
    if (ctx->pc == 0x3ED8DCu) {
        ctx->pc = 0x3ED8DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ED8D8u;
        // 0x3ed8dc: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ED8E0u;
        goto label_3ed8e0;
    }
    ctx->pc = 0x3ED8D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3ED8E0u);
        ctx->pc = 0x3ED8DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ED8D8u;
        // 0x3ed8dc: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3ED8D8u, 0x3ED8E0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3ED8E0u;
label_3ed8e0:
    // 0x3ed8e0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3ed8e0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3ed8e4:
    // 0x3ed8e4: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x3ed8e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_3ed8e8:
    // 0x3ed8e8: 0xc0ea12a  jal         func_3A84A8
label_3ed8ec:
    if (ctx->pc == 0x3ED8ECu) {
        ctx->pc = 0x3ED8ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ED8E8u;
        // 0x3ed8ec: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ED8F0u;
        goto label_3ed8f0;
    }
    ctx->pc = 0x3ED8E8u;
    SET_GPR_U32(ctx, 31, 0x3ED8F0u);
    ctx->pc = 0x3ED8ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ED8E8u;
    // 0x3ed8ec: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3ED8E8u, 0x3ED8F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ED8F0u;
label_3ed8f0:
    // 0x3ed8f0: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x3ed8f0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3ed8f4:
    // 0x3ed8f4: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x3ed8f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_3ed8f8:
    // 0x3ed8f8: 0x3c014170  lui         $at, 0x4170
    ctx->pc = 0x3ed8f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16752 << 16));
label_3ed8fc:
    // 0x3ed8fc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3ed8fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3ed900:
    // 0x3ed900: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3ed900u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3ed904:
    // 0x3ed904: 0xae030054  sw          $v1, 0x54($s0)
    ctx->pc = 0x3ed904u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 3));
label_3ed908:
    // 0x3ed908: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x3ed908u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3ed90c:
    // 0x3ed90c: 0xe6000090  swc1        $f0, 0x90($s0)
    ctx->pc = 0x3ed90cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
label_3ed910:
    // 0x3ed910: 0x7e020010  sq          $v0, 0x10($s0)
    ctx->pc = 0x3ed910u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 2));
label_3ed914:
    // 0x3ed914: 0xae00008c  sw          $zero, 0x8C($s0)
    ctx->pc = 0x3ed914u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 140), GPR_U32(ctx, 0));
label_3ed918:
    // 0x3ed918: 0xc0e858c  jal         func_3A1630
label_3ed91c:
    if (ctx->pc == 0x3ED91Cu) {
        ctx->pc = 0x3ED91Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ED918u;
        // 0x3ed91c: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ED920u;
        goto label_3ed920;
    }
    ctx->pc = 0x3ED918u;
    SET_GPR_U32(ctx, 31, 0x3ED920u);
    ctx->pc = 0x3ED91Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ED918u;
    // 0x3ed91c: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3ED918u, 0x3ED920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ED920u;
label_3ed920:
    // 0x3ed920: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x3ed920u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
label_3ed924:
    // 0x3ed924: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x3ed924u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_3ed928:
    // 0x3ed928: 0x3463ff00  ori         $v1, $v1, 0xFF00
    ctx->pc = 0x3ed928u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65280);
label_3ed92c:
    // 0x3ed92c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3ed92cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_3ed930:
    // 0x3ed930: 0xae020084  sw          $v0, 0x84($s0)
    ctx->pc = 0x3ed930u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 2));
label_3ed934:
    // 0x3ed934: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3ed934u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3ed938:
    // 0x3ed938: 0xae030080  sw          $v1, 0x80($s0)
    ctx->pc = 0x3ed938u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 3));
label_3ed93c:
    // 0x3ed93c: 0xae440000  sw          $a0, 0x0($s2)
    ctx->pc = 0x3ed93cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 4));
label_3ed940:
    // 0x3ed940: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x3ed940u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3ed944:
    // 0x3ed944: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x3ed944u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3ed948:
    // 0x3ed948: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x3ed948u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3ed94c:
    // 0x3ed94c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3ed94cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_3ed950:
    // 0x3ed950: 0x3e00008  jr          $ra
label_3ed954:
    if (ctx->pc == 0x3ED954u) {
        ctx->pc = 0x3ED954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ED950u;
        // 0x3ed954: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ED958u;
        goto label_fallthrough_0x3ed950;
    }
    ctx->pc = 0x3ED950u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3ED954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ED950u;
        // 0x3ed954: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3ED950u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3ed950:
    ctx->pc = 0x3ED958u;
}
