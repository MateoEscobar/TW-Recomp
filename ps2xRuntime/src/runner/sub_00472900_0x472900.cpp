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

// Function: sub_00472900
// Address: 0x472900 - 0x472c08
void sub_00472900_0x472900(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00472900_0x472900");
#endif

    switch (ctx->pc) {
        case 0x472928u: goto label_472928;
        case 0x472950u: goto label_472950;
        case 0x47297cu: goto label_47297c;
        case 0x4729a8u: goto label_4729a8;
        case 0x4729d4u: goto label_4729d4;
        case 0x4729f4u: goto label_4729f4;
        case 0x472a10u: goto label_472a10;
        case 0x472a34u: goto label_472a34;
        case 0x472a58u: goto label_472a58;
        case 0x472a74u: goto label_472a74;
        case 0x472a90u: goto label_472a90;
        case 0x472ab4u: goto label_472ab4;
        case 0x472ad8u: goto label_472ad8;
        case 0x472af4u: goto label_472af4;
        case 0x472b18u: goto label_472b18;
        case 0x472b34u: goto label_472b34;
        case 0x472b58u: goto label_472b58;
        case 0x472b74u: goto label_472b74;
        case 0x472b98u: goto label_472b98;
        case 0x472bb4u: goto label_472bb4;
        case 0x472bd8u: goto label_472bd8;
        case 0x472becu: goto label_472bec;
        default: break;
    }

    ctx->pc = 0x472900u;

    // 0x472900: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x472900u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x472904: 0x3c060047  lui         $a2, 0x47
    ctx->pc = 0x472904u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)71 << 16));
    // 0x472908: 0x3c070047  lui         $a3, 0x47
    ctx->pc = 0x472908u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)71 << 16));
    // 0x47290c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x47290cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x472910: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x472910u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x472914: 0x24c632a8  addiu       $a2, $a2, 0x32A8
    ctx->pc = 0x472914u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 12968));
    // 0x472918: 0x24e73388  addiu       $a3, $a3, 0x3388
    ctx->pc = 0x472918u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 13192));
    // 0x47291c: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x47291cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x472920: 0xc120d9a  jal         func_483668
    ctx->pc = 0x472920u;
    SET_GPR_U32(ctx, 31, 0x472928u);
    ctx->pc = 0x472924u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x472920u;
    // 0x472924: 0x24050509  addiu       $a1, $zero, 0x509 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1289));
    ctx->in_delay_slot = false;
    ctx->pc = 0x483668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x483668u, 0x472920u, 0x472928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x472928u;
label_472928:
    // 0x472928: 0x3c060047  lui         $a2, 0x47
    ctx->pc = 0x472928u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)71 << 16));
    // 0x47292c: 0x3c070047  lui         $a3, 0x47
    ctx->pc = 0x47292cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)71 << 16));
    // 0x472930: 0x3c080047  lui         $t0, 0x47
    ctx->pc = 0x472930u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)71 << 16));
    // 0x472934: 0x24c63418  addiu       $a2, $a2, 0x3418
    ctx->pc = 0x472934u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 13336));
    // 0x472938: 0x24e734c8  addiu       $a3, $a3, 0x34C8
    ctx->pc = 0x472938u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 13512));
    // 0x47293c: 0x25083478  addiu       $t0, $t0, 0x3478
    ctx->pc = 0x47293cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 13432));
    // 0x472940: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x472940u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x472944: 0x2404001c  addiu       $a0, $zero, 0x1C
    ctx->pc = 0x472944u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x472948: 0xc120b0c  jal         func_482C30
    ctx->pc = 0x472948u;
    SET_GPR_U32(ctx, 31, 0x472950u);
    ctx->pc = 0x47294Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x472948u;
    // 0x47294c: 0x24050509  addiu       $a1, $zero, 0x509 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1289));
    ctx->in_delay_slot = false;
    ctx->pc = 0x482C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x482C30u, 0x472948u, 0x472950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x472950u;
