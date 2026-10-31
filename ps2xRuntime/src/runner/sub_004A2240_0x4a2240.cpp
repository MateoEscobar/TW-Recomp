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

// Function: sub_004A2240
// Address: 0x4a2240 - 0x4a2438
void sub_004A2240_0x4a2240(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A2240_0x4a2240");
#endif

    switch (ctx->pc) {
        case 0x4a22c0u: goto label_4a22c0;
        case 0x4a231cu: goto label_4a231c;
        case 0x4a23f4u: goto label_4a23f4;
        default: break;
    }

    ctx->pc = 0x4a2240u;

    // 0x4a2240: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x4a2240u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x4a2244: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x4a2244u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
    // 0x4a2248: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x4a2248u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x4a224c: 0x7fb70040  sq          $s7, 0x40($sp)
    ctx->pc = 0x4a224cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 23));
    // 0x4a2250: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x4a2250u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a2254: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x4a2254u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
    // 0x4a2258: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x4a2258u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a225c: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x4a225cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
    // 0x4a2260: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x4a2260u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
    // 0x4a2264: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x4a2264u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
    // 0x4a2268: 0x7fb60050  sq          $s6, 0x50($sp)
    ctx->pc = 0x4a2268u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 22));
    // 0x4a226c: 0x7fbe0030  sq          $fp, 0x30($sp)
    ctx->pc = 0x4a226cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 30));
    // 0x4a2270: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4a2270u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x4a2274: 0x8f848a20  lw          $a0, -0x75E0($gp)
    ctx->pc = 0x4a2274u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937120)));
    // 0x4a2278: 0x8ea20014  lw          $v0, 0x14($s5)
    ctx->pc = 0x4a2278u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 20)));
    // 0x4a227c: 0x2a48821  addu        $s1, $s5, $a0
    ctx->pc = 0x4a227cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
    // 0x4a2280: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x4a2280u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x4a2284: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x4a2284u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a2288: 0x8ea2000c  lw          $v0, 0xC($s5)
    ctx->pc = 0x4a2288u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
    // 0x4a228c: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x4a228cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a2290: 0x8ea30018  lw          $v1, 0x18($s5)
    ctx->pc = 0x4a2290u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 24)));
    // 0x4a2294: 0x451018  mult        $v0, $v0, $a1
    ctx->pc = 0x4a2294u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x4a2298: 0x8eb00004  lw          $s0, 0x4($s5)
    ctx->pc = 0x4a2298u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x4a229c: 0x210c3  sra         $v0, $v0, 3
    ctx->pc = 0x4a229cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
    // 0x4a22a0: 0x621826  xor         $v1, $v1, $v0
    ctx->pc = 0x4a22a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 2));
    // 0x4a22a4: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x4a22a4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x4a22a8: 0x14800030  bnez        $a0, . + 4 + (0x30 << 2)
    ctx->pc = 0x4A22A8u;
    {
        const bool branch_taken_0x4a22a8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A22ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A22A8u;
        // 0x4a22ac: 0xafa30004  sw          $v1, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a22a8) {
            ctx->pc = 0x4A236Cu;
            goto label_4a236c;
        }
    }
    ctx->pc = 0x4A22B0u;
    // 0x4a22b0: 0x3c1effff  lui         $fp, 0xFFFF
    ctx->pc = 0x4a22b0u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)65535 << 16));
    // 0x4a22b4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x4a22b4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a22b8: 0x37defff0  ori         $fp, $fp, 0xFFF0
    ctx->pc = 0x4a22b8u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 30) | (uint64_t)(uint16_t)65520);
    // 0x4a22bc: 0x2632003c  addiu       $s2, $s1, 0x3C
    ctx->pc = 0x4a22bcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 60));
