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

// Function: sub_002AB0D8
// Address: 0x2ab0d8 - 0x2ab1e8
void sub_002AB0D8_0x2ab0d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AB0D8_0x2ab0d8");
#endif

    switch (ctx->pc) {
        case 0x2ab0d8u: goto label_2ab0d8;
        case 0x2ab0dcu: goto label_2ab0dc;
        case 0x2ab0e0u: goto label_2ab0e0;
        case 0x2ab0e4u: goto label_2ab0e4;
        case 0x2ab0e8u: goto label_2ab0e8;
        case 0x2ab0ecu: goto label_2ab0ec;
        case 0x2ab0f0u: goto label_2ab0f0;
        case 0x2ab0f4u: goto label_2ab0f4;
        case 0x2ab0f8u: goto label_2ab0f8;
        case 0x2ab0fcu: goto label_2ab0fc;
        case 0x2ab100u: goto label_2ab100;
        case 0x2ab104u: goto label_2ab104;
        case 0x2ab108u: goto label_2ab108;
        case 0x2ab10cu: goto label_2ab10c;
        case 0x2ab110u: goto label_2ab110;
        case 0x2ab114u: goto label_2ab114;
        case 0x2ab118u: goto label_2ab118;
        case 0x2ab11cu: goto label_2ab11c;
        case 0x2ab120u: goto label_2ab120;
        case 0x2ab124u: goto label_2ab124;
        case 0x2ab128u: goto label_2ab128;
        case 0x2ab12cu: goto label_2ab12c;
        case 0x2ab130u: goto label_2ab130;
        case 0x2ab134u: goto label_2ab134;
        case 0x2ab138u: goto label_2ab138;
        case 0x2ab13cu: goto label_2ab13c;
        case 0x2ab140u: goto label_2ab140;
        case 0x2ab144u: goto label_2ab144;
        case 0x2ab148u: goto label_2ab148;
        case 0x2ab14cu: goto label_2ab14c;
        case 0x2ab150u: goto label_2ab150;
        case 0x2ab154u: goto label_2ab154;
        case 0x2ab158u: goto label_2ab158;
        case 0x2ab15cu: goto label_2ab15c;
        case 0x2ab160u: goto label_2ab160;
        case 0x2ab164u: goto label_2ab164;
        case 0x2ab168u: goto label_2ab168;
        case 0x2ab16cu: goto label_2ab16c;
        case 0x2ab170u: goto label_2ab170;
        case 0x2ab174u: goto label_2ab174;
        case 0x2ab178u: goto label_2ab178;
        case 0x2ab17cu: goto label_2ab17c;
        case 0x2ab180u: goto label_2ab180;
        case 0x2ab184u: goto label_2ab184;
        case 0x2ab188u: goto label_2ab188;
        case 0x2ab18cu: goto label_2ab18c;
        case 0x2ab190u: goto label_2ab190;
        case 0x2ab194u: goto label_2ab194;
        case 0x2ab198u: goto label_2ab198;
        case 0x2ab19cu: goto label_2ab19c;
        case 0x2ab1a0u: goto label_2ab1a0;
        case 0x2ab1a4u: goto label_2ab1a4;
        case 0x2ab1a8u: goto label_2ab1a8;
        case 0x2ab1acu: goto label_2ab1ac;
        case 0x2ab1b0u: goto label_2ab1b0;
        case 0x2ab1b4u: goto label_2ab1b4;
        case 0x2ab1b8u: goto label_2ab1b8;
        case 0x2ab1bcu: goto label_2ab1bc;
        case 0x2ab1c0u: goto label_2ab1c0;
        case 0x2ab1c4u: goto label_2ab1c4;
        case 0x2ab1c8u: goto label_2ab1c8;
        case 0x2ab1ccu: goto label_2ab1cc;
        case 0x2ab1d0u: goto label_2ab1d0;
        case 0x2ab1d4u: goto label_2ab1d4;
        case 0x2ab1d8u: goto label_2ab1d8;
        case 0x2ab1dcu: goto label_2ab1dc;
        case 0x2ab1e0u: goto label_2ab1e0;
        case 0x2ab1e4u: goto label_2ab1e4;
        default: break;
    }

    ctx->pc = 0x2ab0d8u;

