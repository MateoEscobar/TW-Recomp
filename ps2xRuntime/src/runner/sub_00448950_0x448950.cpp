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

// Function: sub_00448950
// Address: 0x448950 - 0x448dd8
void sub_00448950_0x448950(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00448950_0x448950");
#endif

    ctx->pc = 0x448950u;

    // 0x448950: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x448950u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x448954: 0x80782d  daddu       $t7, $a0, $zero
    ctx->pc = 0x448954u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x448958: 0xffbe00a0  sd          $fp, 0xA0($sp)
    ctx->pc = 0x448958u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 30));
    // 0x44895c: 0x25e306cc  addiu       $v1, $t7, 0x6CC
    ctx->pc = 0x44895cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 15), 1740));
    // 0x448960: 0xffb50070  sd          $s5, 0x70($sp)
    ctx->pc = 0x448960u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 21));
    // 0x448964: 0x24020140  addiu       $v0, $zero, 0x140
    ctx->pc = 0x448964u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    // 0x448968: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x448968u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x44896c: 0x120702d  daddu       $t6, $t1, $zero
    ctx->pc = 0x44896cu;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x448970: 0xffb10030  sd          $s1, 0x30($sp)
    ctx->pc = 0x448970u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x448974: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x448974u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x448978: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x448978u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x44897c: 0x160882d  daddu       $s1, $t3, $zero
    ctx->pc = 0x44897cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x448980: 0xffb70090  sd          $s7, 0x90($sp)
    ctx->pc = 0x448980u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 23));
    // 0x448984: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x448984u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x448988: 0xffb60080  sd          $s6, 0x80($sp)
    ctx->pc = 0x448988u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 22));
    // 0x44898c: 0xffb40060  sd          $s4, 0x60($sp)
    ctx->pc = 0x44898cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    // 0x448990: 0xffb30050  sd          $s3, 0x50($sp)
    ctx->pc = 0x448990u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 19));
    // 0x448994: 0x8df30820  lw          $s3, 0x820($t7)
    ctx->pc = 0x448994u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 2080)));
    // 0x448998: 0xafa3000c  sw          $v1, 0xC($sp)
    ctx->pc = 0x448998u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 3));
    // 0x44899c: 0x2621018  mult        $v0, $s3, $v0
    ctx->pc = 0x44899cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x4489a0: 0x8fbe00b0  lw          $fp, 0xB0($sp)
    ctx->pc = 0x4489a0u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x4489a4: 0x8de40830  lw          $a0, 0x830($t7)
    ctx->pc = 0x4489a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 2096)));
    // 0x4489a8: 0xafaa0004  sw          $t2, 0x4($sp)
    ctx->pc = 0x4489a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 10));
    // 0x4489ac: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x4489acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x4489b0: 0x1e5043  sra         $t2, $fp, 1
    ctx->pc = 0x4489b0u;
    SET_GPR_S32(ctx, 10, SRA32(GPR_S32(ctx, 30), 1));
    // 0x4489b4: 0xafa70000  sw          $a3, 0x0($sp)
    ctx->pc = 0x4489b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 7));
    // 0x4489b8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4489b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4489bc: 0x2404001c  addiu       $a0, $zero, 0x1C
    ctx->pc = 0x4489bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x4489c0: 0x244205a0  addiu       $v0, $v0, 0x5A0
    ctx->pc = 0x4489c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1440));
    // 0x4489c4: 0x8c790000  lw          $t9, 0x0($v1)
    ctx->pc = 0x4489c4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4489c8: 0x1e21021  addu        $v0, $t7, $v0
    ctx->pc = 0x4489c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 2)));
    // 0x4489cc: 0x8fa60004  lw          $a2, 0x4($sp)
    ctx->pc = 0x4489ccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x4489d0: 0x3242018  mult        $a0, $t9, $a0
    ctx->pc = 0x4489d0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 25) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x4489d4: 0x8fb800c0  lw          $t8, 0xC0($sp)
    ctx->pc = 0x4489d4u;
    SET_GPR_S32(ctx, 24, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x4489d8: 0x1465021  addu        $t2, $t2, $a2
    ctx->pc = 0x4489d8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 6)));
    // 0x4489dc: 0x8fb500b8  lw          $s5, 0xB8($sp)
    ctx->pc = 0x4489dcu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x4489e0: 0x248300b8  addiu       $v1, $a0, 0xB8
    ctx->pc = 0x4489e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 184));
    // 0x4489e4: 0x24840048  addiu       $a0, $a0, 0x48
    ctx->pc = 0x4489e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 72));
    // 0x4489e8: 0x436821  addu        $t5, $v0, $v1
    ctx->pc = 0x4489e8u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x4489ec: 0x13000005  beqz        $t8, . + 4 + (0x5 << 2)
    ctx->pc = 0x4489ECu;
    {
        const bool branch_taken_0x4489ec = (GPR_U64(ctx, 24) == GPR_U64(ctx, 0));
        ctx->pc = 0x4489F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4489ECu;
        // 0x4489f0: 0x446021  addu        $t4, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4489ec) {
            ctx->pc = 0x448A04u;
            goto label_448a04;
        }
    }
    ctx->pc = 0x4489F4u;
    // 0x4489f4: 0x151043  sra         $v0, $s5, 1
    ctx->pc = 0x4489f4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 21), 1));
    // 0x4489f8: 0x2121821  addu        $v1, $s0, $s2
    ctx->pc = 0x4489f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
    // 0x4489fc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x4489FCu;
    {
        const bool branch_taken_0x4489fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x448A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4489FCu;
        // 0x448a00: 0x21040  sll         $v0, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4489fc) {
            ctx->pc = 0x448A0Cu;
            goto label_448a0c;
        }
    }
    ctx->pc = 0x448A04u;
