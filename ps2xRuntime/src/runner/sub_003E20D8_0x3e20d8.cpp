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

// Function: sub_003E20D8
// Address: 0x3e20d8 - 0x3e21c8
void sub_003E20D8_0x3e20d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E20D8_0x3e20d8");
#endif

    switch (ctx->pc) {
        case 0x3e20d8u: goto label_3e20d8;
        case 0x3e20dcu: goto label_3e20dc;
        case 0x3e20e0u: goto label_3e20e0;
        case 0x3e20e4u: goto label_3e20e4;
        case 0x3e20e8u: goto label_3e20e8;
        case 0x3e20ecu: goto label_3e20ec;
        case 0x3e20f0u: goto label_3e20f0;
        case 0x3e20f4u: goto label_3e20f4;
        case 0x3e20f8u: goto label_3e20f8;
        case 0x3e20fcu: goto label_3e20fc;
        case 0x3e2100u: goto label_3e2100;
        case 0x3e2104u: goto label_3e2104;
        case 0x3e2108u: goto label_3e2108;
        case 0x3e210cu: goto label_3e210c;
        case 0x3e2110u: goto label_3e2110;
        case 0x3e2114u: goto label_3e2114;
        case 0x3e2118u: goto label_3e2118;
        case 0x3e211cu: goto label_3e211c;
        case 0x3e2120u: goto label_3e2120;
        case 0x3e2124u: goto label_3e2124;
        case 0x3e2128u: goto label_3e2128;
        case 0x3e212cu: goto label_3e212c;
        case 0x3e2130u: goto label_3e2130;
        case 0x3e2134u: goto label_3e2134;
        case 0x3e2138u: goto label_3e2138;
        case 0x3e213cu: goto label_3e213c;
        case 0x3e2140u: goto label_3e2140;
        case 0x3e2144u: goto label_3e2144;
        case 0x3e2148u: goto label_3e2148;
        case 0x3e214cu: goto label_3e214c;
        case 0x3e2150u: goto label_3e2150;
        case 0x3e2154u: goto label_3e2154;
        case 0x3e2158u: goto label_3e2158;
        case 0x3e215cu: goto label_3e215c;
        case 0x3e2160u: goto label_3e2160;
        case 0x3e2164u: goto label_3e2164;
        case 0x3e2168u: goto label_3e2168;
        case 0x3e216cu: goto label_3e216c;
        case 0x3e2170u: goto label_3e2170;
        case 0x3e2174u: goto label_3e2174;
        case 0x3e2178u: goto label_3e2178;
        case 0x3e217cu: goto label_3e217c;
        case 0x3e2180u: goto label_3e2180;
        case 0x3e2184u: goto label_3e2184;
        case 0x3e2188u: goto label_3e2188;
        case 0x3e218cu: goto label_3e218c;
        case 0x3e2190u: goto label_3e2190;
        case 0x3e2194u: goto label_3e2194;
        case 0x3e2198u: goto label_3e2198;
        case 0x3e219cu: goto label_3e219c;
        case 0x3e21a0u: goto label_3e21a0;
        case 0x3e21a4u: goto label_3e21a4;
        case 0x3e21a8u: goto label_3e21a8;
        case 0x3e21acu: goto label_3e21ac;
        case 0x3e21b0u: goto label_3e21b0;
        case 0x3e21b4u: goto label_3e21b4;
        case 0x3e21b8u: goto label_3e21b8;
        case 0x3e21bcu: goto label_3e21bc;
        case 0x3e21c0u: goto label_3e21c0;
        case 0x3e21c4u: goto label_3e21c4;
        default: break;
    }

    ctx->pc = 0x3e20d8u;

label_3e20d8:
    // 0x3e20d8: 0x27bdfbc0  addiu       $sp, $sp, -0x440
    ctx->pc = 0x3e20d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966208));
label_3e20dc:
    // 0x3e20dc: 0x7fb00430  sq          $s0, 0x430($sp)
    ctx->pc = 0x3e20dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1072), GPR_VEC(ctx, 16));
label_3e20e0:
    // 0x3e20e0: 0x7fb10420  sq          $s1, 0x420($sp)
    ctx->pc = 0x3e20e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1056), GPR_VEC(ctx, 17));