label_4a22c0:
    // 0x4a22c0: 0x8ea3000c  lw          $v1, 0xC($s5)
    ctx->pc = 0x4a22c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
    // 0x4a22c4: 0x3205000f  andi        $a1, $s0, 0xF
    ctx->pc = 0x4a22c4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)15);
    // 0x4a22c8: 0x8ea40010  lw          $a0, 0x10($s5)
    ctx->pc = 0x4a22c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
    // 0x4a22cc: 0x8ea20018  lw          $v0, 0x18($s5)
    ctx->pc = 0x4a22ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 24)));
    // 0x4a22d0: 0x2e31807  srav        $v1, $v1, $s7
    ctx->pc = 0x4a22d0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), GPR_U32(ctx, 23) & 0x1F));
    // 0x4a22d4: 0x2e49807  srav        $s3, $a0, $s7
    ctx->pc = 0x4a22d4u;
    SET_GPR_S32(ctx, 19, SRA32(GPR_S32(ctx, 4), GPR_U32(ctx, 23) & 0x1F));
    // 0x4a22d8: 0x14a00017  bnez        $a1, . + 4 + (0x17 << 2)
    ctx->pc = 0x4A22D8u;
    {
        const bool branch_taken_0x4a22d8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A22DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A22D8u;
        // 0x4a22dc: 0x2e2b007  srav        $s6, $v0, $s7 (Delay Slot)
        SET_GPR_S32(ctx, 22, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 23) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a22d8) {
            ctx->pc = 0x4A2338u;
            goto label_4a2338;
        }
    }
    ctx->pc = 0x4A22E0u;
    // 0x4a22e0: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x4a22e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x4a22e4: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x4A22E4u;
    {
        const bool branch_taken_0x4a22e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A22E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A22E4u;
        // 0x4a22e8: 0x2d31018  mult        $v0, $s6, $s3 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 22) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a22e4) {
            ctx->pc = 0x4A233Cu;
            goto label_4a233c;
        }
    }
    ctx->pc = 0x4A22ECu;
    // 0x4a22ec: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x4a22ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4a22f0: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x4A22F0u;
    {
        const bool branch_taken_0x4a22f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A22F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A22F0u;
        // 0x4a22f4: 0x2634003c  addiu       $s4, $s1, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), 60));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a22f0) {
            ctx->pc = 0x4A2324u;
            goto label_4a2324;
        }
    }
    ctx->pc = 0x4A22F8u;
    // 0x4a22f8: 0x92220034  lbu         $v0, 0x34($s1)
    ctx->pc = 0x4a22f8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 52)));
    // 0x4a22fc: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x4A22FCu;
    {
        const bool branch_taken_0x4a22fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A2300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A22FCu;
        // 0x4a2300: 0x8fa70000  lw          $a3, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a22fc) {
            ctx->pc = 0x4A2330u;
            goto label_4a2330;
        }
    }
    ctx->pc = 0x4A2304u;
    // 0x4a2304: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x4a2304u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a2308: 0x7fa90010  sq          $t1, 0x10($sp)
    ctx->pc = 0x4a2308u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 9));
    // 0x4a230c: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x4a230cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a2310: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x4a2310u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a2314: 0xc1287f6  jal         func_4A1FD8
    ctx->pc = 0x4A2314u;
    SET_GPR_U32(ctx, 31, 0x4A231Cu);
    ctx->pc = 0x4A2318u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A2314u;
    // 0x4a2318: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A1FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A1FD8u, 0x4A2314u, 0x4A231Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A231Cu;
label_4a231c:
    // 0x4a231c: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x4a231cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x4a2320: 0x7ba90010  lq          $t1, 0x10($sp)
    ctx->pc = 0x4a2320u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4a2324:
    // 0x4a2324: 0x92220034  lbu         $v0, 0x34($s1)
    ctx->pc = 0x4a2324u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 52)));
    // 0x4a2328: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4A2328u;
    {
        const bool branch_taken_0x4a2328 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A232Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A2328u;
        // 0x4a232c: 0x2d31018  mult        $v0, $s6, $s3 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 22) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a2328) {
            ctx->pc = 0x4A233Cu;
            goto label_4a233c;
        }
    }
    ctx->pc = 0x4A2330u;
