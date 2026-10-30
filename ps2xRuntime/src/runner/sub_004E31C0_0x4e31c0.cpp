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

// Function: sub_004E31C0
// Address: 0x4e31c0 - 0x4e32d8
void sub_004E31C0_0x4e31c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E31C0_0x4e31c0");
#endif

    switch (ctx->pc) {
        case 0x4e31c0u: goto label_4e31c0;
        case 0x4e31c4u: goto label_4e31c4;
        case 0x4e31c8u: goto label_4e31c8;
        case 0x4e31ccu: goto label_4e31cc;
        case 0x4e31d0u: goto label_4e31d0;
        case 0x4e31d4u: goto label_4e31d4;
        case 0x4e31d8u: goto label_4e31d8;
        case 0x4e31dcu: goto label_4e31dc;
        case 0x4e31e0u: goto label_4e31e0;
        case 0x4e31e4u: goto label_4e31e4;
        case 0x4e31e8u: goto label_4e31e8;
        case 0x4e31ecu: goto label_4e31ec;
        case 0x4e31f0u: goto label_4e31f0;
        case 0x4e31f4u: goto label_4e31f4;
        case 0x4e31f8u: goto label_4e31f8;
        case 0x4e31fcu: goto label_4e31fc;
        case 0x4e3200u: goto label_4e3200;
        case 0x4e3204u: goto label_4e3204;
        case 0x4e3208u: goto label_4e3208;
        case 0x4e320cu: goto label_4e320c;
        case 0x4e3210u: goto label_4e3210;
        case 0x4e3214u: goto label_4e3214;
        case 0x4e3218u: goto label_4e3218;
        case 0x4e321cu: goto label_4e321c;
        case 0x4e3220u: goto label_4e3220;
        case 0x4e3224u: goto label_4e3224;
        case 0x4e3228u: goto label_4e3228;
        case 0x4e322cu: goto label_4e322c;
        case 0x4e3230u: goto label_4e3230;
        case 0x4e3234u: goto label_4e3234;
        case 0x4e3238u: goto label_4e3238;
        case 0x4e323cu: goto label_4e323c;
        case 0x4e3240u: goto label_4e3240;
        case 0x4e3244u: goto label_4e3244;
        case 0x4e3248u: goto label_4e3248;
        case 0x4e324cu: goto label_4e324c;
        case 0x4e3250u: goto label_4e3250;
        case 0x4e3254u: goto label_4e3254;
        case 0x4e3258u: goto label_4e3258;
        case 0x4e325cu: goto label_4e325c;
        case 0x4e3260u: goto label_4e3260;
        case 0x4e3264u: goto label_4e3264;
        case 0x4e3268u: goto label_4e3268;
        case 0x4e326cu: goto label_4e326c;
        case 0x4e3270u: goto label_4e3270;
        case 0x4e3274u: goto label_4e3274;
        case 0x4e3278u: goto label_4e3278;
        case 0x4e327cu: goto label_4e327c;
        case 0x4e3280u: goto label_4e3280;
        case 0x4e3284u: goto label_4e3284;
        case 0x4e3288u: goto label_4e3288;
        case 0x4e328cu: goto label_4e328c;
        case 0x4e3290u: goto label_4e3290;
        case 0x4e3294u: goto label_4e3294;
        case 0x4e3298u: goto label_4e3298;
        case 0x4e329cu: goto label_4e329c;
        case 0x4e32a0u: goto label_4e32a0;
        case 0x4e32a4u: goto label_4e32a4;
        case 0x4e32a8u: goto label_4e32a8;
        case 0x4e32acu: goto label_4e32ac;
        case 0x4e32b0u: goto label_4e32b0;
        case 0x4e32b4u: goto label_4e32b4;
        case 0x4e32b8u: goto label_4e32b8;
        case 0x4e32bcu: goto label_4e32bc;
        case 0x4e32c0u: goto label_4e32c0;
        case 0x4e32c4u: goto label_4e32c4;
        case 0x4e32c8u: goto label_4e32c8;
        case 0x4e32ccu: goto label_4e32cc;
        case 0x4e32d0u: goto label_4e32d0;
        case 0x4e32d4u: goto label_4e32d4;
        default: break;
    }

    ctx->pc = 0x4e31c0u;

label_4e31c0:
    // 0x4e31c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4e31c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_4e31c4:
    // 0x4e31c4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x4e31c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_4e31c8:
    // 0x4e31c8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4e31c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_4e31cc:
    // 0x4e31cc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4e31ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4e31d0:
    // 0x4e31d0: 0x68a20007  ldl         $v0, 0x7($a1)
    ctx->pc = 0x4e31d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_4e31d4:
    // 0x4e31d4: 0x6ca20000  ldr         $v0, 0x0($a1)
    ctx->pc = 0x4e31d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_4e31d8:
    // 0x4e31d8: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x4e31d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_4e31dc:
    // 0x4e31dc: 0xb3a20007  sdl         $v0, 0x7($sp)
    ctx->pc = 0x4e31dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_4e31e0:
    // 0x4e31e0: 0xb7a20000  sdr         $v0, 0x0($sp)
    ctx->pc = 0x4e31e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_4e31e4:
    // 0x4e31e4: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x4e31e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