label_3e20e4:
    // 0x3e20e4: 0xffbf0410  sd          $ra, 0x410($sp)
    ctx->pc = 0x3e20e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1040), GPR_U64(ctx, 31));
label_3e20e8:
    // 0x3e20e8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3e20e8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3e20ec:
    // 0x3e20ec: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3e20ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3e20f0:
    // 0x3e20f0: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3e20f0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3e20f4:
    // 0x3e20f4: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3e20f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3e20f8:
    // 0x3e20f8: 0x40f809  jalr        $v0
label_3e20fc:
    if (ctx->pc == 0x3E20FCu) {
        ctx->pc = 0x3E20FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E20F8u;
        // 0x3e20fc: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E2100u;
        goto label_3e2100;
    }
    ctx->pc = 0x3E20F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3E2100u);
        ctx->pc = 0x3E20FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E20F8u;
        // 0x3e20fc: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E20F8u, 0x3E2100u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3E2100u;
label_3e2100:
    // 0x3e2100: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3e2100u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3e2104:
    // 0x3e2104: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3e2104u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3e2108:
    // 0x3e2108: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x3e2108u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3e210c:
    // 0x3e210c: 0x2402003f  addiu       $v0, $zero, 0x3F
    ctx->pc = 0x3e210cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
label_3e2110:
    // 0x3e2110: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3e2110u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_3e2114:
    // 0x3e2114: 0x0  nop
    ctx->pc = 0x3e2114u;
    // NOP
label_3e2118:
    // 0x3e2118: 0x0  nop
    ctx->pc = 0x3e2118u;
    // NOP
label_3e211c:
    // 0x3e211c: 0x0  nop
    ctx->pc = 0x3e211cu;
    // NOP
label_3e2120:
    // 0x3e2120: 0x0  nop
    ctx->pc = 0x3e2120u;
    // NOP
label_3e2124:
    // 0x3e2124: 0x0  nop
    ctx->pc = 0x3e2124u;
    // NOP
label_3e2128:
    // 0x3e2128: 0x1443fffb  bne         $v0, $v1, . + 4 + (-0x5 << 2)
label_3e212c:
    if (ctx->pc == 0x3E212Cu) {
        ctx->pc = 0x3E212Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E2128u;
        // 0x3e212c: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E2130u;
        goto label_3e2130;
    }
    ctx->pc = 0x3E2128u;
    {
        const bool branch_taken_0x3e2128 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x3E212Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E2128u;
        // 0x3e212c: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e2128) {
            ctx->pc = 0x3E2118u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e2118;
        }
    }
    ctx->pc = 0x3E2130u;
label_3e2130:
    // 0x3e2130: 0xc138ddc  jal         func_4E3770
label_3e2134:
    if (ctx->pc == 0x3E2134u) {
        ctx->pc = 0x3E2138u;
        goto label_3e2138;
    }
    ctx->pc = 0x3E2130u;
    SET_GPR_U32(ctx, 31, 0x3E2138u);
    ctx->pc = 0x4E3770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E3770u, 0x3E2130u, 0x3E2138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E2138u;
label_3e2138:
    // 0x3e2138: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x3e2138u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_3e213c:
    // 0x3e213c: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x3e213cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_3e2140:
    // 0x3e2140: 0x24440001  addiu       $a0, $v0, 0x1
    ctx->pc = 0x3e2140u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_3e2144:
    // 0x3e2144: 0x1083001a  beq         $a0, $v1, . + 4 + (0x1A << 2)
label_3e2148:
    if (ctx->pc == 0x3E2148u) {
        ctx->pc = 0x3E2148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E2144u;
        // 0x3e2148: 0xae040010  sw          $a0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E214Cu;
        goto label_3e214c;
    }
    ctx->pc = 0x3E2144u;
    {
        const bool branch_taken_0x3e2144 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x3E2148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E2144u;
        // 0x3e2148: 0xae040010  sw          $a0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e2144) {
            ctx->pc = 0x3E21B0u;
            goto label_3e21b0;
        }
    }
    ctx->pc = 0x3E214Cu;
label_3e214c:
    // 0x3e214c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x3e214cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_3e2150:
    // 0x3e2150: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x3e2150u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_3e2154:
    // 0x3e2154: 0x24424658  addiu       $v0, $v0, 0x4658
    ctx->pc = 0x3e2154u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18008));