label_472950:
    // 0x472950: 0x3c060047  lui         $a2, 0x47
    ctx->pc = 0x472950u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)71 << 16));
    // 0x472954: 0x3c070047  lui         $a3, 0x47
    ctx->pc = 0x472954u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)71 << 16));
    // 0x472958: 0x3c080047  lui         $t0, 0x47
    ctx->pc = 0x472958u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)71 << 16));
    // 0x47295c: 0x24c63538  addiu       $a2, $a2, 0x3538
    ctx->pc = 0x47295cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 13624));
    // 0x472960: 0x24e73578  addiu       $a3, $a3, 0x3578
    ctx->pc = 0x472960u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 13688));
    // 0x472964: 0x25083570  addiu       $t0, $t0, 0x3570
    ctx->pc = 0x472964u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 13680));
    // 0x472968: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x472968u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x47296c: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x47296cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x472970: 0x24050509  addiu       $a1, $zero, 0x509
    ctx->pc = 0x472970u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1289));
    // 0x472974: 0xc11a9d2  jal         func_46A748
    ctx->pc = 0x472974u;
    SET_GPR_U32(ctx, 31, 0x47297Cu);
    ctx->pc = 0x472978u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x472974u;
    // 0x472978: 0xaf828518  sw          $v0, -0x7AE8($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935832), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x46A748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46A748u, 0x472974u, 0x47297Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47297Cu;
label_47297c:
    // 0x47297c: 0x3c060047  lui         $a2, 0x47
    ctx->pc = 0x47297cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)71 << 16));
    // 0x472980: 0x3c070047  lui         $a3, 0x47
    ctx->pc = 0x472980u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)71 << 16));
    // 0x472984: 0x3c080047  lui         $t0, 0x47
    ctx->pc = 0x472984u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)71 << 16));
    // 0x472988: 0x24c63648  addiu       $a2, $a2, 0x3648
    ctx->pc = 0x472988u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 13896));
    // 0x47298c: 0x24e736b8  addiu       $a3, $a3, 0x36B8
    ctx->pc = 0x47298cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 14008));
    // 0x472990: 0x25083678  addiu       $t0, $t0, 0x3678
    ctx->pc = 0x472990u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 13944));
    // 0x472994: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x472994u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x472998: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x472998u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x47299c: 0x24050509  addiu       $a1, $zero, 0x509
    ctx->pc = 0x47299cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1289));
    // 0x4729a0: 0xc11a9e4  jal         func_46A790
    ctx->pc = 0x4729A0u;
    SET_GPR_U32(ctx, 31, 0x4729A8u);
    ctx->pc = 0x4729A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4729A0u;
    // 0x4729a4: 0xaf82851c  sw          $v0, -0x7AE4($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935836), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x46A790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46A790u, 0x4729A0u, 0x4729A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4729A8u;
label_4729a8:
    // 0x4729a8: 0x3c060047  lui         $a2, 0x47
    ctx->pc = 0x4729a8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)71 << 16));
    // 0x4729ac: 0x3c070047  lui         $a3, 0x47
    ctx->pc = 0x4729acu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)71 << 16));
    // 0x4729b0: 0x3c080047  lui         $t0, 0x47
    ctx->pc = 0x4729b0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)71 << 16));
    // 0x4729b4: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x4729b4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x4729b8: 0x24c636c0  addiu       $a2, $a2, 0x36C0
    ctx->pc = 0x4729b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 14016));
    // 0x4729bc: 0x24e73728  addiu       $a3, $a3, 0x3728
    ctx->pc = 0x4729bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 14120));
    // 0x4729c0: 0x250836e8  addiu       $t0, $t0, 0x36E8
    ctx->pc = 0x4729c0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 14056));
    // 0x4729c4: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x4729c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x4729c8: 0x24050509  addiu       $a1, $zero, 0x509
    ctx->pc = 0x4729c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1289));
    // 0x4729cc: 0xc11b242  jal         func_46C908
    ctx->pc = 0x4729CCu;
    SET_GPR_U32(ctx, 31, 0x4729D4u);
    ctx->pc = 0x4729D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4729CCu;
    // 0x4729d0: 0xaf828520  sw          $v0, -0x7AE0($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935840), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x46C908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46C908u, 0x4729CCu, 0x4729D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4729D4u;