label_448a04:
    // 0x448a04: 0x151043  sra         $v0, $s5, 1
    ctx->pc = 0x448a04u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 21), 1));
    // 0x448a08: 0x2121821  addu        $v1, $s0, $s2
    ctx->pc = 0x448a08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
label_448a0c:
    // 0x448a0c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x448a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x448a10: 0x435821  addu        $t3, $v0, $v1
    ctx->pc = 0x448a10u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x448a14: 0x8ca70010  lw          $a3, 0x10($a1)
    ctx->pc = 0x448a14u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x448a18: 0xab103  sra         $s6, $t2, 4
    ctx->pc = 0x448a18u;
    SET_GPR_S32(ctx, 22, SRA32(GPR_S32(ctx, 10), 4));
    // 0x448a1c: 0x24020140  addiu       $v0, $zero, 0x140
    ctx->pc = 0x448a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    // 0x448a20: 0x8ca90000  lw          $t1, 0x0($a1)
    ctx->pc = 0x448a20u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x448a24: 0x2c71818  mult        $v1, $s6, $a3
    ctx->pc = 0x448a24u;
    { int64_t result = (int64_t)GPR_S32(ctx, 22) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x448a28: 0x72621018  mult1       $v0, $s3, $v0
    ctx->pc = 0x448a28u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 2); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x448a2c: 0xbb903  sra         $s7, $t3, 4
    ctx->pc = 0x448a2cu;
    SET_GPR_S32(ctx, 23, SRA32(GPR_S32(ctx, 11), 4));
    // 0x448a30: 0x194080  sll         $t0, $t9, 2
    ctx->pc = 0x448a30u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 25), 2));
    // 0x448a34: 0xafa80010  sw          $t0, 0x10($sp)
    ctx->pc = 0x448a34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 8));
    // 0x448a38: 0x24060180  addiu       $a2, $zero, 0x180
    ctx->pc = 0x448a38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 384));
    // 0x448a3c: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x448a3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x448a40: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x448a40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x448a44: 0x771821  addu        $v1, $v1, $s7
    ctx->pc = 0x448a44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 23)));
    // 0x448a48: 0x664018  mult        $t0, $v1, $a2
    ctx->pc = 0x448a48u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x448a4c: 0xb02021  addu        $a0, $a1, $s0
    ctx->pc = 0x448a4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    // 0x448a50: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x448a50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x448a54: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x448a54u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x448a58: 0x663818  mult        $a3, $v1, $a2
    ctx->pc = 0x448a58u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x448a5c: 0x162900  sll         $a1, $s6, 4
    ctx->pc = 0x448a5cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 22), 4));
    // 0x448a60: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x448a60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x448a64: 0x1452823  subu        $a1, $t2, $a1
    ctx->pc = 0x448a64u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 5)));
    // 0x448a68: 0x1289821  addu        $s3, $t1, $t0
    ctx->pc = 0x448a68u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 8)));
    // 0x448a6c: 0x32aa0001  andi        $t2, $s5, 0x1
    ctx->pc = 0x448a6cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)1);
    // 0x448a70: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x448a70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x448a74: 0xad850004  sw          $a1, 0x4($t4)
    ctx->pc = 0x448a74u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 4), GPR_U32(ctx, 5));
    // 0x448a78: 0xe9a021  addu        $s4, $a3, $t1
    ctx->pc = 0x448a78u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
    // 0x448a7c: 0x171900  sll         $v1, $s7, 4
    ctx->pc = 0x448a7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 23), 4));
    // 0x448a80: 0x1e23821  addu        $a3, $t7, $v0
    ctx->pc = 0x448a80u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 2)));
    // 0x448a84: 0x1635823  subu        $t3, $t3, $v1
    ctx->pc = 0x448a84u;
    SET_GPR_S32(ctx, 11, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 3)));
    // 0x448a88: 0xe0102d  daddu       $v0, $a3, $zero
    ctx->pc = 0x448a88u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x448a8c: 0xacf305a8  sw          $s3, 0x5A8($a3)
    ctx->pc = 0x448a8cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 1448), GPR_U32(ctx, 19));
    // 0x448a90: 0x33c70001  andi        $a3, $fp, 0x1
    ctx->pc = 0x448a90u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)1);
    // 0x448a94: 0xac5405b8  sw          $s4, 0x5B8($v0)
    ctx->pc = 0x448a94u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1464), GPR_U32(ctx, 20));
    // 0x448a98: 0x1140000f  beqz        $t2, . + 4 + (0xF << 2)
    ctx->pc = 0x448A98u;
    {
        const bool branch_taken_0x448a98 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x448A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x448A98u;
        // 0x448a9c: 0xad840000  sw          $a0, 0x0($t4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x448a98) {
            ctx->pc = 0x448AD8u;
            goto label_448ad8;
        }
    }
    ctx->pc = 0x448AA0u;
    // 0x448aa0: 0x30e1004  sllv        $v0, $t6, $t8
    ctx->pc = 0x448aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 14), GPR_U32(ctx, 24) & 0x1F));
    // 0x448aa4: 0x1621021  addu        $v0, $t3, $v0
    ctx->pc = 0x448aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
    // 0x448aa8: 0x28420010  slti        $v0, $v0, 0x10
    ctx->pc = 0x448aa8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x448aac: 0x54400017  bnel        $v0, $zero, . + 4 + (0x17 << 2)
    ctx->pc = 0x448AACu;
    {
        const bool branch_taken_0x448aac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x448aac) {
            ctx->pc = 0x448AB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x448AACu;
            // 0x448ab0: 0xad8e0008  sw          $t6, 0x8($t4) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 12), 8), GPR_U32(ctx, 14));
            ctx->in_delay_slot = false;
            ctx->pc = 0x448B0Cu;
            goto label_448b0c;
        }
    }
    ctx->pc = 0x448AB4u;
    // 0x448ab4: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x448ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x448ab8: 0x30b1807  srav        $v1, $t3, $t8
    ctx->pc = 0x448ab8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 11), GPR_U32(ctx, 24) & 0x1F));
    // 0x448abc: 0x3021007  srav        $v0, $v0, $t8
    ctx->pc = 0x448abcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 24) & 0x1F));
    // 0x448ac0: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x448ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x448ac4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x448ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x448ac8: 0x1c21823  subu        $v1, $t6, $v0
    ctx->pc = 0x448ac8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 14), GPR_U32(ctx, 2)));
    // 0x448acc: 0xad820008  sw          $v0, 0x8($t4)
    ctx->pc = 0x448accu;
    WRITE32(ADD32(GPR_U32(ctx, 12), 8), GPR_U32(ctx, 2));
    // 0x448ad0: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x448AD0u;
    {
        const bool branch_taken_0x448ad0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x448AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x448AD0u;
        // 0x448ad4: 0xad83000c  sw          $v1, 0xC($t4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 12), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x448ad0) {
            ctx->pc = 0x448B10u;
            goto label_448b10;
        }
    }
    ctx->pc = 0x448AD8u;