label_2ab0d8:
    // 0x2ab0d8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2ab0d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_2ab0dc:
    // 0x2ab0dc: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x2ab0dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_2ab0e0:
    // 0x2ab0e0: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x2ab0e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_2ab0e4:
    // 0x2ab0e4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2ab0e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2ab0e8:
    // 0x2ab0e8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2ab0e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_2ab0ec:
    // 0x2ab0ec: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2ab0ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_2ab0f0:
    // 0x2ab0f0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2ab0f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2ab0f4:
    // 0x2ab0f4: 0x8e030054  lw          $v1, 0x54($s0)
    ctx->pc = 0x2ab0f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_2ab0f8:
    // 0x2ab0f8: 0x8c520000  lw          $s2, 0x0($v0)
    ctx->pc = 0x2ab0f8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2ab0fc:
    // 0x2ab0fc: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x2ab0fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2ab100:
    // 0x2ab100: 0xc10587a  jal         func_4161E8
label_2ab104:
    if (ctx->pc == 0x2AB104u) {
        ctx->pc = 0x2AB104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AB100u;
        // 0x2ab104: 0xae030050  sw          $v1, 0x50($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AB108u;
        goto label_2ab108;
    }
    ctx->pc = 0x2AB100u;
    SET_GPR_U32(ctx, 31, 0x2AB108u);
    ctx->pc = 0x2AB104u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AB100u;
    // 0x2ab104: 0xae030050  sw          $v1, 0x50($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4161E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4161E8u, 0x2AB100u, 0x2AB108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AB108u;
label_2ab108:
    // 0x2ab108: 0x3c013fe0  lui         $at, 0x3FE0
    ctx->pc = 0x2ab108u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16352 << 16));
label_2ab10c:
    // 0x2ab10c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2ab10cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2ab110:
    // 0x2ab110: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2ab110u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ab114:
    // 0x2ab114: 0x3c013f86  lui         $at, 0x3F86
    ctx->pc = 0x2ab114u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16262 << 16));
label_2ab118:
    // 0x2ab118: 0x34210a92  ori         $at, $at, 0xA92
    ctx->pc = 0x2ab118u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2706);
label_2ab11c:
    // 0x2ab11c: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x2ab11cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_2ab120:
    // 0x2ab120: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2ab120u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ab124:
    // 0x2ab124: 0x26050020  addiu       $a1, $s0, 0x20
    ctx->pc = 0x2ab124u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
label_2ab128:
    // 0x2ab128: 0xc0a7cf2  jal         func_29F3C8
label_2ab12c:
    if (ctx->pc == 0x2AB12Cu) {
        ctx->pc = 0x2AB12Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AB128u;
        // 0x2ab12c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AB130u;
        goto label_2ab130;
    }
    ctx->pc = 0x2AB128u;
    SET_GPR_U32(ctx, 31, 0x2AB130u);
    ctx->pc = 0x2AB12Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AB128u;
    // 0x2ab12c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29F3C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29F3C8u, 0x2AB128u, 0x2AB130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AB130u;
label_2ab130:
    // 0x2ab130: 0x86430092  lh          $v1, 0x92($s2)
    ctx->pc = 0x2ab130u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 146)));
label_2ab134:
    // 0x2ab134: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x2ab134u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
label_2ab138:
    // 0x2ab138: 0x24424b00  addiu       $v0, $v0, 0x4B00
    ctx->pc = 0x2ab138u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
label_2ab13c:
    // 0x2ab13c: 0x3c0140e0  lui         $at, 0x40E0
    ctx->pc = 0x2ab13cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16608 << 16));
label_2ab140:
    // 0x2ab140: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2ab140u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2ab144:
    // 0x2ab144: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x2ab144u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_2ab148:
    // 0x2ab148: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x2ab148u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
label_2ab14c:
    // 0x2ab14c: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x2ab14cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_2ab150:
    // 0x2ab150: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2ab150u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2ab154:
    // 0x2ab154: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x2ab154u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_2ab158:
    // 0x2ab158: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x2ab158u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_2ab15c:
    // 0x2ab15c: 0x2484b880  addiu       $a0, $a0, -0x4780
    ctx->pc = 0x2ab15cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948992));
label_2ab160:
    // 0x2ab160: 0xc0cd508  jal         func_335420
label_2ab164:
    if (ctx->pc == 0x2AB164u) {
        ctx->pc = 0x2AB164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AB160u;
        // 0x2ab164: 0x7e020030  sq          $v0, 0x30($s0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 16), 48), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AB168u;
        goto label_2ab168;
    }
    ctx->pc = 0x2AB160u;
    SET_GPR_U32(ctx, 31, 0x2AB168u);
    ctx->pc = 0x2AB164u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AB160u;
    // 0x2ab164: 0x7e020030  sq          $v0, 0x30($s0) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 16), 48), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335420u, 0x2AB160u, 0x2AB168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AB168u;
label_2ab168:
    // 0x2ab168: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x2ab168u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