label_4a2330:
    // 0x4a2330: 0x2891021  addu        $v0, $s4, $t1
    ctx->pc = 0x4a2330u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 9)));
    // 0x4a2334: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x4a2334u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_4a2338:
    // 0x4a2338: 0x2d31018  mult        $v0, $s6, $s3
    ctx->pc = 0x4a2338u;
    { int64_t result = (int64_t)GPR_S32(ctx, 22) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_4a233c:
    // 0x4a233c: 0x508021  addu        $s0, $v0, $s0
    ctx->pc = 0x4a233cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x4a2340: 0x3202000f  andi        $v0, $s0, 0xF
    ctx->pc = 0x4a2340u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)15);
    // 0x4a2344: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x4A2344u;
    {
        const bool branch_taken_0x4a2344 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A2348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A2344u;
        // 0x4a2348: 0x2602000f  addiu       $v0, $s0, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a2344) {
            ctx->pc = 0x4A2350u;
            goto label_4a2350;
        }
    }
    ctx->pc = 0x4A234Cu;
    // 0x4a234c: 0x5e8024  and         $s0, $v0, $fp
    ctx->pc = 0x4a234cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & GPR_U64(ctx, 30));
label_4a2350:
    // 0x4a2350: 0x92220016  lbu         $v0, 0x16($s1)
    ctx->pc = 0x4a2350u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 22)));
    // 0x4a2354: 0x26f70001  addiu       $s7, $s7, 0x1
    ctx->pc = 0x4a2354u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
    // 0x4a2358: 0x25290004  addiu       $t1, $t1, 0x4
    ctx->pc = 0x4a2358u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
    // 0x4a235c: 0x21082  srl         $v0, $v0, 2
    ctx->pc = 0x4a235cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
    // 0x4a2360: 0x57102a  slt         $v0, $v0, $s7
    ctx->pc = 0x4a2360u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 23)) ? 1 : 0);
    // 0x4a2364: 0x1040ffd6  beqz        $v0, . + 4 + (-0x2A << 2)
    ctx->pc = 0x4A2364u;
    {
        const bool branch_taken_0x4a2364 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A2368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A2364u;
        // 0x4a2368: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a2364) {
            ctx->pc = 0x4A22C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4a22c0;
        }
    }
    ctx->pc = 0x4A236Cu;
label_4a236c:
    // 0x4a236c: 0x8e22002c  lw          $v0, 0x2C($s1)
    ctx->pc = 0x4a236cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x4a2370: 0x50400026  beql        $v0, $zero, . + 4 + (0x26 << 2)
    ctx->pc = 0x4A2370u;
    {
        const bool branch_taken_0x4a2370 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a2370) {
            ctx->pc = 0x4A2374u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A2370u;
            // 0x4a2374: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A240Cu;
            goto label_4a240c;
        }
    }
    ctx->pc = 0x4A2378u;
    // 0x4a2378: 0x8ea30014  lw          $v1, 0x14($s5)
    ctx->pc = 0x4a2378u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 20)));
    // 0x4a237c: 0x28620009  slti        $v0, $v1, 0x9
    ctx->pc = 0x4a237cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x4a2380: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x4A2380u;
    {
        const bool branch_taken_0x4a2380 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A2384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A2380u;
        // 0x4a2384: 0x2463ffff  addiu       $v1, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a2380) {
            ctx->pc = 0x4A2408u;
            goto label_4a2408;
        }
    }
    ctx->pc = 0x4A2388u;
    // 0x4a2388: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x4a2388u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
    // 0x4a238c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x4a238cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x4a2390: 0x3c040059  lui         $a0, 0x59
    ctx->pc = 0x4a2390u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)89 << 16));
    // 0x4a2394: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x4a2394u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x4a2398: 0x2484fff0  addiu       $a0, $a0, -0x10
    ctx->pc = 0x4a2398u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967280));
    // 0x4a239c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x4a239cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4a23a0: 0x8e25000c  lw          $a1, 0xC($s1)
    ctx->pc = 0x4a23a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x4a23a4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x4a23a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x4a23a8: 0x8c490000  lw          $t1, 0x0($v0)
    ctx->pc = 0x4a23a8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4a23ac: 0x52cc2  srl         $a1, $a1, 19
    ctx->pc = 0x4a23acu;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 19));
    // 0x4a23b0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x4a23b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4a23b4: 0x30a5000f  andi        $a1, $a1, 0xF
    ctx->pc = 0x4a23b4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)15);
    // 0x4a23b8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x4a23b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x4a23bc: 0x10a30005  beq         $a1, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x4A23BCu;
    {
        const bool branch_taken_0x4a23bc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x4A23C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A23BCu;
        // 0x4a23c0: 0x24070010  addiu       $a3, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a23bc) {
            ctx->pc = 0x4A23D4u;
            goto label_4a23d4;
        }
    }
    ctx->pc = 0x4A23C4u;
    // 0x4a23c4: 0x2ca20003  sltiu       $v0, $a1, 0x3
    ctx->pc = 0x4a23c4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x4a23c8: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x4A23C8u;
    {
        const bool branch_taken_0x4a23c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A23CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A23C8u;
        // 0x4a23cc: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a23c8) {
            ctx->pc = 0x4A23D4u;
            goto label_4a23d4;
        }
    }
    ctx->pc = 0x4A23D0u;
    // 0x4a23d0: 0x45380a  movz        $a3, $v0, $a1
    ctx->pc = 0x4a23d0u;
    if (GPR_U64(ctx, 5) == 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 2));