label_448ad8:
    // 0x448ad8: 0x30e1004  sllv        $v0, $t6, $t8
    ctx->pc = 0x448ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 14), GPR_U32(ctx, 24) & 0x1F));
    // 0x448adc: 0x1621021  addu        $v0, $t3, $v0
    ctx->pc = 0x448adcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
    // 0x448ae0: 0x28420011  slti        $v0, $v0, 0x11
    ctx->pc = 0x448ae0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x448ae4: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x448AE4u;
    {
        const bool branch_taken_0x448ae4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x448ae4) {
            ctx->pc = 0x448AE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x448AE4u;
            // 0x448ae8: 0xad8e0008  sw          $t6, 0x8($t4) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 12), 8), GPR_U32(ctx, 14));
            ctx->in_delay_slot = false;
            ctx->pc = 0x448B0Cu;
            goto label_448b0c;
        }
    }
    ctx->pc = 0x448AECu;
    // 0x448aec: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x448aecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x448af0: 0x30b1807  srav        $v1, $t3, $t8
    ctx->pc = 0x448af0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 11), GPR_U32(ctx, 24) & 0x1F));
    // 0x448af4: 0x3021007  srav        $v0, $v0, $t8
    ctx->pc = 0x448af4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 24) & 0x1F));
    // 0x448af8: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x448af8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x448afc: 0x1c22023  subu        $a0, $t6, $v0
    ctx->pc = 0x448afcu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 14), GPR_U32(ctx, 2)));
    // 0x448b00: 0xad820008  sw          $v0, 0x8($t4)
    ctx->pc = 0x448b00u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 8), GPR_U32(ctx, 2));
    // 0x448b04: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x448B04u;
    {
        const bool branch_taken_0x448b04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x448B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x448B04u;
        // 0x448b08: 0xad84000c  sw          $a0, 0xC($t4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 12), 12), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x448b04) {
            ctx->pc = 0x448B10u;
            goto label_448b10;
        }
    }
    ctx->pc = 0x448B0Cu;