label_4e31e8:
    // 0x4e31e8: 0x8e020028  lw          $v0, 0x28($s0)
    ctx->pc = 0x4e31e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_4e31ec:
    // 0x4e31ec: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x4e31ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_4e31f0:
    // 0x4e31f0: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x4e31f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_4e31f4:
    // 0x4e31f4: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x4e31f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_4e31f8:
    // 0x4e31f8: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x4e31f8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
label_4e31fc:
    // 0x4e31fc: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x4e31fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_4e3200:
    // 0x4e3200: 0x2c630002  sltiu       $v1, $v1, 0x2
    ctx->pc = 0x4e3200u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_4e3204:
    // 0x4e3204: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_4e3208:
    if (ctx->pc == 0x4E3208u) {
        ctx->pc = 0x4E3208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E3204u;
        // 0x4e3208: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E320Cu;
        goto label_4e320c;
    }
    ctx->pc = 0x4E3204u;
    {
        const bool branch_taken_0x4e3204 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E3208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E3204u;
        // 0x4e3208: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e3204) {
            ctx->pc = 0x4E3218u;
            goto label_4e3218;
        }
    }
    ctx->pc = 0x4E320Cu;
label_4e320c:
    // 0x4e320c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x4e320cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4e3210:
    // 0x4e3210: 0xc138be8  jal         func_4E2FA0
label_4e3214:
    if (ctx->pc == 0x4E3214u) {
        ctx->pc = 0x4E3214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E3210u;
        // 0x4e3214: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E3218u;
        goto label_4e3218;
    }
    ctx->pc = 0x4E3210u;
    SET_GPR_U32(ctx, 31, 0x4E3218u);
    ctx->pc = 0x4E3214u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E3210u;
    // 0x4e3214: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E2FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E2FA0u, 0x4E3210u, 0x4E3218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E3218u;
label_4e3218:
    // 0x4e3218: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x4e3218u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_4e321c:
    // 0x4e321c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4e321cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4e3220:
    // 0x4e3220: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
label_4e3224:
    if (ctx->pc == 0x4E3224u) {
        ctx->pc = 0x4E3224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E3220u;
        // 0x4e3224: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E3228u;
        goto label_4e3228;
    }
    ctx->pc = 0x4E3220u;
    {
        const bool branch_taken_0x4e3220 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e3220) {
            ctx->pc = 0x4E3224u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E3220u;
            // 0x4e3224: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E3228u;
            goto label_4e3228;
        }
    }
    ctx->pc = 0x4E3228u;
label_4e3228:
    // 0x4e3228: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x4e3228u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_4e322c:
    // 0x4e322c: 0x8c6bb9c0  lw          $t3, -0x4640($v1)
    ctx->pc = 0x4e322cu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294949312)));
label_4e3230:
    // 0x4e3230: 0x3c080055  lui         $t0, 0x55
    ctx->pc = 0x4e3230u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)85 << 16));
label_4e3234:
    // 0x4e3234: 0x3c0a0055  lui         $t2, 0x55
    ctx->pc = 0x4e3234u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)85 << 16));
label_4e3238:
    // 0x4e3238: 0x24a52c08  addiu       $a1, $a1, 0x2C08
    ctx->pc = 0x4e3238u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11272));
label_4e323c:
    // 0x4e323c: 0x8d630000  lw          $v1, 0x0($t3)
    ctx->pc = 0x4e323cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
label_4e3240:
    // 0x4e3240: 0x25082c10  addiu       $t0, $t0, 0x2C10
    ctx->pc = 0x4e3240u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 11280));
label_4e3244:
    // 0x4e3244: 0x254a2c38  addiu       $t2, $t2, 0x2C38
    ctx->pc = 0x4e3244u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 11320));
label_4e3248:
    // 0x4e3248: 0x240601f8  addiu       $a2, $zero, 0x1F8
    ctx->pc = 0x4e3248u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 504));
label_4e324c:
    // 0x4e324c: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x4e324cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_4e3250:
    // 0x4e3250: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x4e3250u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_4e3254:
    // 0x4e3254: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x4e3254u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_4e3258:
    // 0x4e3258: 0x24090042  addiu       $t1, $zero, 0x42
    ctx->pc = 0x4e3258u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
label_4e325c:
    // 0x4e325c: 0x1642021  addu        $a0, $t3, $a0
    ctx->pc = 0x4e325cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 4)));