label_4729d4:
    // 0x4729d4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x4729d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4729d8: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x4729d8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x4729dc: 0x2405050e  addiu       $a1, $zero, 0x50E
    ctx->pc = 0x4729dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1294));
    // 0x4729e0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x4729e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4729e4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x4729e4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4729e8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x4729e8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4729ec: 0xc11b046  jal         func_46C118
    ctx->pc = 0x4729ECu;
    SET_GPR_U32(ctx, 31, 0x4729F4u);
    ctx->pc = 0x4729F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4729ECu;
    // 0x4729f0: 0xaf828524  sw          $v0, -0x7ADC($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935844), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x46C118u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46C118u, 0x4729ECu, 0x4729F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4729F4u;
label_4729f4:
    // 0x4729f4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x4729f4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4729f8: 0x2405050e  addiu       $a1, $zero, 0x50E
    ctx->pc = 0x4729f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1294));
    // 0x4729fc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x4729fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x472a00: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x472a00u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x472a04: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x472a04u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x472a08: 0xc11c222  jal         func_470888
    ctx->pc = 0x472A08u;
    SET_GPR_U32(ctx, 31, 0x472A10u);
    ctx->pc = 0x472A0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x472A08u;
    // 0x472a0c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x470888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x470888u, 0x472A08u, 0x472A10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x472A10u;
label_472a10:
    // 0x472a10: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x472a10u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x472a14: 0x3c060047  lui         $a2, 0x47
    ctx->pc = 0x472a14u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)71 << 16));
    // 0x472a18: 0x3c070047  lui         $a3, 0x47
    ctx->pc = 0x472a18u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)71 << 16));
    // 0x472a1c: 0x24a53970  addiu       $a1, $a1, 0x3970
    ctx->pc = 0x472a1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14704));
    // 0x472a20: 0x24c63940  addiu       $a2, $a2, 0x3940
    ctx->pc = 0x472a20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 14656));
    // 0x472a24: 0x24e739b8  addiu       $a3, $a3, 0x39B8
    ctx->pc = 0x472a24u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 14776));
    // 0x472a28: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x472a28u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x472a2c: 0xc11b058  jal         func_46C160
    ctx->pc = 0x472A2Cu;
    SET_GPR_U32(ctx, 31, 0x472A34u);
    ctx->pc = 0x472A30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x472A2Cu;
    // 0x472a30: 0x2404050e  addiu       $a0, $zero, 0x50E (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1294));
    ctx->in_delay_slot = false;
    ctx->pc = 0x46C160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46C160u, 0x472A2Cu, 0x472A34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x472A34u;
label_472a34:
    // 0x472a34: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x472a34u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x472a38: 0x3c060047  lui         $a2, 0x47
    ctx->pc = 0x472a38u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)71 << 16));
    // 0x472a3c: 0x3c070047  lui         $a3, 0x47
    ctx->pc = 0x472a3cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)71 << 16));
    // 0x472a40: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x472a40u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x472a44: 0x24a53b00  addiu       $a1, $a1, 0x3B00
    ctx->pc = 0x472a44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15104));
    // 0x472a48: 0x24c63ab8  addiu       $a2, $a2, 0x3AB8
    ctx->pc = 0x472a48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 15032));
    // 0x472a4c: 0x24e73b58  addiu       $a3, $a3, 0x3B58
    ctx->pc = 0x472a4cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 15192));
    // 0x472a50: 0xc11c234  jal         func_4708D0
    ctx->pc = 0x472A50u;
    SET_GPR_U32(ctx, 31, 0x472A58u);
    ctx->pc = 0x472A54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x472A50u;
    // 0x472a54: 0x2404050e  addiu       $a0, $zero, 0x50E (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1294));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4708D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4708D0u, 0x472A50u, 0x472A58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x472A58u;