label_448b0c:
    // 0x448b0c: 0xad80000c  sw          $zero, 0xC($t4)
    ctx->pc = 0x448b0cu;
    WRITE32(ADD32(GPR_U32(ctx, 12), 12), GPR_U32(ctx, 0));
label_448b10:
    // 0x448b10: 0x8de2087c  lw          $v0, 0x87C($t7)
    ctx->pc = 0x448b10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 2172)));
    // 0x448b14: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x448B14u;
    {
        const bool branch_taken_0x448b14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x448B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x448B14u;
        // 0x448b18: 0xb1100  sll         $v0, $t3, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 11), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x448b14) {
            ctx->pc = 0x448B58u;
            goto label_448b58;
        }
    }
    ctx->pc = 0x448B1Cu;
    // 0x448b1c: 0x8de60820  lw          $a2, 0x820($t7)
    ctx->pc = 0x448b1cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 2080)));
    // 0x448b20: 0x24020140  addiu       $v0, $zero, 0x140
    ctx->pc = 0x448b20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    // 0x448b24: 0x24030600  addiu       $v1, $zero, 0x600
    ctx->pc = 0x448b24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1536));
    // 0x448b28: 0xb2900  sll         $a1, $t3, 4
    ctx->pc = 0x448b28u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 11), 4));
    // 0x448b2c: 0xc22018  mult        $a0, $a2, $v0
    ctx->pc = 0x448b2cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x448b30: 0x3231818  mult        $v1, $t9, $v1
    ctx->pc = 0x448b30u;
    { int64_t result = (int64_t)GPR_S32(ctx, 25) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x448b34: 0x8f3021  addu        $a2, $a0, $t7
    ctx->pc = 0x448b34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 15)));
    // 0x448b38: 0x8cc205a0  lw          $v0, 0x5A0($a2)
    ctx->pc = 0x448b38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 1440)));
    // 0x448b3c: 0x24a40300  addiu       $a0, $a1, 0x300
    ctx->pc = 0x448b3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 768));
    // 0x448b40: 0x434021  addu        $t0, $v0, $v1
    ctx->pc = 0x448b40u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x448b44: 0x1042021  addu        $a0, $t0, $a0
    ctx->pc = 0x448b44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
    // 0x448b48: 0x1052821  addu        $a1, $t0, $a1
    ctx->pc = 0x448b48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
    // 0x448b4c: 0xad850014  sw          $a1, 0x14($t4)
    ctx->pc = 0x448b4cu;
    WRITE32(ADD32(GPR_U32(ctx, 12), 20), GPR_U32(ctx, 5));
    // 0x448b50: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x448B50u;
    {
        const bool branch_taken_0x448b50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x448B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x448B50u;
        // 0x448b54: 0xad840018  sw          $a0, 0x18($t4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 12), 24), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x448b50) {
            ctx->pc = 0x448B6Cu;
            goto label_448b6c;
        }
    }
    ctx->pc = 0x448B58u;
label_448b58:
    // 0x448b58: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x448b58u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x448b5c: 0x2821821  addu        $v1, $s4, $v0
    ctx->pc = 0x448b5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x448b60: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x448b60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x448b64: 0xad830018  sw          $v1, 0x18($t4)
    ctx->pc = 0x448b64u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 24), GPR_U32(ctx, 3));
    // 0x448b68: 0xad820014  sw          $v0, 0x14($t4)
    ctx->pc = 0x448b68u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 20), GPR_U32(ctx, 2));