label_2ab16c:
    // 0x2ab16c: 0x8e050050  lw          $a1, 0x50($s0)
    ctx->pc = 0x2ab16cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_2ab170:
    // 0x2ab170: 0xe6000060  swc1        $f0, 0x60($s0)
    ctx->pc = 0x2ab170u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 96), bits); }
label_2ab174:
    // 0x2ab174: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x2ab174u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_2ab178:
    // 0x2ab178: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2ab178u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2ab17c:
    // 0x2ab17c: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2ab17cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2ab180:
    // 0x2ab180: 0x40f809  jalr        $v0
label_2ab184:
    if (ctx->pc == 0x2AB184u) {
        ctx->pc = 0x2AB184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AB180u;
        // 0x2ab184: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AB188u;
        goto label_2ab188;
    }
    ctx->pc = 0x2AB180u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2AB188u);
        ctx->pc = 0x2AB184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AB180u;
        // 0x2ab184: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AB180u, 0x2AB188u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2AB188u;
label_2ab188:
    // 0x2ab188: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x2ab188u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2ab18c:
    // 0x2ab18c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2ab18cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ab190:
    // 0x2ab190: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2ab190u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2ab194:
    // 0x2ab194: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2ab194u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2ab198:
    // 0x2ab198: 0x40f809  jalr        $v0
label_2ab19c:
    if (ctx->pc == 0x2AB19Cu) {
        ctx->pc = 0x2AB19Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AB198u;
        // 0x2ab19c: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AB1A0u;
        goto label_2ab1a0;
    }
    ctx->pc = 0x2AB198u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2AB1A0u);
        ctx->pc = 0x2AB19Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AB198u;
        // 0x2ab19c: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AB198u, 0x2AB1A0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2AB1A0u;
label_2ab1a0:
    // 0x2ab1a0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2ab1a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2ab1a4:
    // 0x2ab1a4: 0xc0a9d6e  jal         func_2A75B8
label_2ab1a8:
    if (ctx->pc == 0x2AB1A8u) {
        ctx->pc = 0x2AB1A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AB1A4u;
        // 0x2ab1a8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AB1ACu;
        goto label_2ab1ac;
    }
    ctx->pc = 0x2AB1A4u;
    SET_GPR_U32(ctx, 31, 0x2AB1ACu);
    ctx->pc = 0x2AB1A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AB1A4u;
    // 0x2ab1a8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A75B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A75B8u, 0x2AB1A4u, 0x2AB1ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AB1ACu;
label_2ab1ac:
    // 0x2ab1ac: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2ab1acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2ab1b0:
    // 0x2ab1b0: 0xc0e40a2  jal         func_390288
label_2ab1b4:
    if (ctx->pc == 0x2AB1B4u) {
        ctx->pc = 0x2AB1B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AB1B0u;
        // 0x2ab1b4: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AB1B8u;
        goto label_2ab1b8;
    }
    ctx->pc = 0x2AB1B0u;
    SET_GPR_U32(ctx, 31, 0x2AB1B8u);
    ctx->pc = 0x2AB1B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AB1B0u;
    // 0x2ab1b4: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390288u, 0x2AB1B0u, 0x2AB1B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AB1B8u;
label_2ab1b8:
    // 0x2ab1b8: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2ab1b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2ab1bc:
    // 0x2ab1bc: 0x24030013  addiu       $v1, $zero, 0x13
    ctx->pc = 0x2ab1bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
label_2ab1c0:
    // 0x2ab1c0: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x2ab1c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_2ab1c4:
    // 0x2ab1c4: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x2ab1c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2ab1c8:
    // 0x2ab1c8: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x2ab1c8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2ab1cc:
    // 0x2ab1cc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2ab1ccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2ab1d0:
    // 0x2ab1d0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2ab1d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2ab1d4:
    // 0x2ab1d4: 0xa48300f4  sh          $v1, 0xF4($a0)
    ctx->pc = 0x2ab1d4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 244), (uint16_t)GPR_U32(ctx, 3));
label_2ab1d8:
    // 0x2ab1d8: 0x3e00008  jr          $ra
label_2ab1dc:
    if (ctx->pc == 0x2AB1DCu) {
        ctx->pc = 0x2AB1DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AB1D8u;
        // 0x2ab1dc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AB1E0u;
        goto label_2ab1e0;
    }
    ctx->pc = 0x2AB1D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AB1DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AB1D8u;
        // 0x2ab1dc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AB1D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AB1E0u;
label_2ab1e0:
    // 0x2ab1e0: 0x27bd0080  addiu       $sp, $sp, 0x80
    ctx->pc = 0x2ab1e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_2ab1e4:
    // 0x2ab1e4: 0x0  nop
    ctx->pc = 0x2ab1e4u;
    // NOP
    ctx->pc = 0x2ab1e8u;
}