label_472a58:
    // 0x472a58: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x472a58u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x472a5c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x472a5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x472a60: 0x24050510  addiu       $a1, $zero, 0x510
    ctx->pc = 0x472a60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1296));
    // 0x472a64: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x472a64u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x472a68: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x472a68u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x472a6c: 0xc11b046  jal         func_46C118
    ctx->pc = 0x472A6Cu;
    SET_GPR_U32(ctx, 31, 0x472A74u);
    ctx->pc = 0x472A70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x472A6Cu;
    // 0x472a70: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x46C118u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46C118u, 0x472A6Cu, 0x472A74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x472A74u;
label_472a74:
    // 0x472a74: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x472a74u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x472a78: 0x24050510  addiu       $a1, $zero, 0x510
    ctx->pc = 0x472a78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1296));
    // 0x472a7c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x472a7cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x472a80: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x472a80u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x472a84: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x472a84u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x472a88: 0xc11c222  jal         func_470888
    ctx->pc = 0x472A88u;
    SET_GPR_U32(ctx, 31, 0x472A90u);
    ctx->pc = 0x472A8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x472A88u;
    // 0x472a8c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x470888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x470888u, 0x472A88u, 0x472A90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x472A90u;
label_472a90:
    // 0x472a90: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x472a90u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x472a94: 0x3c060047  lui         $a2, 0x47
    ctx->pc = 0x472a94u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)71 << 16));
    // 0x472a98: 0x3c070047  lui         $a3, 0x47
    ctx->pc = 0x472a98u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)71 << 16));
    // 0x472a9c: 0x24a539f8  addiu       $a1, $a1, 0x39F8
    ctx->pc = 0x472a9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14840));
    // 0x472aa0: 0x24c639d8  addiu       $a2, $a2, 0x39D8
    ctx->pc = 0x472aa0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 14808));
    // 0x472aa4: 0x24e73a28  addiu       $a3, $a3, 0x3A28
    ctx->pc = 0x472aa4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 14888));
    // 0x472aa8: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x472aa8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x472aac: 0xc11b058  jal         func_46C160
    ctx->pc = 0x472AACu;
    SET_GPR_U32(ctx, 31, 0x472AB4u);
    ctx->pc = 0x472AB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x472AACu;
    // 0x472ab0: 0x24040510  addiu       $a0, $zero, 0x510 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1296));
    ctx->in_delay_slot = false;
    ctx->pc = 0x46C160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46C160u, 0x472AACu, 0x472AB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x472AB4u;
label_472ab4:
    // 0x472ab4: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x472ab4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x472ab8: 0x3c060047  lui         $a2, 0x47
    ctx->pc = 0x472ab8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)71 << 16));
    // 0x472abc: 0x3c070047  lui         $a3, 0x47
    ctx->pc = 0x472abcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)71 << 16));
    // 0x472ac0: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x472ac0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x472ac4: 0x24a53a68  addiu       $a1, $a1, 0x3A68
    ctx->pc = 0x472ac4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14952));
    // 0x472ac8: 0x24c63a48  addiu       $a2, $a2, 0x3A48
    ctx->pc = 0x472ac8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 14920));
    // 0x472acc: 0x24e73a98  addiu       $a3, $a3, 0x3A98
    ctx->pc = 0x472accu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 15000));
    // 0x472ad0: 0xc11c234  jal         func_4708D0
    ctx->pc = 0x472AD0u;
    SET_GPR_U32(ctx, 31, 0x472AD8u);
    ctx->pc = 0x472AD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x472AD0u;
    // 0x472ad4: 0x24040510  addiu       $a0, $zero, 0x510 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1296));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4708D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4708D0u, 0x472AD0u, 0x472AD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x472AD8u;
label_472ad8:
    // 0x472ad8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x472ad8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x472adc: 0x2405001f  addiu       $a1, $zero, 0x1F
    ctx->pc = 0x472adcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x472ae0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x472ae0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x472ae4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x472ae4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x472ae8: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x472ae8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x472aec: 0xc11a9d2  jal         func_46A748
    ctx->pc = 0x472AECu;
    SET_GPR_U32(ctx, 31, 0x472AF4u);
    ctx->pc = 0x472AF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x472AECu;
    // 0x472af0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x46A748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46A748u, 0x472AECu, 0x472AF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x472AF4u;