label_448b6c:
    // 0x448b6c: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x448b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x448b70: 0x71840  sll         $v1, $a3, 1
    ctx->pc = 0x448b70u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x448b74: 0x1e27c2  srl         $a0, $fp, 31
    ctx->pc = 0x448b74u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 30), 31));
    // 0x448b78: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x448b78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x448b7c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x448b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x448b80: 0x3c42021  addu        $a0, $fp, $a0
    ctx->pc = 0x448b80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 4)));
    // 0x448b84: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x448b84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x448b88: 0x4c843  sra         $t9, $a0, 1
    ctx->pc = 0x448b88u;
    SET_GPR_S32(ctx, 25, SRA32(GPR_S32(ctx, 4), 1));
    // 0x448b8c: 0x1517c2  srl         $v0, $s5, 31
    ctx->pc = 0x448b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 21), 31));
    // 0x448b90: 0x3052804  sllv        $a1, $a1, $t8
    ctx->pc = 0x448b90u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 24) & 0x1F));
    // 0x448b94: 0x8fa70014  lw          $a3, 0x14($sp)
    ctx->pc = 0x448b94u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x448b98: 0x2a23021  addu        $a2, $s5, $v0
    ctx->pc = 0x448b98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x448b9c: 0x42083  sra         $a0, $a0, 2
    ctx->pc = 0x448b9cu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 2));
    // 0x448ba0: 0x6a843  sra         $s5, $a2, 1
    ctx->pc = 0x448ba0u;
    SET_GPR_S32(ctx, 21, SRA32(GPR_S32(ctx, 6), 1));
    // 0x448ba4: 0xe31825  or          $v1, $a3, $v1
    ctx->pc = 0x448ba4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x448ba8: 0xe4843  sra         $t1, $t6, 1
    ctx->pc = 0x448ba8u;
    SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 14), 1));
    // 0x448bac: 0x6af025  or          $fp, $v1, $t2
    ctx->pc = 0x448bacu;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 3) | GPR_U64(ctx, 10));
    // 0x448bb0: 0x103843  sra         $a3, $s0, 1
    ctx->pc = 0x448bb0u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 16), 1));
    // 0x448bb4: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x448bb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x448bb8: 0xad850010  sw          $a1, 0x10($t4)
    ctx->pc = 0x448bb8u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 16), GPR_U32(ctx, 5));
    // 0x448bbc: 0x31043  sra         $v0, $v1, 1
    ctx->pc = 0x448bbcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 1));
    // 0x448bc0: 0x13000008  beqz        $t8, . + 4 + (0x8 << 2)
    ctx->pc = 0x448BC0u;
    {
        const bool branch_taken_0x448bc0 = (GPR_U64(ctx, 24) == GPR_U64(ctx, 0));
        ctx->pc = 0x448BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x448BC0u;
        // 0x448bc4: 0x825021  addu        $t2, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x448bc0) {
            ctx->pc = 0x448BE4u;
            goto label_448be4;
        }
    }
    ctx->pc = 0x448BC8u;
    // 0x448bc8: 0x61083  sra         $v0, $a2, 2
    ctx->pc = 0x448bc8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 6), 2));
    // 0x448bcc: 0x112043  sra         $a0, $s1, 1
    ctx->pc = 0x448bccu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 17), 1));
    // 0x448bd0: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x448bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x448bd4: 0xf21821  addu        $v1, $a3, $s2
    ctx->pc = 0x448bd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 18)));
    // 0x448bd8: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x448bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x448bdc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x448BDCu;
    {
        const bool branch_taken_0x448bdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x448BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x448BDCu;
        // 0x448be0: 0x435821  addu        $t3, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x448bdc) {
            ctx->pc = 0x448BF8u;
            goto label_448bf8;
        }
    }
    ctx->pc = 0x448BE4u;