label_4e3260:
    // 0x4e3260: 0x40f809  jalr        $v0
label_4e3264:
    if (ctx->pc == 0x4E3264u) {
        ctx->pc = 0x4E3264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E3260u;
        // 0x4e3264: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E3268u;
        goto label_4e3268;
    }
    ctx->pc = 0x4E3260u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4E3268u);
        ctx->pc = 0x4E3264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E3260u;
        // 0x4e3264: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E3260u, 0x4E3268u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4E3268u;
label_4e3268:
    // 0x4e3268: 0x8e030028  lw          $v1, 0x28($s0)
    ctx->pc = 0x4e3268u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_4e326c:
    // 0x4e326c: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x4e326cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_4e3270:
    // 0x4e3270: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x4e3270u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_4e3274:
    // 0x4e3274: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
label_4e3278:
    if (ctx->pc == 0x4E3278u) {
        ctx->pc = 0x4E3278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E3274u;
        // 0x4e3278: 0x8e050028  lw          $a1, 0x28($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E327Cu;
        goto label_4e327c;
    }
    ctx->pc = 0x4E3274u;
    {
        const bool branch_taken_0x4e3274 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e3274) {
            ctx->pc = 0x4E3278u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E3274u;
            // 0x4e3278: 0x8e050028  lw          $a1, 0x28($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E3298u;
            goto label_4e3298;
        }
    }
    ctx->pc = 0x4E327Cu;
label_4e327c:
    // 0x4e327c: 0x6ba30007  ldl         $v1, 0x7($sp)
    ctx->pc = 0x4e327cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_4e3280:
    // 0x4e3280: 0x6fa30000  ldr         $v1, 0x0($sp)
    ctx->pc = 0x4e3280u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_4e3284:
    // 0x4e3284: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x4e3284u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_4e3288:
    // 0x4e3288: 0xb0430007  sdl         $v1, 0x7($v0)
    ctx->pc = 0x4e3288u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_4e328c:
    // 0x4e328c: 0xb4430000  sdr         $v1, 0x0($v0)
    ctx->pc = 0x4e328cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_4e3290:
    // 0x4e3290: 0xac440008  sw          $a0, 0x8($v0)
    ctx->pc = 0x4e3290u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 4));
label_4e3294:
    // 0x4e3294: 0x8e050028  lw          $a1, 0x28($s0)
    ctx->pc = 0x4e3294u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_4e3298:
    // 0x4e3298: 0x2604001c  addiu       $a0, $s0, 0x1C
    ctx->pc = 0x4e3298u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
label_4e329c:
    // 0x4e329c: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x4e329cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_4e32a0:
    // 0x4e32a0: 0x24a30004  addiu       $v1, $a1, 0x4
    ctx->pc = 0x4e32a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
label_4e32a4:
    // 0x4e32a4: 0xac83000c  sw          $v1, 0xC($a0)
    ctx->pc = 0x4e32a4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
label_4e32a8:
    // 0x4e32a8: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x4e32a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_4e32ac:
    // 0x4e32ac: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x4e32acu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_4e32b0:
    // 0x4e32b0: 0x50c00001  beql        $a2, $zero, . + 4 + (0x1 << 2)
label_4e32b4:
    if (ctx->pc == 0x4E32B4u) {
        ctx->pc = 0x4E32B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E32B0u;
        // 0x4e32b4: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E32B8u;
        goto label_4e32b8;
    }
    ctx->pc = 0x4E32B0u;
    {
        const bool branch_taken_0x4e32b0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e32b0) {
            ctx->pc = 0x4E32B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E32B0u;
            // 0x4e32b4: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E32B8u;
            goto label_4e32b8;
        }
    }
    ctx->pc = 0x4E32B8u;
label_4e32b8:
    // 0x4e32b8: 0x244201f8  addiu       $v0, $v0, 0x1F8
    ctx->pc = 0x4e32b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 504));
label_4e32bc:
    // 0x4e32bc: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x4e32bcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
label_4e32c0:
    // 0x4e32c0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4e32c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4e32c4:
    // 0x4e32c4: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x4e32c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_4e32c8:
    // 0x4e32c8: 0xae03001c  sw          $v1, 0x1C($s0)
    ctx->pc = 0x4e32c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 3));
label_4e32cc:
    // 0x4e32cc: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x4e32ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4e32d0:
    // 0x4e32d0: 0x3e00008  jr          $ra
label_4e32d4:
    if (ctx->pc == 0x4E32D4u) {
        ctx->pc = 0x4E32D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E32D0u;
        // 0x4e32d4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E32D8u;
        goto label_fallthrough_0x4e32d0;
    }
    ctx->pc = 0x4E32D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4E32D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E32D0u;
        // 0x4e32d4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E32D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x4e32d0:
    ctx->pc = 0x4E32D8u;
}