label_472af4:
    // 0x472af4: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x472af4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x472af8: 0x3c060047  lui         $a2, 0x47
    ctx->pc = 0x472af8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)71 << 16));
    // 0x472afc: 0x3c070047  lui         $a3, 0x47
    ctx->pc = 0x472afcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)71 << 16));
    // 0x472b00: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x472b00u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x472b04: 0x24a59d68  addiu       $a1, $a1, -0x6298
    ctx->pc = 0x472b04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294942056));
    // 0x472b08: 0x24c69dd8  addiu       $a2, $a2, -0x6228
    ctx->pc = 0x472b08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294942168));
    // 0x472b0c: 0x24e79e40  addiu       $a3, $a3, -0x61C0
    ctx->pc = 0x472b0cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294942272));
    // 0x472b10: 0xc11a9f6  jal         func_46A7D8
    ctx->pc = 0x472B10u;
    SET_GPR_U32(ctx, 31, 0x472B18u);
    ctx->pc = 0x472B14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x472B10u;
    // 0x472b14: 0x2404001f  addiu       $a0, $zero, 0x1F (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    ctx->in_delay_slot = false;
    ctx->pc = 0x46A7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46A7D8u, 0x472B10u, 0x472B18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x472B18u;
label_472b18:
    // 0x472b18: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x472b18u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x472b1c: 0x2405001f  addiu       $a1, $zero, 0x1F
    ctx->pc = 0x472b1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x472b20: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x472b20u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x472b24: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x472b24u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x472b28: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x472b28u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x472b2c: 0xc11c7a4  jal         func_471E90
    ctx->pc = 0x472B2Cu;
    SET_GPR_U32(ctx, 31, 0x472B34u);
    ctx->pc = 0x472B30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x472B2Cu;
    // 0x472b30: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x471E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x471E90u, 0x472B2Cu, 0x472B34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x472B34u;
label_472b34:
    // 0x472b34: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x472b34u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x472b38: 0x3c060047  lui         $a2, 0x47
    ctx->pc = 0x472b38u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)71 << 16));
    // 0x472b3c: 0x3c070047  lui         $a3, 0x47
    ctx->pc = 0x472b3cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)71 << 16));
    // 0x472b40: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x472b40u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x472b44: 0x24a588f0  addiu       $a1, $a1, -0x7710
    ctx->pc = 0x472b44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936816));
    // 0x472b48: 0x24c68960  addiu       $a2, $a2, -0x76A0
    ctx->pc = 0x472b48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294936928));
    // 0x472b4c: 0x24e789c8  addiu       $a3, $a3, -0x7638
    ctx->pc = 0x472b4cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294937032));
    // 0x472b50: 0xc11c7b6  jal         func_471ED8
    ctx->pc = 0x472B50u;
    SET_GPR_U32(ctx, 31, 0x472B58u);
    ctx->pc = 0x472B54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x472B50u;
    // 0x472b54: 0x2404001f  addiu       $a0, $zero, 0x1F (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    ctx->in_delay_slot = false;
    ctx->pc = 0x471ED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x471ED8u, 0x472B50u, 0x472B58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x472B58u;
label_472b58:
    // 0x472b58: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x472b58u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x472b5c: 0x2405001f  addiu       $a1, $zero, 0x1F
    ctx->pc = 0x472b5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x472b60: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x472b60u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x472b64: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x472b64u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x472b68: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x472b68u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x472b6c: 0xc11c222  jal         func_470888
    ctx->pc = 0x472B6Cu;
    SET_GPR_U32(ctx, 31, 0x472B74u);
    ctx->pc = 0x472B70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x472B6Cu;
    // 0x472b70: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x470888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x470888u, 0x472B6Cu, 0x472B74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x472B74u;