label_448be4:
    // 0x448be4: 0x61083  sra         $v0, $a2, 2
    ctx->pc = 0x448be4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 6), 2));
    // 0x448be8: 0x111843  sra         $v1, $s1, 1
    ctx->pc = 0x448be8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 17), 1));
    // 0x448bec: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x448becu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x448bf0: 0xf22021  addu        $a0, $a3, $s2
    ctx->pc = 0x448bf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 18)));
    // 0x448bf4: 0x445821  addu        $t3, $v0, $a0
    ctx->pc = 0x448bf4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_448bf8:
    // 0x448bf8: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x448bf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x448bfc: 0xa30c3  sra         $a2, $t2, 3
    ctx->pc = 0x448bfcu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 10), 3));
    // 0x448c00: 0xb28c3  sra         $a1, $t3, 3
    ctx->pc = 0x448c00u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 11), 3));
    // 0x448c04: 0x618c0  sll         $v1, $a2, 3
    ctx->pc = 0x448c04u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x448c08: 0x871021  addu        $v0, $a0, $a3
    ctx->pc = 0x448c08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x448c0c: 0x1431823  subu        $v1, $t2, $v1
    ctx->pc = 0x448c0cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 3)));
    // 0x448c10: 0x8fa70008  lw          $a3, 0x8($sp)
    ctx->pc = 0x448c10u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x448c14: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x448c14u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x448c18: 0x24420200  addiu       $v0, $v0, 0x200
    ctx->pc = 0x448c18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 512));
    // 0x448c1c: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x448c1cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x448c20: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x448c20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x448c24: 0x1645823  subu        $t3, $t3, $a0
    ctx->pc = 0x448c24u;
    SET_GPR_S32(ctx, 11, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 4)));
    // 0x448c28: 0x33270001  andi        $a3, $t9, 0x1
    ctx->pc = 0x448c28u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 25) & (uint64_t)(uint16_t)1);
    // 0x448c2c: 0x32aa0001  andi        $t2, $s5, 0x1
    ctx->pc = 0x448c2cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)1);
    // 0x448c30: 0xada30004  sw          $v1, 0x4($t5)
    ctx->pc = 0x448c30u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 4), GPR_U32(ctx, 3));
    // 0x448c34: 0x1140000f  beqz        $t2, . + 4 + (0xF << 2)
    ctx->pc = 0x448C34u;
    {
        const bool branch_taken_0x448c34 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x448C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x448C34u;
        // 0x448c38: 0xada20000  sw          $v0, 0x0($t5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x448c34) {
            ctx->pc = 0x448C74u;
            goto label_448c74;
        }
    }
    ctx->pc = 0x448C3Cu;
    // 0x448c3c: 0x3091004  sllv        $v0, $t1, $t8
    ctx->pc = 0x448c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), GPR_U32(ctx, 24) & 0x1F));
    // 0x448c40: 0x1621021  addu        $v0, $t3, $v0
    ctx->pc = 0x448c40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
    // 0x448c44: 0x28420008  slti        $v0, $v0, 0x8
    ctx->pc = 0x448c44u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x448c48: 0x54400017  bnel        $v0, $zero, . + 4 + (0x17 << 2)
    ctx->pc = 0x448C48u;
    {
        const bool branch_taken_0x448c48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x448c48) {
            ctx->pc = 0x448C4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x448C48u;
            // 0x448c4c: 0xada90008  sw          $t1, 0x8($t5) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 13), 8), GPR_U32(ctx, 9));
            ctx->in_delay_slot = false;
            ctx->pc = 0x448CA8u;
            goto label_448ca8;
        }
    }
    ctx->pc = 0x448C50u;
    // 0x448c50: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x448c50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x448c54: 0x30b1807  srav        $v1, $t3, $t8
    ctx->pc = 0x448c54u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 11), GPR_U32(ctx, 24) & 0x1F));
    // 0x448c58: 0x3021007  srav        $v0, $v0, $t8
    ctx->pc = 0x448c58u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 24) & 0x1F));
    // 0x448c5c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x448c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x448c60: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x448c60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x448c64: 0x1221823  subu        $v1, $t1, $v0
    ctx->pc = 0x448c64u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x448c68: 0xada20008  sw          $v0, 0x8($t5)
    ctx->pc = 0x448c68u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 8), GPR_U32(ctx, 2));
    // 0x448c6c: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x448C6Cu;
    {
        const bool branch_taken_0x448c6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x448C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x448C6Cu;
        // 0x448c70: 0xada3000c  sw          $v1, 0xC($t5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 13), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x448c6c) {
            ctx->pc = 0x448CACu;
            goto label_448cac;
        }
    }
    ctx->pc = 0x448C74u;
label_448c74:
    // 0x448c74: 0x3091004  sllv        $v0, $t1, $t8
    ctx->pc = 0x448c74u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), GPR_U32(ctx, 24) & 0x1F));
    // 0x448c78: 0x1621021  addu        $v0, $t3, $v0
    ctx->pc = 0x448c78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
    // 0x448c7c: 0x28420009  slti        $v0, $v0, 0x9
    ctx->pc = 0x448c7cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x448c80: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x448C80u;
    {
        const bool branch_taken_0x448c80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x448c80) {
            ctx->pc = 0x448C84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x448C80u;
            // 0x448c84: 0xada90008  sw          $t1, 0x8($t5) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 13), 8), GPR_U32(ctx, 9));
            ctx->in_delay_slot = false;
            ctx->pc = 0x448CA8u;
            goto label_448ca8;
        }
    }
    ctx->pc = 0x448C88u;
    // 0x448c88: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x448c88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x448c8c: 0x30b1807  srav        $v1, $t3, $t8
    ctx->pc = 0x448c8cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 11), GPR_U32(ctx, 24) & 0x1F));
    // 0x448c90: 0x3021007  srav        $v0, $v0, $t8
    ctx->pc = 0x448c90u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 24) & 0x1F));
    // 0x448c94: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x448c94u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x448c98: 0x1222023  subu        $a0, $t1, $v0
    ctx->pc = 0x448c98u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x448c9c: 0xada20008  sw          $v0, 0x8($t5)
    ctx->pc = 0x448c9cu;
    WRITE32(ADD32(GPR_U32(ctx, 13), 8), GPR_U32(ctx, 2));
    // 0x448ca0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x448CA0u;
    {
        const bool branch_taken_0x448ca0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x448CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x448CA0u;
        // 0x448ca4: 0xada4000c  sw          $a0, 0xC($t5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 13), 12), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x448ca0) {
            ctx->pc = 0x448CACu;
            goto label_448cac;
        }
    }
    ctx->pc = 0x448CA8u;