label_3e2158:
    // 0x3e2158: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3e2158u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3e215c:
    // 0x3e215c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3e215cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_3e2160:
    // 0x3e2160: 0xc0e858c  jal         func_3A1630
label_3e2164:
    if (ctx->pc == 0x3E2164u) {
        ctx->pc = 0x3E2164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E2160u;
        // 0x3e2164: 0x8c650000  lw          $a1, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E2168u;
        goto label_3e2168;
    }
    ctx->pc = 0x3E2160u;
    SET_GPR_U32(ctx, 31, 0x3E2168u);
    ctx->pc = 0x3E2164u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E2160u;
    // 0x3e2164: 0x8c650000  lw          $a1, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3E2160u, 0x3E2168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E2168u;
label_3e2168:
    // 0x3e2168: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x3e2168u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_3e216c:
    // 0x3e216c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x3e216cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_3e2170:
    // 0x3e2170: 0x24424638  addiu       $v0, $v0, 0x4638
    ctx->pc = 0x3e2170u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 17976));
label_3e2174:
    // 0x3e2174: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x3e2174u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
label_3e2178:
    // 0x3e2178: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3e2178u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_3e217c:
    // 0x3e217c: 0x24a54678  addiu       $a1, $a1, 0x4678
    ctx->pc = 0x3e217cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18040));
label_3e2180:
    // 0x3e2180: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3e2180u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_3e2184:
    // 0x3e2184: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x3e2184u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3e2188:
    // 0x3e2188: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3e2188u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3e218c:
    // 0x3e218c: 0xae2400b4  sw          $a0, 0xB4($s1)
    ctx->pc = 0x3e218cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 180), GPR_U32(ctx, 4));
label_3e2190:
    // 0x3e2190: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x3e2190u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_3e2194:
    // 0x3e2194: 0xc6010014  lwc1        $f1, 0x14($s0)
    ctx->pc = 0x3e2194u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3e2198:
    // 0x3e2198: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3e2198u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_3e219c:
    // 0x3e219c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x3e219cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_3e21a0:
    // 0x3e21a0: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x3e21a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3e21a4:
    // 0x3e21a4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x3e21a4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_3e21a8:
    // 0x3e21a8: 0x10000002  b           . + 4 + (0x2 << 2)
label_3e21ac:
    if (ctx->pc == 0x3E21ACu) {
        ctx->pc = 0x3E21ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E21A8u;
        // 0x3e21ac: 0xe62000c0  swc1        $f0, 0xC0($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 192), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E21B0u;
        goto label_3e21b0;
    }
    ctx->pc = 0x3E21A8u;
    {
        const bool branch_taken_0x3e21a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E21ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E21A8u;
        // 0x3e21ac: 0xe62000c0  swc1        $f0, 0xC0($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 192), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e21a8) {
            ctx->pc = 0x3E21B4u;
            goto label_3e21b4;
        }
    }
    ctx->pc = 0x3E21B0u;
label_3e21b0:
    // 0x3e21b0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3e21b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3e21b4:
    // 0x3e21b4: 0x7bb00430  lq          $s0, 0x430($sp)
    ctx->pc = 0x3e21b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1072)));
label_3e21b8:
    // 0x3e21b8: 0x7bb10420  lq          $s1, 0x420($sp)
    ctx->pc = 0x3e21b8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 1056)));
label_3e21bc:
    // 0x3e21bc: 0xdfbf0410  ld          $ra, 0x410($sp)
    ctx->pc = 0x3e21bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 1040)));
label_3e21c0:
    // 0x3e21c0: 0x3e00008  jr          $ra
label_3e21c4:
    if (ctx->pc == 0x3E21C4u) {
        ctx->pc = 0x3E21C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E21C0u;
        // 0x3e21c4: 0x27bd0440  addiu       $sp, $sp, 0x440 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1088));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E21C8u;
        goto label_fallthrough_0x3e21c0;
    }
    ctx->pc = 0x3E21C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E21C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E21C0u;
        // 0x3e21c4: 0x27bd0440  addiu       $sp, $sp, 0x440 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1088));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E21C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3e21c0:
    ctx->pc = 0x3E21C8u;
}