label_472b74:
    // 0x472b74: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x472b74u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x472b78: 0x3c060047  lui         $a2, 0x47
    ctx->pc = 0x472b78u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)71 << 16));
    // 0x472b7c: 0x3c070047  lui         $a3, 0x47
    ctx->pc = 0x472b7cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)71 << 16));
    // 0x472b80: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x472b80u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x472b84: 0x24a589f0  addiu       $a1, $a1, -0x7610
    ctx->pc = 0x472b84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294937072));
    // 0x472b88: 0x24c68a60  addiu       $a2, $a2, -0x75A0
    ctx->pc = 0x472b88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294937184));
    // 0x472b8c: 0x24e78ac8  addiu       $a3, $a3, -0x7538
    ctx->pc = 0x472b8cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294937288));
    // 0x472b90: 0xc11c234  jal         func_4708D0
    ctx->pc = 0x472B90u;
    SET_GPR_U32(ctx, 31, 0x472B98u);
    ctx->pc = 0x472B94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x472B90u;
    // 0x472b94: 0x2404001f  addiu       $a0, $zero, 0x1F (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4708D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4708D0u, 0x472B90u, 0x472B98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x472B98u;
label_472b98:
    // 0x472b98: 0x2405001f  addiu       $a1, $zero, 0x1F
    ctx->pc = 0x472b98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x472b9c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x472b9cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x472ba0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x472ba0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x472ba4: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x472ba4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x472ba8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x472ba8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x472bac: 0xc11b41a  jal         func_46D068
    ctx->pc = 0x472BACu;
    SET_GPR_U32(ctx, 31, 0x472BB4u);
    ctx->pc = 0x472BB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x472BACu;
    // 0x472bb0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x46D068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46D068u, 0x472BACu, 0x472BB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x472BB4u;
label_472bb4:
    // 0x472bb4: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x472bb4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x472bb8: 0x3c060047  lui         $a2, 0x47
    ctx->pc = 0x472bb8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)71 << 16));
    // 0x472bbc: 0x3c070047  lui         $a3, 0x47
    ctx->pc = 0x472bbcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)71 << 16));
    // 0x472bc0: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x472bc0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x472bc4: 0x24a5cdc8  addiu       $a1, $a1, -0x3238
    ctx->pc = 0x472bc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954440));
    // 0x472bc8: 0x24c6ce38  addiu       $a2, $a2, -0x31C8
    ctx->pc = 0x472bc8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294954552));
    // 0x472bcc: 0x24e7cea0  addiu       $a3, $a3, -0x3160
    ctx->pc = 0x472bccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294954656));
    // 0x472bd0: 0xc11b42c  jal         func_46D0B0
    ctx->pc = 0x472BD0u;
    SET_GPR_U32(ctx, 31, 0x472BD8u);
    ctx->pc = 0x472BD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x472BD0u;
    // 0x472bd4: 0x2404001f  addiu       $a0, $zero, 0x1F (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    ctx->in_delay_slot = false;
    ctx->pc = 0x46D0B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46D0B0u, 0x472BD0u, 0x472BD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x472BD8u;
label_472bd8:
    // 0x472bd8: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x472bd8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x472bdc: 0x6020004  bltzl       $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x472BDCu;
    {
        const bool branch_taken_0x472bdc = (GPR_S32(ctx, 16) < 0);
        if (branch_taken_0x472bdc) {
            ctx->pc = 0x472BE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x472BDCu;
            // 0x472be0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x472BF0u;
            goto label_472bf0;
        }
    }
    ctx->pc = 0x472BE4u;
    // 0x472be4: 0xc11cf8c  jal         func_473E30
    ctx->pc = 0x472BE4u;
    SET_GPR_U32(ctx, 31, 0x472BECu);
    ctx->pc = 0x473E30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x473E30u, 0x472BE4u, 0x472BECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x472BECu;
label_472bec:
    // 0x472bec: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x472becu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_472bf0:
    // 0x472bf0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x472bf0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x472bf4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x472bf4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x472bf8: 0x3e00008  jr          $ra
    ctx->pc = 0x472BF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x472BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x472BF8u;
        // 0x472bfc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x472BF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x472C00u;
    // 0x472c00: 0x27bd00b0  addiu       $sp, $sp, 0xB0
    ctx->pc = 0x472c00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x472c04: 0x0  nop
    ctx->pc = 0x472c04u;
    // NOP
    ctx->pc = 0x472c08u;
}