label_4a23d4:
    // 0x4a23d4: 0x8e220038  lw          $v0, 0x38($s1)
    ctx->pc = 0x4a23d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
    // 0x4a23d8: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x4A23D8u;
    {
        const bool branch_taken_0x4a23d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A23DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A23D8u;
        // 0x4a23dc: 0x92220034  lbu         $v0, 0x34($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 52)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a23d8) {
            ctx->pc = 0x4A23FCu;
            goto label_4a23fc;
        }
    }
    ctx->pc = 0x4A23E0u;
    // 0x4a23e0: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x4A23E0u;
    {
        const bool branch_taken_0x4a23e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A23E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A23E0u;
        // 0x4a23e4: 0x40402d  daddu       $t0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a23e0) {
            ctx->pc = 0x4A2404u;
            goto label_4a2404;
        }
    }
    ctx->pc = 0x4A23E8u;
    // 0x4a23e8: 0x8ea60008  lw          $a2, 0x8($s5)
    ctx->pc = 0x4a23e8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x4a23ec: 0xc1287f6  jal         func_4A1FD8
    ctx->pc = 0x4A23ECu;
    SET_GPR_U32(ctx, 31, 0x4A23F4u);
    ctx->pc = 0x4A23F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A23ECu;
    // 0x4a23f0: 0x120282d  daddu       $a1, $t1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A1FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A1FD8u, 0x4A23ECu, 0x4A23F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A23F4u;
label_4a23f4:
    // 0x4a23f4: 0xae220038  sw          $v0, 0x38($s1)
    ctx->pc = 0x4a23f4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 2));
    // 0x4a23f8: 0x92220034  lbu         $v0, 0x34($s1)
    ctx->pc = 0x4a23f8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 52)));
label_4a23fc:
    // 0x4a23fc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4A23FCu;
    {
        const bool branch_taken_0x4a23fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A2400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A23FCu;
        // 0x4a2400: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a23fc) {
            ctx->pc = 0x4A240Cu;
            goto label_4a240c;
        }
    }
    ctx->pc = 0x4A2404u;
label_4a2404:
    // 0x4a2404: 0xae200038  sw          $zero, 0x38($s1)
    ctx->pc = 0x4a2404u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 0));
label_4a2408:
    // 0x4a2408: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x4a2408u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_4a240c:
    // 0x4a240c: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x4a240cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x4a2410: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x4a2410u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x4a2414: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x4a2414u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x4a2418: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x4a2418u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x4a241c: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x4a241cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x4a2420: 0x7bb60050  lq          $s6, 0x50($sp)
    ctx->pc = 0x4a2420u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x4a2424: 0x7bb70040  lq          $s7, 0x40($sp)
    ctx->pc = 0x4a2424u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4a2428: 0x7bbe0030  lq          $fp, 0x30($sp)
    ctx->pc = 0x4a2428u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4a242c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4a242cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4a2430: 0x3e00008  jr          $ra
    ctx->pc = 0x4A2430u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A2434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A2430u;
        // 0x4a2434: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A2430u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4A2438u;
}