label_448ca8:
    // 0x448ca8: 0xada0000c  sw          $zero, 0xC($t5)
    ctx->pc = 0x448ca8u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 12), GPR_U32(ctx, 0));
label_448cac:
    // 0x448cac: 0xd61023  subu        $v0, $a2, $s6
    ctx->pc = 0x448cacu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 22)));
    // 0x448cb0: 0xb71823  subu        $v1, $a1, $s7
    ctx->pc = 0x448cb0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 23)));
    // 0x448cb4: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x448cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x448cb8: 0x24040180  addiu       $a0, $zero, 0x180
    ctx->pc = 0x448cb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 384));
    // 0x448cbc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x448cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x448cc0: 0x8de5087c  lw          $a1, 0x87C($t7)
    ctx->pc = 0x448cc0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 2172)));
    // 0x448cc4: 0x441818  mult        $v1, $v0, $a0
    ctx->pc = 0x448cc4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x448cc8: 0x14a00009  bnez        $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x448CC8u;
    {
        const bool branch_taken_0x448cc8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x448CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x448CC8u;
        // 0x448ccc: 0x1032021  addu        $a0, $t0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x448cc8) {
            ctx->pc = 0x448CF0u;
            goto label_448cf0;
        }
    }
    ctx->pc = 0x448CD0u;
    // 0x448cd0: 0xb10c0  sll         $v0, $t3, 3
    ctx->pc = 0x448cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 11), 3));
    // 0x448cd4: 0x24430400  addiu       $v1, $v0, 0x400
    ctx->pc = 0x448cd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1024));
    // 0x448cd8: 0x24420100  addiu       $v0, $v0, 0x100
    ctx->pc = 0x448cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 256));
    // 0x448cdc: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x448cdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x448ce0: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x448ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x448ce4: 0xada30018  sw          $v1, 0x18($t5)
    ctx->pc = 0x448ce4u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 24), GPR_U32(ctx, 3));
    // 0x448ce8: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x448CE8u;
    {
        const bool branch_taken_0x448ce8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x448CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x448CE8u;
        // 0x448cec: 0xada20014  sw          $v0, 0x14($t5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 13), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x448ce8) {
            ctx->pc = 0x448D30u;
            goto label_448d30;
        }
    }
    ctx->pc = 0x448CF0u;
label_448cf0:
    // 0x448cf0: 0xb20c0  sll         $a0, $t3, 3
    ctx->pc = 0x448cf0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 11), 3));
    // 0x448cf4: 0x24850100  addiu       $a1, $a0, 0x100
    ctx->pc = 0x448cf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 256));
    // 0x448cf8: 0x651021  addu        $v0, $v1, $a1
    ctx->pc = 0x448cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x448cfc: 0x2c420301  sltiu       $v0, $v0, 0x301
    ctx->pc = 0x448cfcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)769) ? 1 : 0);
    // 0x448d00: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x448D00u;
    {
        const bool branch_taken_0x448d00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x448D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x448D00u;
        // 0x448d04: 0x2631021  addu        $v0, $s3, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x448d00) {
            ctx->pc = 0x448D14u;
            goto label_448d14;
        }
    }
    ctx->pc = 0x448D08u;
    // 0x448d08: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x448d08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x448d0c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x448D0Cu;
    {
        const bool branch_taken_0x448d0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x448D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x448D0Cu;
        // 0x448d10: 0x2831821  addu        $v1, $s4, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x448d0c) {
            ctx->pc = 0x448D20u;
            goto label_448d20;
        }
    }
    ctx->pc = 0x448D14u;
label_448d14:
    // 0x448d14: 0x2831821  addu        $v1, $s4, $v1
    ctx->pc = 0x448d14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x448d18: 0x651021  addu        $v0, $v1, $a1
    ctx->pc = 0x448d18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x448d1c: 0x2442fd00  addiu       $v0, $v0, -0x300
    ctx->pc = 0x448d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966528));
label_448d20:
    // 0x448d20: 0xada20014  sw          $v0, 0x14($t5)
    ctx->pc = 0x448d20u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 20), GPR_U32(ctx, 2));
    // 0x448d24: 0x24820100  addiu       $v0, $a0, 0x100
    ctx->pc = 0x448d24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 256));
    // 0x448d28: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x448d28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x448d2c: 0xada20018  sw          $v0, 0x18($t5)
    ctx->pc = 0x448d2cu;
    WRITE32(ADD32(GPR_U32(ctx, 13), 24), GPR_U32(ctx, 2));
label_448d30:
    // 0x448d30: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x448d30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x448d34: 0x3c040052  lui         $a0, 0x52
    ctx->pc = 0x448d34u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)82 << 16));
    // 0x448d38: 0x3021004  sllv        $v0, $v0, $t8
    ctx->pc = 0x448d38u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 24) & 0x1F));
    // 0x448d3c: 0x2484a618  addiu       $a0, $a0, -0x59E8
    ctx->pc = 0x448d3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294944280));
    // 0x448d40: 0xada20010  sw          $v0, 0x10($t5)
    ctx->pc = 0x448d40u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 16), GPR_U32(ctx, 2));
    // 0x448d44: 0x71840  sll         $v1, $a3, 1
    ctx->pc = 0x448d44u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x448d48: 0x1e1080  sll         $v0, $fp, 2
    ctx->pc = 0x448d48u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 30), 2));
    // 0x448d4c: 0x24060140  addiu       $a2, $zero, 0x140
    ctx->pc = 0x448d4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    // 0x448d50: 0x8fa80014  lw          $t0, 0x14($sp)
    ctx->pc = 0x448d50u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x448d54: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x448d54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x448d58: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x448d58u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x448d5c: 0x8de50820  lw          $a1, 0x820($t7)
    ctx->pc = 0x448d5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 2080)));
    // 0x448d60: 0x1031825  or          $v1, $t0, $v1
    ctx->pc = 0x448d60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) | GPR_U64(ctx, 3));
    // 0x448d64: 0x6a1825  or          $v1, $v1, $t2
    ctx->pc = 0x448d64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 10));
    // 0x448d68: 0x3c020052  lui         $v0, 0x52
    ctx->pc = 0x448d68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)82 << 16));
    // 0x448d6c: 0xa62818  mult        $a1, $a1, $a2
    ctx->pc = 0x448d6cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x448d70: 0x2442a638  addiu       $v0, $v0, -0x59C8
    ctx->pc = 0x448d70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944312));
    // 0x448d74: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x448d74u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x448d78: 0x8fa6000c  lw          $a2, 0xC($sp)
    ctx->pc = 0x448d78u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x448d7c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x448d7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x448d80: 0xdfbe00a0  ld          $fp, 0xA0($sp)
    ctx->pc = 0x448d80u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x448d84: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x448d84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x448d88: 0xdfb70090  ld          $s7, 0x90($sp)
    ctx->pc = 0x448d88u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x448d8c: 0x452021  addu        $a0, $v0, $a1
    ctx->pc = 0x448d8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x448d90: 0xdfb60080  ld          $s6, 0x80($sp)
    ctx->pc = 0x448d90u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x448d94: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x448d94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x448d98: 0xdfb50070  ld          $s5, 0x70($sp)
    ctx->pc = 0x448d98u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x448d9c: 0x1e43021  addu        $a2, $t7, $a0
    ctx->pc = 0x448d9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 4)));
    // 0x448da0: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x448da0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x448da4: 0xacc705c8  sw          $a3, 0x5C8($a2)
    ctx->pc = 0x448da4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 1480), GPR_U32(ctx, 7));
    // 0x448da8: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x448da8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x448dac: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x448dacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x448db0: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x448db0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x448db4: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x448db4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x448db8: 0xdfb30050  ld          $s3, 0x50($sp)
    ctx->pc = 0x448db8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x448dbc: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x448dbcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x448dc0: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x448dc0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x448dc4: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x448dc4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x448dc8: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x448dc8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x448dcc: 0xac8605d8  sw          $a2, 0x5D8($a0)
    ctx->pc = 0x448dccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1496), GPR_U32(ctx, 6));
    // 0x448dd0: 0x3e00008  jr          $ra
    ctx->pc = 0x448DD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x448DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x448DD0u;
        // 0x448dd4: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x448DD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x448DD8u;
}
